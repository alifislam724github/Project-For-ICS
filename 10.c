#include<stdio.h>
int main()
{
    int a=5,b=6;
    add (a,b);
    multi (a,b);
    add (5,2);
}
 void add(int x,int y)
 {
     int d=x+y;
     printf("%d\n",d);
 }
 void multi(int w, int v)
 {
    printf("%d\n",w*v);
 }

