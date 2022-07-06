#include<stdio.h>

int main(){
    float quiz,attendance,presentation,assignment,mid,final,sum_qiuz=0,average_quiz,total=0;

    for(int i=1;i<=3;i++){
        printf("Enter %dno quiz mark (0-15) =",i);
        scanf("%f",&quiz);
        if(quiz<0 || quiz>15){
            printf("Invalid Input. Try Again\n");
            i--;
            continue;
        }
        sum_qiuz=sum_qiuz+quiz;
    }

    average_quiz=sum_qiuz/3.0;
    printf("Average for 3 quiz = %.2f\n",average_quiz);

    for(int i=1;i<=1;i++){
        printf("Enter presentation mark (0-8) =");
        scanf("%f",&presentation);
        if(presentation<0 || presentation>8){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    for(int i=1;i<=1;i++){
        printf("Enter assignment mark (0-5) =");
        scanf("%f",&assignment);
        if(assignment<0 || assignment>5){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    for(int i=1;i<=1;i++){
        printf("Enter mid mark (0-25) =");
        scanf("%f",&mid);
        if(mid<0 || mid>25){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    for(int i=1;i<=1;i++){
        printf("Enter final mark (0-40) =");
        scanf("%f",&final);
        if(final<0 || final>40){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    for(int i=1;i<=1;i++){
        printf("Enter attendance mark (0-7) =");
        scanf("%f",&attendance);
        if(attendance<0 || attendance>7){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    total=average_quiz+presentation+assignment+mid+final+attendance;
    printf("Total mark = %.2f\n",total);

    if(total>=80){
        printf("Students Grade = 4 (A+)\n");
    }
    else if(total>=75){
        printf("Students Grade = 3.75 (A)\n");
    }
    else if(total>=70){
        printf("Students Grade = 3.50 (A-)\n");
    }
    else if(total>=65){
        printf("Stents Grade = 3.25 (B+)\n");
    }
    else if(total>=60){
        printf("Students Grade = 3.00 (B)\n");
    }
    else if(total>=55){
        printf("Students Grade = 2.75 B-)\n");
    }
    else if(total>=50){
        printf("Students Grade = 2.50 (C+)\n");
    }
    else if(total>=45){
        printf("Students Grade = 2.25 (C)\n");
    }
    else if(total>=40){
        printf("Students Grade = 2.00 (D)\n");
    }
    else{
        printf("Students Grade = 0.00 (Fail)\n");
    }

    return 0;
}
