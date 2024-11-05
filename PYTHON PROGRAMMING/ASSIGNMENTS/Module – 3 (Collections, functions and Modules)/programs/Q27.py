# Write a Python script to sort (ascending and descending) a dictionary by value. 

my_dict = {'apple': 10, 'banana': 5, 'cherry': 20, 'date': 15}

                            # Sort the dictionary by value in ascending order
ascending_sorted = dict(sorted(my_dict.items(), key=lambda item: item[1]))

                                        # Sort the dictionary by value in descending order
descending_sorted = dict(sorted(my_dict.items(), key=lambda item: item[1], reverse=True))

print("Sorted by value (ascending):", ascending_sorted)
print("Sorted by value (descending):", descending_sorted)