def Possibility (N, M, A):
    # Write your code here
    pass

T = int(input())
for _ in range(T):
    N = int(input())
    M = int(input())
    A = list(map(int, input().split()))
    print(A)
    out_ = Possibility(N, M, A)
    print (out_)