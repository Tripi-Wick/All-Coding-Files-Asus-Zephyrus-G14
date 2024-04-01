import hashlib

# Generate a message
message = "Trishan UE218105".encode()

# Display original code
print("Original message:", message.decode())

# Hash a string using SHA-256
hash_object = hashlib.sha256()
hash_object.update(message)
hash_value = hash_object.hexdigest()

# Display hash code
print("SHA-256 Hash:", hash_value)