/*1
Test  a number is even or odd by using bitwise operators
n & 1 = 1  when 'n'  is  odd  number
       =  0   when  'n'  is  even  number
*/


#include <stdio.h>
main()
{
    int  a;
    printf("\nEnter a number : ");
    scanf("%d" , &a );  //  reads  inputs  to  variables 'a'
    if(a &1)
        printf("\nThe number %d  is Odd\n",a);
    else
        printf("\nThe number %d  is Even\n",a);
}


//  Prints even if a number is even, else odd
