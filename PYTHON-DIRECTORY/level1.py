import level2
import random

def play_level_1():
    generated_number = random.randint(1, 10)
    attempts = 3
    
    while attempts > 0:
        try:
            user_guess = int(input(f"Guess the number (between 1 and 10): "))
        except ValueError:
            print(f"Invalid input. Please enter a valid number.")
            continue
        if user_guess == generated_number and attempts == 3:
            print(f"You are a bad guy.")
        
        if user_guess == generated_number:
            print(f"Congratulations! You guessed the number correctly.")
            print(f"The generated number was: {generated_number}")
            
            play_level_2 = input("Do you want to play level 2? (yes/no): ")
            if play_level_2.lower() == "yes":
                level2.play_level_2()
            return(level2.play_level_2())
        
        if user_guess < generated_number:
            print("Less than the generated number.")
        elif user_guess > generated_number:
            print(f"Greater than the generated number.")
        
        attempts -= 1
        print(f"Attempts left: {attempts}")
    
    print(f"Game over! The number was {generated_number}.")
    play_again = input(f"Do you want to play level 1 again? (yes/no): ")
    if play_again.lower() == "yes":
        play_level_1()
    elif play_again.lower() == "no":
        print(f"Good bye")
        exit(1)
    while play_again.lower() !="yes" and play_again.lower() != "no":
        print(f"Invalid response.")
        play_again = input(f"Do you want to play level 1? (yes/no): ")


    if play_again.lower() == "yes":
            play_level_1()
    else:
        print(f"Have a nice day.")
        exit(0)
    

player_name = input("Enter your name: ")
print(f"How far, {player_name}!")

play_level_1()