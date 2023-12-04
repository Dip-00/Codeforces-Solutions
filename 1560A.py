t=int(input())
li=[]
lii=[]
x=1

for i in range(0,t):
    a=int(input())
    li.append(a)


while(len(lii)<=1000):
    if(x%10==3 or x%3==0):
        x+=1
        continue
    else:
        lii.append(x)
        x+=1
        
for i in li:
    print(lii[i-1])
        

        
