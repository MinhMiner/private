import random

win = lose = draw = 0

while True:
    choices = ["rock", "paper", "scissors"]
    computer = random.choice(choices)
    player = None

    while player not in choices:
        player = input("Choose rock, paper or scissors: ").lower()
    
    result = (choices.index(player) - choices.index(computer) + 3) % 3

    if result == 1:
        print("Your choice: " + player)
        print("Computer choice: " + computer)
        print("You win!")
        win = win + 1
    elif result == 2:
        print("Your choice: " + player)
        print("Computer choice: " + computer)
        print("You lose!")
        lose = lose + 1
    else:
        print("Your choice: " + player)
        print("Computer choice: " + computer)
        print("It's a draw!")
        draw = draw + 1

    play_again = input("Play again? (Yes/No): ").lower()

    if play_again != "yes":
        break

print("")
print("Win: " + str(win))
print("Lose: " + str(lose))
print("Draw: " + str(draw))
print("Thanks for playing!")
