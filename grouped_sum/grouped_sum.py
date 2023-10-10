total1 = 0
for k in range(1,101):
    total2 = 0
    for i in range(1,k+1):
        total2+=i
    total1 += total2
    print(total1, total2)
print(f'answer is {total1}')