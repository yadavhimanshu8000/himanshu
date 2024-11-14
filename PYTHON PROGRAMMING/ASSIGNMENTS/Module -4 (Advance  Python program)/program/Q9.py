#  Write a Python program to count the frequency of words in a file. 

file= open("input.txt",'r')

            # create dictionary..
word_count={}

for i in file:
                # loop for lower character and split the file..
    word= i.lower().split()

    for j in word:
                        # if files contents in dictionary then content+=1..
        if j in word_count:
            word_count[j]+=1

        else:
            word_count[j]=1


print(word_count)



   


    

