Comment = input("Enter your comment: ")

s1 = "make a lot of money"
s2 = "buy now"
s3 = "subscribe  this"
s4 = "click this"

if(s1 in Comment or s2 in Comment or s3 in Comment or s4 in Comment):
    print("This is a SPAM Comment")
else:
    print("This is a valid comment")
