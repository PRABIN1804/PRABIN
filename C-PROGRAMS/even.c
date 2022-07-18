#include<stdio.h>
int main()
{
    int i,size;
    printf("c program to print all even number in array\n");
    printf("first enter number of elements you want in array\n");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++);
    {
        printf("please value for index %d",i);
scanf("%d",&arr[i]);
 }
 printf("even number in array are\n");
 for(i=0;i<size;i++){
     if(arr[i]%2==0){
         printf("%d\t",arr[i]);
     }
}
 return 0;
 }