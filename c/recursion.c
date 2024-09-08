// 1. FACTROIAL OF GGIVEN NUMBER
// #include<stdio.h>
// int factroial(int n){
//    if(n==0 ||n==1) return 1;
//    return n*factroial(n-1) ;
// }

// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     printf("%d",factroial(n));
//     }
//  n to 1
//  #include<stdio.h>
//  void des (int n){
//     if(n==0) return;     
//     printf("%d\n",n);    
//     des(n-1);            
//     return;
//  }
//  int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     des(n);
//  }
// 1 to n
// #include<stdio.h>
// void incr (int n){
//    if(n==0) return;         
//    incr(n-1);             
//    printf("%d",n);}       

// int main(){
//    int n;
//    printf("enter a number:");
//    scanf("%d",&n);
//    incr(n);
// }
// n to 1 to n
// #include<stdio.h>
// void incr (int n){
//    if(n==0) return;
//    printf("%d\n",n) ;
//    incr(n-1);
//    printf("%d\n",n);}

// int main(){
//    int n;
//    printf("enter a number:");
//    scanf("%d",&n);
//    incr(n);
// }

// #include<stdio.h>
// int sum ( int n){
//     if (n==0) return ;
//      return n+sum(n-1);
//     }
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     printf("%d",sum(n));
// }

// #include<stdio.h>
// int power(int a , int b);

// int main(){
//     int a ,b;
//     printf("enterv a number a,b:");
//     scanf("%d%d",&a,&b);
//     printf("%d",power(a,b));
// }
// int power(int a, int b){
//     if (b==0) return;
//     // int power = pow(a,b-1);
//     // int power1 =power*a;
//     return a*pow(a,b-1);
// }
//  fabconics number
// #include <stdio.h>
// int fibo(int n);

// int main()
// {
//     int n;
//     printf("enter a number:");
//     scanf("%d", &n);
//     printf("%d", fibo(n));
// }
// int fibo(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     int fibo1 = fibo(n - 1);
//     int fibo2 = fibo(n - 2);
//     int ans = fibo1 + fibo2;
//     return ans;
// }
// power
// #include<stdio.h>
// int powerlog(int a,int b){
// if(b==0)return 1;
//     if(b==1)return a;
//     if(b%2==0){
//         return powerlog(a,b/2)*powerlog (a,b/2);
//     }
//    else{
//     return powerlog(a,b/2)*powerlog (a,b/2)*a;
//    }
// }
// int main(){
//     int a,b;
//     printf("enter a and b:");
//     scanf("%d%d",&a,&b);
//     powerlog(a,b);
//     printf("%d",powerlog(a,b));
// }

// pre in post
// #include<stdio.h>
// void zigzag(int n){
//     if(n==0)return ;
//     printf("%d\n",n);
//     zigzag(n-1);
//     printf("%d\n",n);
//     zigzag(n-1);
//     printf("%d\n",n);
// }
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     zigzag(n);

// }
