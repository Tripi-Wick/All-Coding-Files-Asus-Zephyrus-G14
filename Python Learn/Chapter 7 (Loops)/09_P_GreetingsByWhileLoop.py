l1 = ["Harry", "Sohan", "Sachin","Rahul"]

i=0

while(i<len(l1)):
    if('S' in l1[i]):
    # if(l1[i].startswith('S')):  #Easy Way
        print("greetings,"+l1[i])
        i=i+1
    else:
        i=i+1
        continue
