def algo(t,tests):
 
    def valid(l):
        return len(set(l))>=3
    
    def add(l1,l2):
        return [l1[k]+l2[k] for k in range(len(l1))]
 
    for test in tests:
        a=sorted(test[0])
        b=sorted(test[1])
        ok=False
        for i in range(len(b)):
            if valid(add(a,b)):
                ok=True
                break
            k=b[0]
            del b[0]
            b.append(k)
        if ok: print("YES")
        else: print("NO")
 
if __name__=="__main__":
    t = int(input())
    tests=[]
    for i in range(t):
        k=int(input())
        a=[int(k) for k in input().split(" ")]
        b=[int(k) for k in input().split(" ")]
        tests.append([a,b])
    
    algo(t,tests)