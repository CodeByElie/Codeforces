import heapq
 
if __name__=="__main__":
    s = list(input())
    bo = 0
    ans = 0
    q = []
    for i in range(len(s)):
        if s[i]=='(': bo+=1
        elif s[i]==')': bo-=1
        else:
            vo,vc =tuple([int(k) for k in input().split(" ")])
            s[i]=')'
            ans+=vc
            bo-=1
            heapq.heappush(q,(vo-vc,i))
        if bo<0:
            if len(q)==0: break;
            a,b = heapq.heappop(q)
            bo+=2
            ans+=a
            s[b]  = '('
    if bo!=0:
        print("-1")
    else:
        print(ans)
        print("".join(s))