#include<stdio.h>
int fabonacci(int a,int b,int n){
    if(n==2||n==1){
        printf("%d",b);
        return 0;
        }
    b=a+b;
    a=b-a;
    fabonacci(a,b,n-1);
    return 0;
}
int main(){
    int n;
    printf("Enter the term of which fabonacci series term is required: ");
    scanf("%d",&n);
    int a=1,b=1;
    fabonacci(a,b,n);
    return 0;
}