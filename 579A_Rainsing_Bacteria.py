n = int(input())
count = 0

while n!=0:
    bit = n&1
    if(bit):
        count+=1
    n>>=1
print(count)
        