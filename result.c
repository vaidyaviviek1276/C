#include<stdio.h>
#include<conio.h>
void main();
{
    float Maths,Eng,Sci,C,Linux,sum,pre,avg;
    clrscr();
    printf("Enter the marks of Maths:");
    scanf("%f",&Maths);
    printf("\nEnter the marks of Eng:");
    scanf("%f",&Eng);
    printf("\nEnter the marks of Sci");
    scanf("%f",&Sci);
    printf("\nEnter the marks of C:");
    scanf("%f",&C);
    printf("\nEnter the marks of Linux:");
    scanf("%f",&Linux);


sum=Maths+Eng+C+Linux;
printf("Addition is %f",sum);
avg=sum/500;
printf("Average is %f",avg);
pre=avg*100;
printf("Percentage is %f",pre);
getch();
}