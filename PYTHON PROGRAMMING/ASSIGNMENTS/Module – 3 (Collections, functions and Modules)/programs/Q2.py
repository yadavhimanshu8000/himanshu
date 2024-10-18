def hello(numbers):
    if not numbers:          # Check if the list is empty
                       
        return None,None,0       # Return None for min/max and 0 for sum 

    largest=max(numbers)
    smallest=min(numbers)
    total_sum=sum(numbers)

    return largest,smallest,total_sum

num_list=[52,4,62,85,10,2,6,8]

largest,smallest,total_sum=hello(num_list)

print("real list: ",num_list)
print()
print(f" largest: {largest}\n smallest: {smallest}\n total_sum: {total_sum}\n")


     