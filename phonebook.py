# or people = dict()
people = {
  "carter": "+1-617-495-1000",
  "david": "+1-949-468-2750"
            } 

name = input("Name? ")
if name in people:
    print(f"Number: {people[name]}")            #you can index into the dictionary using [], and get back the definition.
