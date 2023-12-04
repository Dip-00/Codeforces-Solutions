p=input()
count=0
for i in p:
    if i=='H' or i=='Q' or i=='9':
        count+=1
        print("YES")
        break;
    
if(count==0):
    print("NO") 
    count=0  