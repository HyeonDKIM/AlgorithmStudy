h, m, s = input().split()
D = input()
h, m, s, D= int(h), int(m), int(s), int(D)

# print(h, m, s, D)

second = D%60
minute = D//60%60
hour = D//3600

# print(hour, minute, second)

ans_s = s+second
ans_m = m+minute
ans_h = h+hour

if ans_s >= 60:
    ans_m += 1
    ans_s -= 60
if ans_m >= 60:
    ans_h += 1
    ans_m -= 60

while ans_h > 23:
    ans_h -= 24

print(ans_h, ans_m, ans_s)
