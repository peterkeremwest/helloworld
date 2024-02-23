import sys

names = ["bill", "charlee", "fred", "george", "ginny","percy","ron"]

name = input("Name: ")

for n in names:
    if name == n:
        print("Found")
        sys.exit(0)

#######             OR              #######
        
if name in names:
    print("Found....")
    sys.exit(0)        

print("Not found")
sys.exit(1)        