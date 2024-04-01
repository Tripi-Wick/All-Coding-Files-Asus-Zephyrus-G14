import socket              
s = socket.socket()         
host = "127.0.0.1"
port = 12348                
s.bind((host, port))        
s.listen(5)                 
while True:
   c, addr = s.accept()    
   print('Got connection from', addr)
   k=input("data you want to send: ")
   c.send(k.encode())
   c.close() 
