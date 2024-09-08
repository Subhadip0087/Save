// #include<stdio.h>

// int main(){
//     int age =20;
//     int *ptr =&age;
//     int myage=*ptr; 
//     printf("%d",myage);
// }

// #include<stdio.h>
// int main(){
//     int  *ptr;
//     int x=5;
//     ptr=&x;
//     *ptr=7;
//     printf("%d\n",x);
//     printf("%d",*ptr);
// } 
//poniter to pointer
// #include<stdio.h>
// int main(){
//        int i=8;
//        int *ptr=&i;
//        int**pptr=& ptr;
//        printf("%d",*ptr);
// }

    import random

    comp_choice =random.choice(["1","2","3"]) # "1" is snake, "2" is water, 3 is gun
    you_choice=input("enter your number :")
    you_dict ={"1":'snake',"2":'water',"3":'gun'}
    you_turn =you_dict[you_choice]
    comp_turn=you_dict[comp_choice]

    print(f'your choice is {you_turn}\n compputer choice is {comp_turn}')

    if(comp_choice==you_choice):
        print("This is a draw")
        
    else:
            
        if(comp_choice=="1" and you_choice== "2"):
            print('You won!')
        elif(comp_choice=="1" and you_choice== "3"):
            print('You won!')
        elif(comp_choice=="2" and you_choice== "1"):
            print('Oh no, compputer won!')
        elif(comp_choice=="2" and you_choice== 3):
            print('Oh no, compputer won!')
        elif(comp_choice=="3" and you_choice== "2"):
            print('You won!')
        elif(comp_choice=="3" and you_choice== "1"):
            print('Oh no, compputer won!')
        else:
            print('something went wrong')



