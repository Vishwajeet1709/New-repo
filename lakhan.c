#include<stdio.h>
int main()
{
    int i,j,flag=0,n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    printf("PRIME NUMBERS : ");

    for(j=1;j<=n;j++){

        for(i=2;i<=j/2;i++){
        if(j%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d ",i);
    }
    }

    return 0;
}
