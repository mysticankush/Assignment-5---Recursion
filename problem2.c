 /*  Program to find gcd of two numbers using recursion
 * Compilation : gcc problem2.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 5-08-2021
 * Assignment_5 -> Recursion
*/
#include<stdio.h>

int gcd(int a,int b)
{
    //If a is zero then return b
    if (a == 0)
        return b;
    //else swap make a = b%a and b = a
    return gcd(b % a, a);
}
int main() {
   printf("Give two numbers  \n");
   int a,b;
   scanf("%d%d",&a,&b);
   //function to find gcd of a and b
   int g=gcd(a,b);
   printf("%d",g);
}
