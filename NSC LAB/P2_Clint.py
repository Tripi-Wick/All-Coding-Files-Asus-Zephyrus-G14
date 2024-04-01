import socket               # Import socket module
s = socket.socket()         # Create a socket object
port = 12348                # Reserve a port for your service.
s.connect(("127.0.0.1", port))
print(s.recv(1024).decode())
s.close() 