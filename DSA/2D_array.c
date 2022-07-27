#include<stdio.h>
void dispnum(int num[2][2]);
int main()
{
    int num[2][2];
    printf("enter the elements of array: \n");
    for(int i=0; i<2; ++i)
    {
        for(int j=0;j<2; ++j)
        {
scanf("%d",&num[i][j]);
        }
    }
    dispnum(num);
    return 0;
}

void dispnum(int num[2][2])
{
    printf("displaying:\n");
    for(int i=0; i<2; ++i)
    {
        for( int j=0; j<2; ++j)
        {
            printf("%d\n",num[i][j]);
        }
    }
}