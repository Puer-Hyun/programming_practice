def factorial(n):
    if n==1:
        return 1 
    start = 1 
    for i in range(1,n+1):
        start *= i 
    return start 

print(sum([((-1)**(i+1))*i/(factorial((2*i)-1)) for i in range(1,11)]))