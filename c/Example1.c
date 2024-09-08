// #include<stdio.h>
// void main() {
//     int n, i = 10;
//     n = ++i; 
//     printf("%d \n", n);
//     printf("%d", i);
// }

// #include <stdio.h>
//   main (){
//     int n ,i=20;
//     n=++i;
//     printf("%d\n",n);
//     printf("%d",i);
// }
// #include <stdio.h>
// int main(){
//     int n,a=10;
//     n=a++ + a++;
//     printf("%d\n",a);
//     printf("%d",n);
// }
// #include <stdio.h>
// int main(){
//     int n,a=10;
//     n=--a + a++;
//     printf("%d\n",a);
//     printf("%d",n);
// }
// #include <stdio.h>
// int main(){
//     int n,a=10;
//     n=a++ + a--;
//     printf("%d\n",a);
//     printf("%d",n);
// }
// #include <stdio.h>
// #include <math.h>
// int main (){
//     printf ("%d",16%10);

// }
// #include <stdio.h>
// int main(){
//     int a[5];
//     printf("enter a 5 number:");
    
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
        
   
//          for (int i =0;i<5;i++)
//          { 
//             if (a[i]%2!=0)
//             printf("\n\n%d",a[i]);
            
//              }
     
// }
// #include<stdio.h>
//  main(){
//      int a,b, result;
//      a=2,b=10;
    
//     result=sum(a,b);
//     printf("%d",result);

//     }
    
//     int sum(int a, int b)
//     {
//         int sum ;
//         sum =a -b;
//         return sum;
//     }
 // #include<stdio.h>
// void sum (int n1 ,int n2, int n3){
//     int sum;
//     sum =n1+n2+n3;
//     printf("%d\n",sum);
// }

// void minus(int n1 ,int n2){
//     int sum;
//     sum =n1-n2;
//     printf("%d\n",sum);
// }


// int main()
// {
//     int a, b, c;
//     a = 100;
//     b = 300;
//     c = 32;
//     sum(a, b, c);
//     minus(a, b);

//     a = 20, b = 11, c = 23;
//     sum(a, b, c);
//     minus(a, b);

//     a = 70, b = 17, c = 29;
//     sum(a, b, c);
//     minus(a, b);
//     return 0;
// }
// -----------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     float x=50.55;
//     int y=x;
//     printf("%d\n",y);
//     float z=x-y;
//     printf("%f",z);
// }
// ASCII
// #include<stdio.h>
// int main (){
    // char ch ='A';
    // char cha='a';
    // printf("%d\n%d",ch,cha);
// }
// #include <stdio.h>
// int main(){
//     int x= 4+2%-8;
//     int y= 2%8;
//     printf("%d\n%d",x,y);
// }
// #include<stdio.h>
// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     if (x%2==0)
//     {
//         printf("even number ");
//     }
//     else{
//         printf("odd number");
//     }
    
// }
// #include<stdio.h>
// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     if (x%4==0)
//     {
//         printf("leep year ");
//     }
//     else{
//         printf("no leap yyear");
//     }
    
// }
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);
//     if(n%3==0||n%5==0){
//         printf("good");
//     }
//     else{
//         printf("bad");
//     }
// } 
// #include<stdio.h>
// int main(){
//      int a, b, c,d;
//      printf("enter 4 number :");
//      scanf("%d%d%d%d",&a,&b,&c,&d);
//      if(a>b&&a>c&&a>d){
//         printf("%d\n",a);
//      }
//      else if (b>a&&b>c&&b>d)
//      {
//         printf("%d\n",b);
//      }
//      else if (c>d&&c>b&&c>a)
//      {
//         printf("%d\n",c);
//      }
//      else{
//         printf("%d\n",d);
//      }
     
     
// }  
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter a three number:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a<b&&a<c){
//         printf("a is young");
//     }
//     else if(b<a&&b<c){
//         printf("b is young");
//     }
//     else
//     {
//         printf("c is young");
//     }
// }
//------- ternerey opperter-----------
//  #include<stdio.h>
//  int main(){
//     int n ;
//     printf("enter a number ");
//     scanf("%d",&n);
//     n%2==0?printf("even number "):printf("odd number");
//  }  
// true __false
// #include<stdio.h>
// int main(){
//     int n=3;
//     printf("%d",n==10);
//     printf("\n%d",n==3);
// }
#include <stdio.h>
int main(){
    int n;
    printf("enter  n number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }printf("%d",sum);
}
