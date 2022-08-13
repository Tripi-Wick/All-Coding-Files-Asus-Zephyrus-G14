def game():
    import random #It Provides us with random Number

    computer = random.randint(1,3) 

    guess = input("Choose Wisely: ")

    if(guess == 'r'):
        player = 1
    elif(guess == 'p'):
        player = 2
    elif(guess == 's'):
        player = 3

    if(computer == 1):
        rand_num = 'r'
    elif(computer == 2):
        rand_num = "p"
    elif(computer == 3):
        rand_num = 's'

    print(f"Computer Chooses: {rand_num}")

    if(computer == 1 and player == 2):
        print("***player WIN***")
    elif(computer == 1 and player == 3):
        print("***player LOOSE***")
    elif(computer == 2 and player == 1):
        print("***player LOOSE***")
    elif(computer == 2 and player == 3):
        print("***player WIN***")
    elif(computer == 3 and player == 1):
        print("***player WIN***")
    elif(computer == 3 and player == 2):
        print("***player LOOSE***")
    else:
        print("\n*********Next Round*********")
        game()


print("********Enter 'r' for rock, 'p' for paper, 's' for scissors********\n")

game()