#include <stdio.h>
int main(){
    int age;
    printf("Enter Age= ");
    scanf("%d", &age);
    if (age >=18){
         if(age>=60){
            printf("People is OLd AGE \n");
        }
        else("People is MIddle AGE \n");
    }
    else{
        printf("People is Junior \n");
    }
    return 0;
}