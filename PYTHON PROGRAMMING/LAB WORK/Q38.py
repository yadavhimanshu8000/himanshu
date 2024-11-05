# Write a Python program to combine values in python list of dictionaries. 

# Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount':  
# 300}, o {'item': 'item1', 'amount': 750}] 
  
# Expected Output: 
# Counter ({'item1': 1150, 'item2': 300})  


from collections import Counter

addting_amt=[   
                    {'item': 'item1', 'amount': 400},
                    {'item': 'item2', 'amount': 300},
                    {'item': 'item1', 'amount': 750}

            ]

                # using counter ...
count_1=Counter()


                    # loop on through the list and update the count_1..
for i in addting_amt:

    count_1[i['item']]+=i['amount']

print(f"Adding amount: {count_1}")





