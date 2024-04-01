import socket 
def ecrypt(text,shift):
    result=""
    for i in range(len(text)):
        char=text[i]
        if(char.isalpha()):
            if(char.isupper()):
                result+=chr((ord(char)+shift-65)%26 + 65)
            if(char.islower()):
                result+=chr((ord(char)+shift-97)%26 + 97)
        else:
            result+=char
    return result

s=socket.socket()
port=12347
s.bind(('127.0.0.2',port))
print("Socket binded to %s"%(port))
s.listen(5)
while True:
    c,addr=s.accept()
    print("got connection from",addr)
    k=input("Enter the plaintext:")
    shift=3
    encrypted_text=ecrypt(k,shift)
    print("The encrypted text is:",encrypted_text)
    c.send(encrypted_text.encode())
    c.close()
    break