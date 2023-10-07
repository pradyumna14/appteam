#include <stdio.h>
int main(){
    
    int x, y, sum=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    y=x;
    while(x>0){
        sum = sum + (x%10) * (x%10) * (x%10) ;
        x = x/10;
    }
    if (y==sum){
        printf("Its an armstrong number");
    } else {
        printf("Its not an armstrong number");
    }
    return 0;
}
