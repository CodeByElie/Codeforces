from math import ceil
 
if __name__ == "__main__":
    n,m,a = list(map(int, input().split()))
    print(ceil(m/a)*ceil(n/a))