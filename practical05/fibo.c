#include<stdio.h>
#include<stdlib.h>

void fibonacci(int *a, int *b);
int main(){
    int n,i;

    int f0=0,f1=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n<1){
        printf("The number is not positive.\n");
        exit(1);
    }

    printf("The fibonacci sequence is \n");
    printf("%d , %d ,", f0,f1);

    for(i=3;i<=n;i++){
    fibonacci(&f1,&f0);
    printf("%d , ",f1);

    if((i+1)%10==0)
        printf("\n");
    }
    return 0;
    
    

}
void fibonacci(int *a, int *b){
    int sum;
    
        
        sum= *a + *b;
        *b = *a;
        *a = sum;
    
}
