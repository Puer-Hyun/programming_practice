H_population = 250
K_population = 180
H_rate = 3.6
K_rate = 4.2
i = 0
while H_population > K_population:
    H_population *= 1+(H_rate/100)
    K_population *= 1+(K_rate/100)
    i += 1 
print(i+1996)
