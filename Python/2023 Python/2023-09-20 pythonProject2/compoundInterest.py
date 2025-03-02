'''
P for Principle amount,
R for Rate
N for the Number of times the interest is compounded.
A for the amount after T years of compounding
the formua is A = P(1+r/n)^nt
 '''

###this asks the user for the principle investment
principle_investment = int(input("Please enter your Principle investment: "))

###this asks the user for the interest rate the user will receive per year
interest_Rate = float(input("Please enter your Interest rate you receive per year as a decimal Eg.(0.01 for 1 percent): "))

###this asks the user how many times they will receive the interest rate in one year
amount_Of_Times_Interest_Received = int(input("Please enter how many times per year you will receive this interest: "))

###this asks the user how many years the user will invest their capital in compund interest
number_Of_Years = int(input("Please enter how many years you will you will invest your capital: "))


###this will calculate the investment compounded yearly
compounded_Balance = principle_investment * (1 + interest_Rate/amount_Of_Times_Interest_Received)**(amount_Of_Times_Interest_Received*number_Of_Years)

###this will print out the compounded capital
print(str(compounded_Balance))

