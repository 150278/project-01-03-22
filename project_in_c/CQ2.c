/*************************************************************************************
Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).
Date : 3-Mar-2022
Abhishek sahu
*****************************************************************************************/
#include<stdio.h>
void func(float a, float b, float c, float *T, float *per);
void main()
{
    float a, b, c, T, per;

    printf("Enter the marks of subject 1: ");
    scanf("%f", &a);
    printf("Enter the marks of subject 2: ");
    scanf("%f", &b);
    printf("Enter the marks of subject 3: ");
    scanf("%f", &c);

    func(a, b, c, &T, &per);

    printf("\n The Total: %.2f", T);
    printf("\n The Percentage: %.2f%%", per);
}

void func(float a, float b, float c, float *T, float *per)
{
    *T = a+b+c;
    *per = ((a+b+c)/300.0)*100;
}


//******************************************************************************/