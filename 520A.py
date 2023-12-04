# method 1:

import string
c=0
n=int(input())
s=input()
x=s.lower()

if n<26:
    print("NO")
else:
    for i in string.ascii_lowercase:
        if(i in x):
            c+=1
        else:
            print("NO")
            break
    
    if(c>=26):
        print("YES")
            

    
# method 2:  

# n = int(input())
# s = input()
# s=s.lower()
# p=set(s)
# if len(p)==26:
#     print("YES")
# else:
#     print("NO")