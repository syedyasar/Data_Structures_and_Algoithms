/*
Find average of inputs which are terminated by ctrl+z
1) ctrl + z means end of inputs

2) when input is ctrl + z, scanf reads nothing and returns -1
*/


#include <stdio.h>
main()
{
    float  a,t=0,c=0;
    int a1;
    printf("\nEnter inputs terminated by CTRL + Z : ");
    while( (a1 = scanf("\n%f",&a))!=-1){
        t= t+a;
        c++;
    }

    if(c!=0){
        printf("Avergae is %g",t/((float)c));
    }
    else{
        printf("At least one input needed to calculate average");
    }
}



