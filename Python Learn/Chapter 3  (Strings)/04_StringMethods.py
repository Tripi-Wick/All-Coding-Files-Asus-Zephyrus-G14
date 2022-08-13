Story = "once upon a time there was a coder who was learning python in this wicked world after completing c but after this he still gotta do cpp"

# len() ---> Total length of string

print("\n")
print(len(Story))
print("\n")

# .endswith() --> is the string ending with given ? (True/False)

print(Story.endswith("hello"))
print(Story.endswith("p"))
print(Story.endswith("cpp"))
print(Story.endswith("do cpp"))
print("\n")

# .count() ---> Counts occurrence

print(Story.count("a"))
print("\n")

# .capitalize() --> Capitalize first word
print(Story.capitalize())
print("\n")

# .find() ---> Finds the first occurrence of word
print(Story.find("python"))
print("\n")

# .replace() ---> Replaces all occurrences of the word
print(Story.replace("python" , "Snake")) #---->  It only replaces it in a copy
print("\n")
 