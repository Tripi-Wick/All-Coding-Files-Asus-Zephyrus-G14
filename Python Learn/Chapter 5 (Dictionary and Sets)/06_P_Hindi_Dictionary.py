dict={
    "Pankha" : "Fan",
    "Pawan" : "Air",
    "tu" : "You",
    "Pyar" : "love",
}

print("available options are : ",dict.keys())

a=input("Enter the Word whose meaning you want to see: ")

# print("Meaning of your word is: ",dict[a]) #THis throws error if any ambiguous element is asked

print("Meaning of your word is: ",dict.get(a))