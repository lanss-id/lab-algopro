import math

def prime_factorization(N):
    count = 0
    while N % 2 == 0:
        count += 1
        N //= 2
    if count > 0:
        print(f"2^{count}", end=" ")

    for i in range(3, int(math.sqrt(N)) + 1, 2):
        count = 0
        while N % i == 0:
            count += 1
            N //= i
        if count > 0:
            print(f"{i}^{count}", end=" ")

    if N > 2:
        print(f"{N}^1", end="")

N = int(input(""))
prime_factorization(N)
