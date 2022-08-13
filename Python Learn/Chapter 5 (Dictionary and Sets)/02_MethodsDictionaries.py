from turtle import update


myDict = {
    "fast": "In a Quick Manner",
    "trippi": "Short form of Trishan Preet",
    "marks": [20,30,21],
    1 : 10,
    "sub_Dict": {
        "Uiet": "A P.U Department",
        "Rank": [1,2,3,4]
    }
}

# .keys() ---> To print dictionary keys
print(myDict.keys())
print("\n")

# .keys() ---> To print dictionary keys as a list
print(type(myDict.keys()))
print("\n")
print(list(myDict.keys()))
print("\n")

# .values() ---> To print values of dictionary key
print(myDict.values())
print("\n")
print(list(myDict.values()))  #it returns a list type
print("\n")

# .items() ---> To print key and value pairs of whole dictionary
print(myDict.items())    # It returns a tuple type
print("\n")

# .update() ---> To update lists
myDict.update({'Trishan':"Creator"}) #Method one
print("\n")

updateDict = {
    'Harry' : 'Friend',
    'Arcadias' : 'Socialist',
    'Dills' : 'Not Friend'
}

myDict.update(updateDict) #Method Two
print(myDict)
print("\n")
# If we add a old element to update list it will replace that old one
myDict.update({'fast':"In a very quick way"})
print(myDict)
print("\n")


# .get() ----> To get a value of key
print(myDict.get('fast'))
print("\n")

# Difference Between print and get
print(myDict.get("fast2")) #It gives out NONE and does not throws a error
print("\n")
print(myDict["fast2"]) #It throws a error
print("\n")