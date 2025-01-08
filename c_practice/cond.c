// Author : Himanshu kohale (Himanshukohale22@github)/Binarylinux
// Brief : program is about to have a practice with && and || operator and some syntax too 
//          Good problem for revice syntax

#include <stdio.h>
#include <stdbool.h>

bool flag;

int checksom(int a,int b,bool flag){
    if ( flag = true && (a >= 0 && b >= 0) && ((a>>0 && b>>0) || (a >> 0 && b >=0)))
    {
        return 1;
    }
    return 0;
}

int main(){

    int a , b ;
    int flaginput;
    bool flag;

    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b: ");
    scanf("%d",&b);
    
    // how to input bool as 0/1 and get bool as output 
    printf("enter flaginput: ");
    scanf("%d",&flaginput);

    flag = (flaginput != 0);

    int result = checksom(a,b,flag); 
    if (result)
    {
        printf("result : True/n");
    }
    else{
        printf("result : False/n");
    }
    return 0;
    
}