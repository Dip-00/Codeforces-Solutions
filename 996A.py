n=int(input())
count=0
li=[100,20,10,5,1]
for i in li:
    if(n>=i):
        count=int(count)+int(n/i)
        n=n%i

print(int(count))