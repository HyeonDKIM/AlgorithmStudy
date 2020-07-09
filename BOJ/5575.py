A_attendH, A_attendM, A_attendS, A_exitH, A_exitM, A_exitS\
    = input().split()
B_attendH, B_attendM, B_attendS, B_exitH, B_exitM, B_exitS\
    = input().split()
C_attendH, C_attendM, C_attendS, C_exitH, C_exitM, C_exitS\
    = input().split()

def getTime(attendH, attendM, attendS, exitH, exitM, exitS):
    h = int(exitH)-int(attendH)
    #print("h결과:"+str(h))
    m = int(exitM)-int(attendM)
    #print("m결과:" + str(m))
    s = int(exitS)-int(attendS)
    #print("s결과:" + str(s))

    if s < 0:
        s = 60+s
        m = m-1

    if m < 0:
        m = 60+m
        h = h-1

    print(str(h)+" "+str(m)+" "+str(s))

getTime(A_attendH, A_attendM, A_attendS, A_exitH, A_exitM, A_exitS)
getTime(B_attendH, B_attendM, B_attendS, B_exitH, B_exitM, B_exitS)
getTime(C_attendH, C_attendM, C_attendS, C_exitH, C_exitM, C_exitS)
