#include<stdio.h>
int calcPercentage(int science, int math, int hindi);

int main(){
    int sc = 80;
    int math = 85;
    int hindi = 90;

    printf("percentage is : %d", calcPercentage(sc,math,hindi));
    return 0;
}
int calcPercentage(int science,int math,int hindi){
    return ((science + math + hindi) / 3);
}