import random
import leve1

def play_level_2():
    generated_number = random.randint(1, 15)
    attempts = 3
    
    while attempts > 0:
        try:
            user_guess = int(input("Guess the number (between 1 and 15): "))
        except ValueError:
            print("Invalid input. Please enter a valid number.")
            continue
        
        if user_guess == generated_number:
            print("Congratulations! You guessed the number correctly.")
            print(f"The generated number was: {generated_number}")
        
            play_again = input("Do you want to play again? (yes/no): ")
            if play_again.lower == "yes":
                choice = input("level 1 or level 2? (one/two): ")
                if choice.lower == "one":
                    level1().play_level_1()
                elif choice.lower == "two":
                    play_level_2
            return
        
        if user_guess < generated_number:
            print("Less than the generated number.")
        elif user_guess > generated_number:
            print("Greater than the generated number.")
        
        attempts -= 1
        print(f"Attempts left: {attempts}")
    
    print(f"Game over! The number was {generated_number}.")
    play_again = input("Do you want to play again? (yes/no): ")
    if play_again.lower() == "yes":
        choice = input("level 1 or level 2? (one/two): ")
        if choice.lower() == "one":
            level1.play_level_1()
        elif choice.lower() == "two":
            play_level_2()

play_level_2()