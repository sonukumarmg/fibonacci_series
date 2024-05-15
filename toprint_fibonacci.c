#include <stdio.h>
int main(){
        int n;
        printf("Enter the n upto which fabonacci series will be displayed: ");
        scanf ("%d",&n);
        int a=0;
        int b=1;
        if (n==1){
                printf("Fabonacci series will be\n0");
        }
        else if(n==2){
                printf("Fabonaci series will be\n0\n1\n");
        }
        else{
                printf("Fabonacci series will be\n0\n1\n");
                for (int i=1;i<=n-2;i++){
                        b=b+a;
                        a=b-a;
                        printf("%d\n",b);
                }
        }
        return 0;
}