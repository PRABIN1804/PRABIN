// #include<stdio.h>
// int main()
// {
//     int number1,number2,sum;
//     printf("enter two number");
//    scanf("%d %d",&number1,&number2);
//    // calculating sum
//    sum = number1 + number2;
//    printf("%d + %d = %d", number1,number2,sum);
//    return 0;
// }


#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    printf("%d",a+=(a+=3,5,a));
}