#include<stdio.h>
void display(int row,int col,int arr[][col])
{
    for(int i=0; i<row; i++)
    {
    for(int j=0; j<col; j++)
    {
    printf("%d\n",arr[row][col]);
    }
    }
};
int main()
{
int arr[2][2]={(1,2),(3,4)};
int row=2,col=2;
display(2,2,arr);
return 0;
}
