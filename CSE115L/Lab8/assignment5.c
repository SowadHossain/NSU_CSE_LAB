#include <stdio.h>

int main(){
    int m,n;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    
    printf("All enve numbers between %d and %d except those divisible by 3 are:",m,n);
    if(m%2==0){
        for(int i = m;i<=n;i+=2){
            if(i%3==0)
                continue;
            printf("%d ,",i);
        }
    }else
        for(int i=m+1;i<=n;i+=2){
            if(i%3==0)
                continue;
            printf("%d ,",i);
        }
}
