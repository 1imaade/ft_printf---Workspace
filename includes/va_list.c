#include <stdarg.h>
#include <stdio.h>


void ft_print(int c, ...)
{
	va_list arg;
	va_start(arg, c);
// 	printf("%d\n",c);
// 	
// 	printf("%u\n", *(int *)(arg->reg_save_area + arg->gp_offset));
// 	va_arg(arg, int);
// 	printf("%u\n", *(int *)(arg->reg_save_area + arg->gp_offset));
// 	va_arg(arg, int);
// 	printf("%u\n", *(int *)(arg->reg_save_area + arg->gp_offset));
// 	va_arg(arg, int);
// 	printf("%u\n", *(int *)(arg->reg_save_area + arg->gp_offset));
// 	va_arg(arg, int);
// 	printf("%u\n", *(int *)(arg->reg_save_area + arg->gp_offset));
// 	va_arg(arg, int);
// 	printf("%u\n", *(int *)arg->overflow_arg_area);
// 	va_arg(arg, int);
// 	printf("%u\n", *(int *)arg->overflow_arg_area);
// 	va_arg(arg, int);
// 	printf("%u\n", *(int *)arg->overflow_arg_area);
// 

	
	printf("gp_offset 2 : %u\n", arg->gp_offset);
	va_arg(arg, int);
	printf("gp_offset 3 : %u\n", arg->gp_offset);
	va_arg(arg, int);
	printf("gp_offset 4 : %u\n", arg->gp_offset);
	va_arg(arg, int);
	printf("gp_offset 5 : %u\n", arg->gp_offset);
	va_arg(arg, int);
	printf("gp_offset 6 : %u\n", arg->gp_offset);
	va_arg(arg, int);
	printf("gp_offset 6 : %u\n", arg->gp_offset);
	

	printf("\nto bouble \n\n");
	
	printf("fp_offset 1 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 2 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 3 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 4 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 5 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 6 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 7 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 8 : %u\n", arg->fp_offset);
	va_arg(arg, double);
	printf("fp_offset 9 : %u\n", arg->fp_offset);
	va_arg(arg, double);

	printf("\nstack : \n\n");
	printf("overflow arg area : %u\n", *(int *)arg->overflow_arg_area);
	va_arg(arg, int);
	printf("overflow arg area : %u\n", *(int *)arg->overflow_arg_area);
	va_arg(arg, int);
	
}

int main()
{

	ft_print(1,2,3,4,5,6,7,8,9);
}

