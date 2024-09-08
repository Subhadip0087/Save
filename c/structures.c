// #include <stdio.h>
// int main(){
//     struct crickter{
//         int run;
//         int avg;
//         int hundred;
//         char grade;
//     };
//     struct crickter rahul;
//     rahul.run = 7000;
//     rahul.avg =55.55;
//     rahul.hundred =19;
//     rahul.grade='A' ;

//     struct crickter kholi;
//     kholi.run = 25000;
//     kholi.avg =57.32;
//     kholi.hundred =75;
//     kholi.grade= 'A+';

//     printf("%d",rahul.avg);
// }

// #include <stdio.h>
// #include<string.h>
// int main(){
//     struct football{
//         int speed;
//         float hight;
//         char name[50];
//     }a,b,c;
//     a.hight=169.5;
//     strcpy(a.name,"messi");   (old to new change    use strcpy ) 
//     a.speed=85;
    
//     b.hight=185.3;
//     strcpy(b.name,"ronaldo");
//     b.speed=82;

//     printf("%d",b.speed);
//}

// #include<stdio.h>
#include<string.h>
int main(){
    typedef struct stock{
        char name[40];
        int price;
        char grade;
    }stock;
    stock arr[3];
    strcpy (arr[0].name,"nifty 50");
    arr[0].price=19300;
    arr[0].grade='A';

    strcpy (arr[1].name,"bank nifty");
    arr[1].price=44500;
    arr[1].grade='A';
    
    strcpy (arr[2].name,"finnifty");
    arr[2].price=20000;
    arr[2].grade='B';

    for(int i=0;i<=2;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].price);
        printf("%c\n",arr[i].grade);
        printf("\n");
    }
}



