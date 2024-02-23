from sys import argv

if len(argv) == 2:
    print(f"Hello, {argv[1]}")  # if there's a second word, this program will print "hello, [INPUT2ndWORDHERE]"        
else:
    print("hello, world")    


#######         or         #######    
for arg in argv[1:]:
    print(arg)