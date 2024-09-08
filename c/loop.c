// #include <stdio.h>
// int main(){
//     int i;
// for(i=0;i<=10;i++){
//        for(int j =10  ;j>=i;j--){
//         printf("*");
//         }
//         printf("\n");
// }
// }
// #include<stdio.h>
// int main(){
//     int i=0;
//     while(i<=10)
//     {
//         i++;
//         printf("%d\n",i);
//     }
// }    
// #include<stdio.h>
// int main(){
//     int x=20,y=35;
//     x=y++ + x++;
//     y=++x + ++y;
//     printf("%d",y,x);
// }
// #include<stdio.h>
// int main(){
//     int i;
//     printf("enter a number:");
//     scanf("%d",& i);
//     int j=0;
//     while (j<=i)
//     {
//        printf("%d\n",j);
//        j++;
//     }
    
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a;
//     printf("enter a number:");
//     scanf("%d",& a);
//     for ( int i=0;i<=a;i++){
//         printf("%d\n",i);
//     }

// }
// #include <stdio.h>
// int main(){
//     int i=0;
//     do{
//         printf("%d\n",i);
//         i++;

//     } while(i<=5);
// }
// #include <stdio.h>
// int main(){
// int  sum=0, a;
//     printf("enter a number:");
//     scanf("%d",&a);
//     for (int i=0;i<=a;i++)
//     {
//         sum=sum+i;}
//         printf("%d\n",sum);
//  }
// #include<stdio.h>
// int main(){
//     int a=0;
//     printf("enter  number :");
//     scanf("%d",&a);
//     for (int i=1;i<=10;i++)
//     {
//         printf("%d\n",a*i);
//     }
   
// }
// #include <stdio.h>
// int main(){
//     int a;
//     do {
//         printf("enter a number:");
//         scanf("%d",&a);
//         printf("%d\n",a);
//         if(a%2==0){
//            break;
//     }
//     }
//     while(1);
//     printf("thank you");
// }
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter a number :");
//     scanf("%d",&a);
//     int fact = 1;
//     for(int i=1;i<=a;i++)
//     {
//         fact=fact*i;

//     }
//     printf("%d",fact);
// }
//table revers 
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter a number:");
//     scanf("%d",&a);
//     for (int i=10;i>=1;i--)
//     {
//         printf("%d\n",i*a);
//     }
// }
// #include<stdio.h>
// int main(){
//     int sum=0;
//     for(int a=5;a<=50;a++)
//     {
//         sum=sum +a; 
//     }
//     printf("%d\n",sum);
// }
//  #include<stdio.h>
//  int main(){
//     int i,k;
//     for (i=1;i<=10;i++){
      
//       for(k=10;k>=i;k--){
//         printf(" ");}
//         for(k=1;k<=i;k++){
//             printf("* ");
        
//       }
//       printf("\n");
//     }
//  }
//  #include<stdio.h>
//  int main(){ 
//   int a,b,c;
//   printf("nuhbb:");
//   scanf("%d%d%d",&a,&b,&c);
//    int x=a+b+c;
//   printf("%d\n",x/3);
//  }
// #include <stdio.h>
// int main(){
//     for (int i=1;i<=4;i++)
//     {
//         for (int k=1;k<=i;k++)
//         {
//             printf("4");
// }
// printf("\n");
//  }
// }
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++)
//     {
//       if(i%2==0)
//       {
//         printf("\n%d",i);
//       }
//     }
// }
// -----------------TABLE PRINT----------------------------
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for(int i=n;i<=n*10;i=i+n){
//         printf("%d ",i);
//     }}
//  1 2 4 8 16 32 ----- printf               (GP)
// #include<stdio.h>
// int main(){
    // int n;
    // printf("enter a number:");
    // scanf("%d",&n);
    // int a=1;
    // for(int i=1;i<=n;i++){
        // printf("%d ",a);
        // a=a*2;
    // }}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enrter a number :");
//     scanf("%d",&n);
//     float a= 100.00;
//     for(int i=1;i>=n;i++)
// {
//     printf("%f",a);
//     a=a*(1/2);
// }
// }
// --------------PRIME NUMBER -------------
//  #include <stdio.h>
//  int main (){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int a=0;
//     for (int i=2;i<=n-1;i++){
//         if(n%i==0){
//             a=1;
//             break;
//         }}
//         if (n==1){
//             printf("1 is neither primr nor composite");
//         }
//         else if(a==0){
//             printf("this number is prime");
//         }
//         else{
//             printf("this number is composite");
//         }
//  }
//-------------------------------- sum of giviven even digites
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     int sum=0;
//     int lastdigit;
//     while (n>0)
//     {
//         lastdigit=n%10;
//         if (lastdigit%2==0){
//         sum=sum +lastdigit;}
//         n=n/10;
//     }
//     printf("%d",sum);
//      }
// ---------------------------------------- reverse the numbrer
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     // int k;
//     // k=n;
//     int rev=0;
//     int lastdigit=0;
//     while(n>0){
//         lastdigit=n%10;
//         rev=rev*10+lastdigit;
//         n=n/10;
//     }
//     printf("%d",rev);
//     }
// 1-2+3-4+5-6+7-....
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             sum=sum+i;
//         }
//         else{
//             sum=sum-i;
//         }
//     }
//     printf("%d",sum);
// 
// }
//  -----------factorial----------------
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=n;i>=1;i--){
//           fact=fact*i ;
//         //   printf("%d\n",fact);
//            }
//            printf("%d",fact);
// }
// fabonacci nummber------------------
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     int a,b;
//     a=1;b=1;
//     int sum=0;
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
        
//     }
//     printf("%d number of fabonacci is %d",n,sum);
//     }

#include<stdlib.h>
int main(){
    int i;
    for(i=1;i<5;i++){
        printf("%d",i);
    }
   
    printf("hfu%d",i);
}
