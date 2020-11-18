#!/usr/bin/python3

n = 5

def factorial(n):
    #print("Calculate factorial here")
    n = n*(n-1)*(n-2)*(n-3)*(n-4)
    return n

assert(factorial(n) == 120)

print(factorial(n))
