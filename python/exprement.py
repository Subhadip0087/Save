

# a=input("enter your name\n")
# if len(a)<=10:
#    print("good")
# else:
#    print("not good")
#----------------------------------------------------------------

# i=0
# n=5
# while i<=5 and n>=0:
#      print(n*" ",i*"*")
#      i=i+1
#      n=n-1
#----------------------------------------------------------------
# n=10
# i=0
# while n>=0& i<=10:
#      print(n*"  ",i*" *  ")
#      n=n-1
#      i=i+1
#----------------------------------------------------------------
# i=0
# n=10
# while i<=10 and n>=0:
#      print(n*"  ",i*" *  ")
#      i=i+1
#      n=n-1

import random
import sys
comp_choice = random.choice(["1", "2", "3"])  # "1" is snake, "2" is water, 3 is gun
you_choice = input("enter your number : ")
if (you_choice > "3"):
        print("Choose from the list")
        sys.exit()
    
you_dict = {"1": 'snake', "2": 'water', "3": 'gun'}
you_turn = you_dict[you_choice]
comp_turn = you_dict[comp_choice]

print(f'your choice is {you_turn}\n computer choice is {comp_turn}')

if comp_choice == you_choice:
    print("This is a draw")
else:
    if comp_choice == "1" and you_choice == "2":
        print('You won!')
    elif comp_choice == "1" and you_choice == "3":
        print('You won!')
    elif comp_choice == "2" and you_choice == "1":
        print('Oh no, computer won!')
    elif comp_choice == "2" and you_choice == "3":
        print('Oh no, computer won!')
    elif comp_choice == "3" and you_choice == "2":
        print('You won!')
    elif comp_choice == "3" and you_choice == "1":
        print('Oh no, computer won!')