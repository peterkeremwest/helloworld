s = input("s: ")
t = input("t: ")

if s == t:
    print("Same")
else:
    print("Different") 

####       Unlike C, in Python, instead of comparing to identical strings' addresses and recognizing them as different, python will actually identify them same as we'd expect.         ####

s = input("s:   ")

t = s.capitalize()

print(f"s: {s}")
print(f"t: {t}")

#### In Python, unlike C, the capitalized new string(t) will not actually replace the string s, so it'll keep the initial value the same. returning a copy of the original s, s is unchanged, because s is immutable, strings, once they exist, cannot be changed in python.