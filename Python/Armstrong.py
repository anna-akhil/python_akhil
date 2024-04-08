# armstrong number
print("Armstrong_number")
arm_strong = int(input())

def count (arm) :
    count_ = 0
    number = arm
    while number > 0:
        count_ = count_ + 1
        number = number // 10
    return count_

def armstrong (arm) :
    multi = 1
    sum = 0
    count_1 = count(arm)
    for j in range(count_1) :
        for i in range(count_1) :
            num = arm %10
            multi = multi * num
        arm = arm // 10
        sum = sum + multi
        multi = 1 
    return sum

if armstrong(arm_strong) == arm_strong :
    print("it is armstrong number")
else :
    print("it is not armstrong number")
