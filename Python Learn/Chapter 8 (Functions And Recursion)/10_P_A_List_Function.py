def remove_and_strip(string,word):
    new_str = string.replace(word,"")
    return new_str.strip()

str = "      I love pain and I can do anything for it      "
print(str)
print(remove_and_strip(str, 'anything'))