/*lets do some coding fun with pass by reference and value*/
#include<stdio.h>
void swap1(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
void swap2(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a = 4;
    int b = 5;
    int c = 6;
    
    swap1(a, b);      // this swap is local to the function f1 and does not affect the arguments passed from main because a and b are passed by value.
    
    swap2(&b, &c);    //the goal here is to swap b and c not a so we are passing the address of b and c not a
    printf("%d", c - a - b);
    return 0;
}