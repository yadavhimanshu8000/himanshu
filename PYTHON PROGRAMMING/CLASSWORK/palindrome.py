
n=(input("enter the string:"))

if len(n)%2==0:
    print(n)

else:
    n1=int(len(n)/2)
    print(n[n1-1]+n[n1]+n[n1+1])


s=(input("enter the string:"))

s1=s[::-1]

if s==s1:
    print("palindrome!!")

else:
    print("not palindrome")
    