# Write a Python program to count the occurrences of each word in a given sentence..abs

n=input("Enter string: ")

                #split the each word..
word=n.lower().split()

count={}
            # using for loop on word and count...
for i in word:
    if i in count:
        count[i]+=1

    else:
        count[i]=1

print("word counts: ")
                    #print the count of each word..
for word,count in count.items():
    print(f"{word} : {count}")
