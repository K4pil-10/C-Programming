#include <stdio.h>
int main(){
    int rev=0;
    int r;
    int n;
    int p;
    printf("Enter a number : ");
    scanf("%d", &n);
    p=n;
    while(n!=0){
        r=n % 10;
        rev= rev*10 +r;
        n= n / 10;
    }
    if(p==rev){
        printf("%d is palindrome",p);
    }
    else{
printf("%d isn't palindrome",p);
    }
    return 0;
}