print("Computer's Turn: Choose Snake(s), Water(w), Gun(g)? Hidden")

import random

RN = random.randint(1,3)
if RN==1:
    comp = 's'
elif RN==2:
    comp = 'w'
elif RN==3:
    comp = 'g'

play=input("Player's Turn: Choose Snake(s), Water(w), Gun(g)? ")

def game(play,comp):
    if play==comp:
        print("The game is a Tie!")
    elif play=='s':
        if comp=='w':
            print("You Win!")
        elif comp=='g':
            print("You Lose!")
    elif play == 'w':
        if comp=='g':
            print("You Win!")
        elif comp=='s':
            print("You Lose!")
    elif play == 'g':
        if comp=='s':
            print("You Win!")
        elif comp=='w':
            print("You Lose!")
# if play=='g':
#     a="Gun"
# elif play == 's':
#     a="Snake"
# else:
#     a="Water"

# if comp=='g':
#     b="Gun"
# elif comp == 's':
#     b="Snake"
# else:
#     b="Water"
print(f'''You chose {'Gun' if play=='g' else( "Snake" if play=='s' else "water")} and Computer chose {'Gun' if comp=='g' else( "Snake" if comp=='s' else "water")}''')
# print(f'''You chose {a} and Computer chose {b}''')
game(play,comp)