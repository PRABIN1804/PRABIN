#include<stdio.h>
void dispnum(int num[3][3]);
int main()
{
    int num[3][3];
    printf("enter the elements of array: \n");
    for(int i=0; i<3; ++i)
    {
        for(int j=0;j<3; ++j)
        {
scanf("%d",&num[i][j]);
        }
    }
    dispnum(num);
    return 0;
}

void dispnum(int num[3][3])
{
    printf("displaying:\n");
    for(int i=0; i<3; ++i)
    {
        for( int j=0; j<3; ++j)
        {
            printf("%d\n",num[i][j]);
        }
    }
}