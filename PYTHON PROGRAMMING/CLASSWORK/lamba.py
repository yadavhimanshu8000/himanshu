

'''
n=lambda a,b,c:a+b+c

print(n(5,5,5))

x=lambda a:a*a

print(x(5))


def fun_com(n):
    return lambda x:x*n

result=fun_com(2)

print("double the number of 15   :  ",result(15))

result=fun_com(3)

print("triple the number of 15   :  ",result(15))

result=fun_com(4)

print("quadruple the number of 15:  ",result(15))

result=fun_com(5)

print("quintuple the number of 15:  ",result(15))

'''

marks=[('science',99),('maths',98),('english',48),('ss',54)]

print("original list of tuple:",marks)

marks.sort(key=lambda x:x[1])

print(marks)


