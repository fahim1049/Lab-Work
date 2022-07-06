#include<stdio.h>

int main(){

    char operator;
    double n,m;
    int n2,m2;
    scanf("%lf %c %lf",&n,&operator,&m);

    switch (operator)
    {
    case '+':
    printf("= %.2lf\n",n+m);
        break;

    case '-':
    printf("= %.2lf\n",n-m);
        break;

    case '*':
    printf("= %.2lf\n",n*m);
        break;
    
    case '/':
    printf("= %.2lf\n",n/m);
        break;

    case '%':
    n2=n;
    m2=m;
    printf("= %d\n",n2%m2);
        break; 

    default: 
    printf("Invalid Operator\n");
        break;
    }

    return 0;
}
