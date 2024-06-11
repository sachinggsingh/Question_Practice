/*Let's understand the assigoning of values of pointers*/
#include < stdio.h >

void switch_it(int *p, int *q) {

p = q;  //p is assigned to the address of q

*p = 2; //  p assigned the value 2 before the main function p is pointing to address of q so the value is assigned to q

}

int i = 0, j = 1;  //variables i = 0; and  j = 1;

int main ( ){

switch_it(&i, &j);    //here the function is called to do it work which is taking places of p and q so j is assigned to pointed 
                     //q having value 2 and i is assigned to p but here i value does not change becaue p was reassigned to j before and modifications to be done. 

printf (“%d %d \ n”, i, j);

return 0;

}
