#include<stdio.h>

int main(){
    int n,m,sum_total=0,sum_first_last=0,reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);

    m=n%10;
    sum_first_last=m;
    while(n>0){
        m=n%10;
        n=n/10;
        sum_total=sum_total+m;
        reverse=(reverse*10)+m;
    }
    sum_first_last=sum_first_last+m;

    printf("Sum of digits = %d\n",sum_total);
    printf("Sum of first and last digit = %d\n",sum_first_last);
    printf("Reverse of the number = %d\n",reverse);

    return 0;
}
