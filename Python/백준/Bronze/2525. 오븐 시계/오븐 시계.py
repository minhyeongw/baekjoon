a,b=map(int,input().split())
time=int(input())
b+=time
while b>=60:
    a+=1
    b-=60
if a>=24:
    a-=24
print(a,b)



