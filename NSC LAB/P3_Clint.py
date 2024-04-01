import socket 
def decrypt(text,shift):
    result=""
    for i in range(len(text)):
        char=text[i]
        if(char.isalpha()):
            if(char.isupper()):
                result+=chr((ord(char)-shift-65)%26 + 65)
            if(char.islower()):
                result+=chr((ord(char)-shift-97)%26 + 97)
        else:
            result+=char
    return result
import socket 
s=socket.socket()
port=12347
s.connect(('127.0.0.2',port))
text=s.recv(1024).decode()
print("The text before decryption is:",text)
shift=3
decrypted_text=decrypt(text,shift)
print("The decrypted text is",decrypted_text)
s.close()