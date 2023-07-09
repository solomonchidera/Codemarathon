#!/usr/bin/python3

# Asks the user to enter the savings
savings = input("Enter savings: ")

# Convert the user input into a float value and update the variable
savings = float(savings)

# Savings grow after 1 year at a 5% annual interest rate
balance = savings * 1.05 

# Convert the balance into a string and update the variable
balance =str(balance)

# Concatenate the 2 strings to produce a message
message = "Amount in 1 year: "  + balance

# Display the message
print(message)
