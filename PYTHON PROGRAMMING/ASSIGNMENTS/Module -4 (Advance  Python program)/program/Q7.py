# Write a python program to find the longest words.

                    # open the file...
file= open("input.txt",'r')

                    # read the file..
lines= file.read()

                    # split the word in list..
word= lines.split()

                        # using max on word checking len..
longest_word= max(word,key=len)

print(longest_word)

