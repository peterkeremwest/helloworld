import csv

file = open("phonebook.csv", "a")               ###### "a" stands for append mode, not in write more which will overwrite it, we will add to it by opening it in "a" (append) mode.

name = input("Name : ")
number = input("Number : ")

writer = csv.writer(file)                       ######  to write on the csv file, this function called csv.writer is used that comes from the csv library. 
writer.writerow([name, number])                 ######  using those inputs we received from the user as name and number to write a row in the file.

file.close()

###########                     OR                      ###########

with open("phonebook.csv", "a") as file:
    name = input("Name: ")
    number = input("Number: ")

    #writer = csv.writer(file)
    writer = csv.DictWriter(file, fieldnames=[{"name", "number"}])
    writer.writerow([{"name": name, "number": number}])             #### Thanks to this feature, you can now implement a dictionary system in which you can add both variables to their respective columns regardless of their order of input. it's gonna figure out which info goes under which column              

    #### in this method above, instead of closing the file when operation is completed, you can prompt that next time this file opens, it'll operate the following 4 rows of code and automatically close it. optimization ++

    ######## instead of using