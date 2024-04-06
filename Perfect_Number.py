# Perfect_number

print("Enter a number\n")

perfect = int(input())

def Perfect(number):
    sum = 0
    for i in range(1,number) :
        if number % i == 0 :
            sum = sum + i
    return sum

if Perfect(perfect) == perfect :
    print("It is Perfect number\n")
else :
    print("It is not Perfect number\n")
    