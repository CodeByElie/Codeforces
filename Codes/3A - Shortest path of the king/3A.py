def convertCoordinates(s : str) -> list:
    return [ord(s[0])-97, 8 - int(s[1])]
 
def algo(D,A):
    moves=[]
    print(max(abs(D[0]-A[0]),abs(D[1]-A[1])))
 
    while D!=A:
        m=""
        if D[0]<A[0]:
            m+="R"
            D[0]+=1
        elif D[0]>A[0]:
            m+="L"
            D[0]-=1
        if D[1]<A[1]:
            m+="D"
            D[1]+=1
        elif D[1]>A[1]:
            m+="U"
            D[1]-=1
        print(m)
 
 
    for move in moves: print(move)
if __name__ == "__main__":
    D=convertCoordinates(input())
    A=convertCoordinates(input())
    algo(D,A)