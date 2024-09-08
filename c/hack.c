#include<stdio.h>

int main(){
    int sum=0,min,max,i,a[5];
    for(i=0;i<5;i++){
        printf("Enter number: ");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    min=a[0];
    for(i=1;i<5;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
     max=a[0];
    for(i=1;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d %d",sum-max,sum-min);
}