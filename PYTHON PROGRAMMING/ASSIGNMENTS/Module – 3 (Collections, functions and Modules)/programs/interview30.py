

# lists=[1,2,5,4,1,2,5,41,2,]

# hello=[]

# for i in lists:
#     if i not in hello:
#         hello.append(i)
    
# print(hello)

# --------------------------------------------------------------------------------------------

# lists = [1, 2, 5, 8, 9 , 5 , 7, 3, 7]

# seen=set()


# even=[]
# odd=[]
# duplicate=[]

# for i in lists:
#     if i in seen:
#         duplicate.append(i)

#     else:
#         seen.add(i)

#     if i%2==0:
#         even.append(i)

#     else:
#         odd.append(i)

# even=[i for i in even if i not in duplicate]
# odd=[i for i in odd if i not in duplicate]


# combined_list=[even,odd,duplicate]




# print(combined_list)

# -----------------------------------------------------------------------------------------
# while True:
#     num=input("Enter string: ")

#     if num==num[::-1]:
#         print('palindrome')

#     else:
#         print("not")


# ----------------------------------------------------------------------------------------------

# def palindrome(s):
#     s= s.replace(" ","").lower()

#     start=0
#     end=len(s)-1

#     while start< end:
#         if s[start]!=s[end]:
#             return False
        
#         start+=1
#         end-=1

#     return True


# s=input("Enter string: ")

# if palindrome(s):
#     print(f"{s} is palindrome ")

# else:
#      print(f"{s} is not palindrome")


# --------------------------------------------------------------------------------------------------
# lists=[1, 5, 2, 8, 6, 7, 2]

# odd=[i for i in lists if i%2!=0]
# even=[i for i in lists if i%2==0]

# result=[odd[0]]+ [even[0]]+ [odd[1]]+ [odd[2]]+[even[0]]+[even[2]]+[even[1]]

# print(result)

# ---------------------------------------------------------------------------------------------------

# str="himanshu"

# output=[",".join(str)]
# print(output)

#  --------------------------------------------------------------------------------------------------

# string="hello"

# unique={}

# for i in string:
#     unique[i]=unique.get(i,0)+1

# for i in string:
#     if unique[i]==1:
#         print(i)
#         break

# ------------------------------------------------------------------------------------------------

# d={'vishal': 120,'himanshu':124, 'lucky':100}

# d_hello=input("Enter keys name: ")

# if d_hello in d.keys():
#     print("you enter ",d_hello)
#     print(f"keys in the dictionary 'values' : {d[d_hello]}")

# ------------------------------------------------------------------------------------------
# d={'vishal': 120,'himanshu':124, 'lucky':100}
# d1={'jayesh': 111,'himanshu':124, 'jiyu': 7}

# d.update(d1)

# print(d)
# --------------------------------------------------------------------------------------------------

# d={'vishal': 120,'himanshu':124, 'lucky':100}

# d1=1

# for i in d:
#     d1=d1*d[i]

# print(d1)

# -------------------------------------------------------------------------------------------

# d={'vishal': 120,'himanshu':124, 'lucky':100}

# total= sum(d.values())

# print(total)

# ---------------------------------------------------------------------------------------

# list1=['a','d','f','g','h','j','v','b']
# list2=[1,5,8,9,6,7,1,2]

# d=dict(zip(list1,list2))

# print(d)

# --------------------------------------------------------------------------------------------

# string="hello"

# un={}

# for i in string:
#     un[i]=un.get(i,0)+1

# for i in string:
#     if un[i]==1:
#         print(i)

#         break


# ------------------------------------------------------------------------------------------------

# dict={
#     'Name': 'Himanshu',
#     'Subject': 'Math',
#     'Mobile': 9687825910,
#     'Branch': 'Bca'   
# }


# dict['gender']= 'male'                  # adding keys and value in dict
# print(list(dict['Name']))               # fetching the value from dict
# print(dict['Mobile'])                   # fetching the value from dict
# print(list(dict['Branch']))             # fetching the value from dict
# print(dict)
# print(dict.keys())                      # fatching the all keys
# print(dict.values())                       # fetching the all values

# ------------------------------------------------------------------------------------------------
# using nested dict.

# dict={
#     'Name': 'Himanshu',
#     'Subject': {
#         'Maths' : 85,
#         'English': 90,
#         'Science': 80
#     }
# }

# print(list(dict.keys()))
# print(list(dict.values()))
# print(dict['Subject']['Maths'])
# print(dict)


# -------------------------------------------------------------------------------



# d={'vishal': 120,'himanshu':124, 'lucky':100}


# hello=input("enter string: ")

# if hello in d.keys():
#     print(f'You Enter {hello}')
#     print(f"key the 'value' {d[hello]}")



# --------------------------------------------------------------------------------------

# def greater_num(s):
#     string=s[0]

#     for i in s:
#         if i > string:
#             string= i

#     return string

# print(greater_num([1,5,8,9,6,3,5,2,1]))



# --------------------------------------------------------------------------------

# def reverse_str(h):

#     reverse= ''

#     for i in h:
#         reverse= i + reverse

#     return reverse

# print(reverse_str('hello'))


# -----------------------------------------------------------------------------------

# def palindrome(s):

#     if s==s[::-1]:
#         return 'palindrome'

#     else:
#         return 'not'

# print(palindrome('momm'))

# --------------------------------------------------------------------------------------

# def count_char(s,i):
#     return s.count(i)

# print(count_char('hellooooooooo','o'))


# --------------------------------------------------------------------------------

# hello=input("enter string: ")

# s='h'

# hii=hello.count(s)

# print(hii)

# --------------------------------------------------------------------


# def common(list1,list2):
#     return list(set(list1) & set(list2))     # and operator are used for common. find intersection of two string


# print(common([1,2,3,4,5], [5,4,2,9,8,7,15]))

# -------------------------------------------------------------------------

# def sort_1(s):
#     return sorted(s,key=lambda x:x[1])   # lambda fun is used for ascending and work on 2 element of each tuples

# print(sort_1([(5,10), (8,9), (4,8)]))


# # ---------------------------------------------------------------------

# def duplicate(s):

#     hello=[]

#     for i in s:
#         if i not in hello:
#             hello.append(i)
#     return hello

    
# print(duplicate([1,5,8,9,5,85,2,51,25,89,5,5]))

# -------------------------------------------------------------------------------


# n = 5  # Number of rows

# for i in range(1, n + 1):
#     if i == 1:
#         print(' ' * (n - i) + '*')
#     elif i == n:
#         print('*' * (2 * i - 1))
#     else:
#         print(' ' * (n - i) + '*' + ' ' * (2 * i - 3) + '*')




# -----------------------------------------------------------




