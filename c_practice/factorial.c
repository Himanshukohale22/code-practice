// Author : Himanshu kohale (Himanshukohale22@github)/Binarylinux
// Brief : factorial problem recursion easy understandable problem

#include <stdio.h>

int factorial(int n){
    if (n == 1 || n ==0)
    {
        return 1;
    }
    else{
        return  n*factorial(n-1);
    }

}

int main(){
    int n;
    printf("enter values: ");
    scanf("%d",&n);
    int result = factorial(n);
    printf("%d",result);
    return 0;
}
