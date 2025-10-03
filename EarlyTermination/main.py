import math

a, b, k = map(int, input().split())

sqrt_k = math.isqrt(k)

while a > sqrt_k or b > sqrt_k:
    if a > b:
        a, b = b, a
    b = b % a

if a >= b:
    print(a, b)
else:
    print(b, a)
