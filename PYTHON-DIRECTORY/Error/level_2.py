import random

def Guess_g():
	computer_number = random.randint(0, 15)
	attempts = 3

	while attempts > 0:
		try:
			user_guess = int(input("Guess the number (between 0 and 15): "))
		except ValueError:
			print("Invalid input. Please enter a valid number.")
			continue
		if user_guess == computer_number:
			if attempts == 3:
				print(f"GENIUS😀")

			else:
				print("Congratulations! You guessed the number correctly.")
			print(f"The generated number was: {computer_number}")
			
			break

		if user_guess < computer_number:
			print("Less than the generated number.")
		elif user_guess > computer_number:
			print("Greater than the generated number.")
		
		attempts -= 1
		print(f"Attempts left: {attempts}")

	else:
		print(f"Game over! The number was {computer_number}.")

	play_again = input("Do you want to play again? (yes/no): ")
	if play_again.lower() == "yes":
		Guess_g()
	elif play_again.lower() == "no":
		sure = input("Are you sure you want to quit? (yes/no): ")
		if sure.lower() == "no":
			Guess_g()
		elif sure.lower() == "yes":
			print("See you later.")
		exit


name = input("BOY Enter Your Name 😀: ")
print(f"Welcome, {name}!")
Guess_g()
