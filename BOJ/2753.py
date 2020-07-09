year = eval(input())
yoon = 0

if year % 4 == 0:
    if year % 100 != 0:
        yoon = 1
    elif year % 400 == 0:
        yoon = 1
    else:
        yoon = 0
else:
    yoon = 0

print(yoon)
