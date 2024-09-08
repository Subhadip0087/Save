//                                 ***
//                                 ***
//                                 ***
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=3;i++){
//         for(int n=1;n<=3;n++)
//          printf("*");
//          printf("\n");
//         }
// }
// -----------------------------------------------------------
//                               1234
//                               1234
//                               1234
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int n=1;n<=4;n++){
//         printf("%d",i);}
//         printf("\n");
//     }
// }
// -----------------------------------------------------------
//                             *
//                             **
//                             ***
//                             ****
// #include<stdio.h>
// int main(){
//     for (int i=1;i<=4;i++){
//         for (int j=1;j<=i;j++){
//             printf("*");}
//             printf("\n");
//         }
// }
// -----------------------------------------------------------
//                            ****
//                            ***
//                            **
//                            *
/// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//     for(int j=4;j>=i;j--){
//         printf("*");}
//         printf("\n");
//     }
//     }
// ----------------------------------------------------------
//                            1357
//                            1357
//                            1357
//                            1357 
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4*2-1;j=j+2){
//             printf("%d",j);
//             }
//              printf("\n");
//         }}
// --------------------------------------------------------
//                           1
//                           13
//                           135
//                           1357
// #include<stdio.h>
// int main(){
//     for (int i=1;i<=4;i++){
//        for(int j=1;j<=i;j++){
//              printf("%d",j*2-1);}
//             printf("\n");
//     }
// } 
//                         abcd
//                         abcd
//                         abcd
//                         abcd
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter anumber :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=n;j++){
//             a=j+64;
//             char ch=(char)a;
//             printf("%c",ch);
//         }
//         printf("\n");
//     }
// }
//                        *
//                        *
//                    * * * * *
//                        *
//                        *
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//          for (int j=1;j<=n;j++){
//               if (i==n/2+1||j==n/2+1){
//                 printf(" *");}
//                 else{
//                     printf("  ");}
//               }
//        printf("\n");    
//     }}
//                         *****
//                         *   *
//                         *   *
//                         *   *
//                         *****
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||j==1||j==n ||i==n){
//                 printf("*");}
//                 else{
//                     printf(" ");
//                 }
//             }
//           printf("\n");}
//     }
// *   *
//  * *
//   *
//  * *
// *   *
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j||i+j==n+1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//     printf("\n"); }
// }
// 1
// 01
// 101
// 0101
// 10101
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             if ((i+j) %2==0){
//                 printf("1");}
//                 else
//                 { printf("0");}
//         }
//         printf("\n");    }
// }
//     *
//    **
//   ***
//  ****
// *****
//  #include<stdio.h>
//  int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i+j>=5+1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }printf("\n");
//     }
//     }    OR SECOND TYPR 
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");}
//             for(int k=1;k<=i;k++){
//             printf("*");
//         }printf("\n");
//     }
// }

//    ****
//   ****
//  ****
// ****
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4-i;j++){
//             printf(" ");
//     }
//     for(int k=1;k<=4;k++){
//         printf("*");
//     }printf("\n");
// }}
//     *
//    ***
//   *****
//  *******
// *********
// #include<stdio.h>
// int main (){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("*");
//         }printf("\n");
//     }
// }
//     1
//    123
//   12345
//  1234567
// 123456789
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int k=1;k<=5-i;k++){
//             printf(" ");
//         }for(int j=1;j<=2*i-1;j++){
//             printf("%d",j);
//         }printf("\n");
//     }
// }
//     1
//    121
//   12321
//  1234321
// 123454321
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=10;i++){     
//         for(int n=1;n<=10-i;n++){   
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){ 
//             printf("%d",j);}
//         for(int k=i-1;k>=1;k--){
//             printf("%d",k);}
//         printf("\n");
//     }
// }
// *** *** 
// **   **
// *     *
// #include <stdio.h>
// int main(){
//       int n;
//       printf("enter a number :");
//       scanf("%d",&n);
//      for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("*");
//         }for(int k=1;k<=2*i-1;k++){
//             printf(" ");
//         }for(int l=1;l<=n-i;l++){
//             printf("*");
//         }printf("\n");
// }
//      }
