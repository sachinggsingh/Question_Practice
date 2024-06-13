#include <stdio.h>

int r()
{
static int num=7;  // static variable is used tov preserve the variable between function calls
return num--;

}

int main(){
for (r();  r();  r()) //here the only starting condition is given means the iteration value is passed in thr loop only
    //7    //6    //5
    //after the that it prints 5
    //and again runs the loop 5 is deducted and the starting value will be 4 here
    
    //for (r();  r();  r())
    //      4    3      2
    //2 will be printed after that
printf("%d",r());
return 0;
}
