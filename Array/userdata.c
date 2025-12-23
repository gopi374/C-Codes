#include<stream>
#include<conio.h>
void main()
{
int a[5],i;
printf(“Enetr array elements\n”);
for(i=0;i<=4;i++)
{
scanf(“%d”,&a[i]);
}
printf(“Array elements are given below:-\n”);
for(i=0;i<=4;i++)
{
printf(“%d\t”,a[i]);
}
getch();
}