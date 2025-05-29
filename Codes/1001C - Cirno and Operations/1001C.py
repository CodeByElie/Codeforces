def algo(t,tests):
 
    def diffSeq(l):
        return [l[i+1]-l[i] for i in range(len(l)-1)]
 
    vals = []
 
    def testOp(l):
        if len(l)==1:
            vals.append(l[0])
            return
        l1 = diffSeq(l)
        vals.append(abs(sum(l1)))
        testOp(l1)
 
 
 
    for test in tests:
        n=test[0]
        a=test[1]
        vals = [sum(a)]
        testOp(a)
        print(max(vals))
 
 
if __name__=="__main__":
    t = int(input())
    tests=[]
    for i in range(t):
        n = int(input())
        tests.append(
            (n,[ int(k) for k in input().split(" ") ])
        )
    algo(t,tests)
