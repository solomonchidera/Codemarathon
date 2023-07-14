import random

def Guess_g():
    computer_number = random.randint(1, 10)
    attempts = 3
    
    while attempts > 0:
        try:
            user_guess = int(input("Guess the number (between 1 and 10): "))
        except ValueError:
            print("Invalid input. Please enter a valid number.")
            continue
        
        if user_guess < compuer_number:
            print("Less than the generated number.")
        elif user_guess > computer_number:
            print("Greater than the generated number.")
        else:
            print("Congratulations! You guessed the number correctly.")
            print(f"The generated number was: {computer_number}")
            break
        
        attempts -= 1
        print(f"Attempts left: {attempts}")
    
    else:
        print(f"Game over! The number was {computer_number}.")
    
    play_again = input("Do you want to play again? (yes/no): ")
    if play_again.lower() == "yes":
        Guess_g()


name = input("Enter your name 😀: ")
print(f"Welcome, {player_name}!")
Guess_g()
