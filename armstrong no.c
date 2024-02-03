#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int armstrong(int n){
    int l = length(n);
    int sum = 0, digit = 1, rem, temp = n;

    for(int i = 0; i <= l; i++ ){

        rem = n%10;
        digit = pow(rem, l);
        sum = sum + digit;
        n = n/10;
    }

    if(temp == sum){
        return 1;
    }
    else{
        return 0;
    }
}
int length(int n){
    int sum =0;
    while(n>0){

        sum +=1;
        n = n /10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a  number: ");
    scanf("%d", &n);
    printf("The length of the number is:: %d\n ", length(n));

    int flag = armstrong(n);
    if(flag == 1 ){
        printf("%d is an armstrong number", n);
    }
    else{
        printf("%d is not an armstrong number", n);
    }
    return 0;
}
