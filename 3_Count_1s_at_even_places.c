/*2
Count number  of  1's  at even positions  of   the    number
                       512    256    128    64     32    16    8    4    2    1   ---> Weights
n  =  666  =      1         0        1       0       0      1     1    0    1    0

Input : 666
Output  :  4
*/
int number_of_1s_at_even_places(int n){
    int c=0;
    while(n){
        if(n&2)
            c++;
         n=n>>2;
    }
    return c;
}

#include <stdio.h>
main()
{
    int  a;
    printf("\nEnter a number : ");
    scanf("%d" , &a );  //  reads  inputs  to  variables 'a'
    printf("\nThe number 1s at even places is %d\n",number_of_1s_at_even_places(a));
}


//  Prints number_of_1s_at_even_places of binary Equivalent
