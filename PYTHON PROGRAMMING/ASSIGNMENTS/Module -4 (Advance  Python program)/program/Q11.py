# Write a Python program to copy the contents of a file to another file. 

                # open file for read..
file=open('input.txt','r')

                    # open file for write in..
secondfile=open('writein.txt','w')

                # read the content
content= file.read()

                    #content of file can copy in secondfile..
secondfile.write(content)

print("contents of 'input.txt' copy in 'writein.txt' ")

