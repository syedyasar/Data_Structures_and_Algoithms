/* Swap  values  of  2  variables  by  using  bitwise  operators

1) 				   32    16    8    4    2     1   --->  Weights
	a  =  25  =    0      1     1    0    0     1
	b  =  46 =     1      0     1    1    1     0
                 -------------------------------------------
	a ^ b =         1      1     0    1    1     1    ---->    55   --->  a

                        32    16    8    4    2     1   --->  Weights
2)  a = 55  =     1      1     0    1    1     1 
     b = 46  =     1      0     1    1    1     0
                     -----------------------------------------
	 a ^ b =        0      1     1    0    0     1   --->  25   --->  b

                        32    16    8    4    2     1   --->  Weights
3)  a =  55  =    1      1     0    1    1     1  
     b =  25  =    0      1     1    0    0     1
	                 ------------------------------------------
	 a ^ b =        1      0      1    1   1     0   ----> 46   ---> a
*/
#include <stdio.h>
main()
{
    int  a , b;
    printf("Enter any 2 numbers \n");
    scanf("%d%d" , &a , &b);  //  reads  inputs  to  variables 'a'  and 'b'
    a = a ^ b; //  Exor  values  of  'a'  and  'b'   3   times  and  store  results in  'a' , 'b'  and 'a'
    b = a ^ b; 
    a = a ^ b; 
    printf("a : %d\n" , a); 
    printf("b : %d\n" , b); 
}


//  Results  can  be  stored  in  'b'  , 'a'  and   'b'  also