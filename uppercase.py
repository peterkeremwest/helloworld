before = input("Before: ")
print("After: ", end="")

for c in before:                                # in python you won't need a [] notation to arrange c to the first letter of the string, this use of for loop will automatically assign c as the first member of the array. 
    print(c.upper(), end = "")
print()    

#############           OR           #############

lowerword = input("First, enter a lower case word:  ")
print("now, your word in uppercase:     ", end="")

upperword = lowerword.upper()

print(upperword)

#### or ####

print(f"After:   {upperword}")