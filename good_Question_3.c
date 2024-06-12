#include<stdio.h>

void confuse_it(int *ptra, int *ptrb) 
   //here the swaping is done on local copies of the pointers, the original pointers passed from the caller are not affected.
    //Therefore, this function effectively does nothing to the original variables
{
int *temp;      
temp = ptrb;
ptrb = ptra;
ptra = temp;
}

int main() 
{
int a=2016, b=0, c=4, d=42;
confuse_it(&a, &b);   //here it tries to swap the value but confuse_it does nothing to it so value of a = 2016 and b = 0.
if (a < c)
confuse_it(&c, &a);   // here if a < c the it is calling function to swap the values but conditon is false 
confuse_it(&a, &d);    // so  in this line the function will return the values which are a = 2016 and d = 42 
printf("%d\n", a);   //the value of a is 2016 so it returns the value as 2016.
return 0;
}