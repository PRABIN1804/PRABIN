#include<stdio.h>
#include<conio.h>
void display(int *a)
{
    for(int i=0;i<5;i++)
    {
        printf("%d", *a+i);
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    display(&a[0]);
    return 0;
}