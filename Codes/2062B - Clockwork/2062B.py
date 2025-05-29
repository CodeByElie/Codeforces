def algo(t,tests):
 
    for test in tests:
        n=test[0]
        ok=True
        for i in range(n):
            c=test[1][i]
            if c<=max( (n-i-1)*2, i*2 ):
                ok=False
                break
        if ok: print("YES")
        else : print("NO")
 
 
if __name__=="__main__":
    t = int(input())
    tests=[]
    for i in range(t):
        n = int(input())
        tests.append(
            (n,[ int(k) for k in input().split(" ") ])
        )
    algo(t,tests)
