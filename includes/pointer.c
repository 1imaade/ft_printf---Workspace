#include <stdio.h>

int main(void)
{
	void *p;
	void *j;
	void *l;

	int n[] = {10, 20, 30};                   /* 4 bytes per int */
	char s[] = "imad ait lachgar";             /* 1 byte per char */
	char *d[] = {"imad", "ahmed", "walide"};   /* 8 bytes per pointer (64-bit) */
	int i = 20;

	/* 1. Primitive: requires & because 'i' is a value, not an address */
	p = &i;
	printf("\n%p\n", p);
	printf("%p\n", (void *)&i);
	printf("%p\n", (void *)&p);
	/* (int *) sets step to 4 bytes; * fetches the value (20) */
	printf("%d\n", *(int *)p);

	/* 2. Array: 's' automatically decays to &s[0] (no & needed) */
	p = s;
	printf("%p\n", p);
	printf("%p\n", (void *)&s);
	printf("%p\n", (void *)&p);
	/* %s expects starting address (char *), not a dereferenced char */
	printf("%s\n", (char *)p);

	/* 3. Pointer math on int array */
	j = n;
	printf("\n%p\n", j);
	printf("%p\n", (void *)&n);
	printf("%p\n", (void *)&j);
	printf("%d\n", ((int *)j)[0]); /* Typed: steps by sizeof(int) (4B) */
	printf("%d\n", *(int *)&j[4]); /* Raw bytes: 4B jump = index 1 (20) */
	printf("%d\n", *(int *)&j[8]); /* Raw bytes: 8B jump = index 2 (30) */

	/* 4. Array of pointers: pointers are 8 bytes each */
	l = d;
	printf("%s\n", d[0]);
	printf("%s\n", d[1]);
	printf("%s\n", d[2]);
	
	/* Cast FIRST so [index] jumps 8 bytes per step (size of pointer) */
	printf("%s\n", ((char **)l)[0]); /* 0B jump  -> "imad" */
	printf("%s\n", ((char **)l)[1]); /* 8B jump  -> "ahmed" */
	printf("%s\n", ((char **)l)[2]); /* 16B jump -> "walide" */

	return (0);
}
