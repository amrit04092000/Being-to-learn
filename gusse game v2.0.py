import random

number = random.randint(1, 99)
print("welcome to the gusse game ")
print("You have three chances ")
print("try your luck")
for chances in range(10):
    number2 = int(input('enter your number : '))
    if number2 == number:
        print(f"you win!!! in {chances} chsnces")
        break
    elif number2 > number:
        print("your gusse is high ")
    elif number2 < number:
        print("your gusse is low")
else:
    print("better luck next time !!!")


