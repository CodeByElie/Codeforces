def algo(t,tests):
    for test in tests:
        n=test[0]
        i=int(n/sum(test[1:]))
        c=i*sum(test[1:])
        i*=3
        while c<n: 
            c+=test[(i%3)+1]
            i+=1
        print(i)
 
if __name__ == "__main__":
    t=int(input())
    tests = [
        [int(k) for k in input().split(' ')]
        for i in range(t) 
    ]
    algo(t,tests)