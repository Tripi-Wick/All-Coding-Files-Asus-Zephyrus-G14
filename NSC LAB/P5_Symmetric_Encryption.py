from cryptography.fernet import Fernet

# Generate a key
key = Fernet.generate_key()
cipher_suite = Fernet(key)

# Generate a message
message = "Trishan UE218105".encode()

# Display original code
print("Original message:", message.decode())

# Encrypt a message
cipher_text = cipher_suite.encrypt(message)

# Display encrypted code
print("Encrypted message:", cipher_text)

# Decrypt the message
plain_text = cipher_suite.decrypt(cipher_text)

# Display decrypted code
print("Decrypted message:", plain_text.decode())
