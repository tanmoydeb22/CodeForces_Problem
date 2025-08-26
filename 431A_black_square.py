a1, a2, a3, a4 = map(int, input().split())
str = input()

# calories = {1: a1, 2: a2, 3: a3, 4: a4}
sum_of_calories = 0

# total_calories = sum(calories[int(ch)] for ch in s)
for i in str:
    if(i=="1"):
        sum_of_calories += a1
    if(i=="2"):
        sum_of_calories += a2
    if(i=="3"):
        sum_of_calories += a3
    if( i=="4"):
        sum_of_calories += a4   
 
# print(total_calories)       
print(sum_of_calories)


    