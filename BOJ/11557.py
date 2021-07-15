T = eval(input())

def f(a):
    return a[1]

for j in range(T):
    N = eval(input())
    dic = {}
    S = ''
    L = ''
    for i in range(N):
        tmp_school, tmp_drink = input().split()
        tmp_drink = int(tmp_drink)
        dic[tmp_school] = tmp_drink

    ans = sorted(dic.items(), key = f, reverse = True)
    print(ans[0][0])
