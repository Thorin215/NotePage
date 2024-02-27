# def search(f):
#     x = 0
#     while True:
#         if f(x):
#             return x
#         x += 1
#
# def is_three(x):
#     return x == 3
#
# def trace1(fn):
#     def traced(x):
#         print('Calling',fn,'on argument',x)
#         return fn(x)
#     return traced
#
#
# def square(x):
#     return x*x
#
# def sum_squares_up_to(n):
#     k = 1
#     total = 0
#     while k <= n:
#         total, k = total + square(k), k+1
#     return total
#
# def inverse(f):
#     return lambda y:search(lambda x: f(x) == y)
#
# def print_sums(x):
#     print(x)
#     def next_sum(y):
#         return print_sums(x+y)
#     return next_sum

from unicodedata import *

lookup('BABY')