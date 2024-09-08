// #include <stdio.h>
// void subha();    //prototype

// int main(){       //function call
//     subha();
// }
    
    
// void subha(){    //funtion definition
//     printf("subha\n");
//     }
// // #include<stdio.h> 
// void subha();

// int main(){
//     subha();
//     subha();
//     subha();
//     subha();

// }
// void subha(){
//     printf("\nhello\n");
//     printf("       subha:\n");
// }
// #include <stdio.h>
// void printtable(int n);
// int main (){
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     printtable(n);
// }  
// void printtable (int n){
//     for (int i=1;i<=10;i++){
//         printf("%d\n",i*n);
//     }

// }
#include<stdio.h>
// void power (int n);
void power (int n){
    printf("%f",pow(n,2));
}
int main (){
    int n;
    printf("enter a number:");       
    scanf("%d",&n);
    power(n);
}

// // #include <stdio.h>
// void subha();
// void dip();
// int main(){
//     dip();
// }
// void subha(){
//     printf ("subhadip");
// }
// void dip(){
//     printf("dip");
// }
// #include <stdio.h>
// int sum (int a,int b);
// int main(){
//     int a,b;
//     printf("enter 1st number :");
//    scanf("%d",&a);
//     printf("enter 2nd number: ");
//     scanf("%d",&b);
//     int s=sum(a,b);
//     printf("%d",s);

// }
// int sum (int a,int b){
//     return a+b;
// }
// #include<stdio.h>
// void printhelloworld(int count);
// int main(){
//      printhelloworld(9);
//      return 0;
// }                                          
// void printhelloworld(int count){
//     if (count==0){
//          return ; }
//         printf("hello world\n");
//         printhelloworld(count-1);

// #include<stdio.h>
// void starprint(int a);
// // void starprintr(int b);
// int main(){
//       starprint(8);
//     //   starprintr(7);
//       return 0;
//       }
// void starprint(int a){
//     for(int i =0;i<=a;i++){
//         for(int k=0;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//    }
//  }
// void starprintr(int b){
//        for(int i=b;i>=0;i--){
//         for (int k=i;k>=0;k--){
//             printf("*");
//         }
    //     printf("\n");
    //   }
// }
// #include<stdio.h>
// int sum (int a, int b);
// int main(){
//   int a, b;
//   printf("enter a number ");
//   scanf("%d",&a);
//    printf("enter b number ");
//   scanf("%d",&b);
//   int s =sum(a,b);
//   printf("%d",s);
// }
// int sum (int a , int b){
//   return a+b;
// }
// #include <stdio.h>
// int added(int a, int b);
// int minus(int a, int b);
// int multiply(int a, int b);
// int divide(int a, int b);
// int main(){
//     int a,b;
//     printf("enter a numer:");
//     scanf("%d",&a);
//     printf("enter b numer:");
//     scanf("%d",&b);
//     printf("a added b =%d\n",added(a,b));
//     printf("a minus b =%d\n",minus(a,b));
//     printf("a multiply b =%d\n",multiply(a,b));
//     printf("a divided b =%d",divide(a,b));
    
// }
// int added(int a, int b){
//     return a+b;
// }
// int minus(int a, int b){
//     return a-b;
// }
// int multiply(int a, int b){
//     return a*b;
// }
// int divide(int a, int b){
//     return a/b;
// }
// #include <stdio.h>
// int sum(int a);
// int main(){
//     printf("%d",sum(9));

// }
// int sum(int a){
//     if (a==1){
//         return 1;
//     }
//     int sumnum=sum(a-1);
//     int sumnum1 = sumnum+a;
// }
// #include <stdio.h>
// int fact (int n);
// int main(){
//     printf("%d",fact(5));    
// }
// int fact(int n){
//     if (n==0){
//         return 1;
//     }
//     int fact1=fact(n-1);
//     int fact2=fact1*n;
// }

// #include<stdio.h>
// int table(int n);
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     table(n);
// }
// int table(int n){
//     for(int i=1;i<=10;i++){
//         printf("%d * %d = %d\n",n,i,i*n);
//     }
// }