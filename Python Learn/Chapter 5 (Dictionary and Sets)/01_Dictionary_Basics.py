# Its really a type of dictionary which stores acronyms for everything. Plus sub dictionaries can be created in it

myDict = {
    "Fast": "In a Quick Manner",
    "Trippi": "Short form of Trishan Preet",
    "Marks": [20,30,21],
    1 : 11,
    "Sub_Dict": {
        "Uiet": "A P.U Department",
        "Rank": [1,2,3,4]
    }
}

# Ways to Print Dictionaries
print(myDict)
print("\n")
print(myDict["Fast"])
print("\n")
print(myDict["Sub_Dict"])
print("\n")
print(myDict["Sub_Dict"]['Uiet'])