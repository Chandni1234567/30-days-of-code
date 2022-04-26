T=int(input())
for _ in range(T):
    (A,B)=(input(),input())
    com=0
    for wrd in A:
        if wrd in B:
            com=1
            print("Yes")
            break
    
    if com==0:
        print("No")
