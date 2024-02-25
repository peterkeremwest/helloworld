import csv

with open("favorites.csv", "r") as file:
    
    #reader = csv.reader(file)
    reader = csv.DictReader(file)
    counts = dict() #or counts = {} , thanks to creating a dictionary, whatever the current entry in the row will be added to it's own counter.

    for row in reader:
        favorite = row["title"]           # this, returning the data in a list in this way (row[1]) is bad design, because if we were to change the column data is enlisted under, it'll break the code.
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1    
def get_value(language):
    return counts[language]            
                                    #'''for favorite in sorted(counts,reverse=True):''' #sorting by key
for favorite in sorted(counts, key=lambda language: counts[language], reverse=True): #get value returns the counts, we use it as key, and we put it in reverse order to sort answers by quantity, but again, it's not good habit to create a function just to use it once.  so we switched it and used a func called lambda, and defined it in one line. therefore we wont even bother naming it. 
    print(f"{favorite}: {counts[favorite]}")

favorite = input("Favorite: ")
if favorite in counts:
    print(f"{favorite}: {counts[favorite]}")
