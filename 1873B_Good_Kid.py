# def solve():
#     n = int(input(""))
#     li = []
#     # for i in range(0, n):
#     li.append(int(input("").split()));
#     mul = 1
#     li.sort()
#     li[0] = li[0] + 1
#     for i in range(0, n):
#         mul = mul*li[i]
    
#     print(mul)
    
# def solve():
#     n = int(input())  
#     li = []  
    
#     for i in range(n):
#         li.append(int(input().splite()))
    
#     li.sort()  

#     li[0] += 1

#     result = 1 
#     for num in li: 
#         result *= num
    
#     print(result) 
    
# t = int(input(""))
# for i in range(0, t):
#     solve()


def max_product_after_increment(t, test_cases):
    results = []
    for case in test_cases:
        n, digits = case
        max_product = 0
        
        for i in range(n):
            modified_digits = digits[:]
            modified_digits[i] += 1
            product = 1
            for digit in modified_digits:
                product *= digit
            max_product = max(max_product, product)
            
        results.append(max_product)
    
    return results

t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    digits = list(map(int, input().split()))
    test_cases.append((n, digits))

results = max_product_after_increment(t, test_cases)
for res in results:
    print(res)
    