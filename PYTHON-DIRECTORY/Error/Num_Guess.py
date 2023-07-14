import random

def Num_Guess():
	generated_number = random.randint(1, 10)
	attempts = 3
    
	while attempts > 0:
		name = input("Please what is your Name ")
		print(f"{name} 😀 Welcome to The ultimate Number Guessing Challenge")
		try:
			user_guess = int(input("Guess the number (between 1 and 10): "))
		except ValueError:
			print("Invalid input. Please enter a valid number.")
			continue
        

		if user_guess < generated_number:
			print("Less than the generated number.")
		elif user_guess > generated_number:
			print("Greater than the generated number.")
		else:
			print("Congratulations! You guessed the number correctly.")
			print(f"The generated number was: {generated_number}")
			break
        
		attempts -= 1
		print(f"Attempts left: {attempts}")    
	else:
		print(f"Game over! The number was {generated_number}.")
    
		repeat = input("Do you want to play again? (yes/no): ")
	if repeat.lower() == "yes":
		repeat()

Num_Guess()
