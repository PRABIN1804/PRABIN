#include<stdio.h>
#include<conio.h>
struct marks
{
    int maths;
    int english;
    int science;
};

void display(struct marks *m)
{
    printf("maths:%d\n",m->maths);
    printf("english:%d\n",m->english);
    printf("science:%d\n",m->science);
}

int main()
{
struct marks m2;
m2.maths=98;
m2.english=99;
m2.science=100;


display(&m2);


return 0;
}