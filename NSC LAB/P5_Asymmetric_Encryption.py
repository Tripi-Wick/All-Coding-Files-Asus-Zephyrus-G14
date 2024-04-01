from cryptography.hazmat.primitives import serialization, hashes
from cryptography.hazmat.primitives.asymmetric import rsa, padding

# Generate a key pair
private_key = rsa.generate_private_key(
    public_exponent=65537,
    key_size=2048
)

# Serialize the public key
public_key = private_key.public_key().public_bytes(
    encoding=serialization.Encoding.PEM,
    format=serialization.PublicFormat.SubjectPublicKeyInfo
)

# Generate a message
message = "Trishan UE218105".encode()

# Display original code
print("Original message:", message.decode())

# Encrypt a message with the public key
cipher_text = private_key.public_key().encrypt(
    message,
    padding.OAEP(
        mgf=padding.MGF1(algorithm=hashes.SHA256()),
        algorithm=hashes.SHA256(),
        label=None
    )
)

# Display encrypted code
print("Encrypted message:", cipher_text)

# Decrypt the message with the private key
plain_text = private_key.decrypt(
    cipher_text,
    padding.OAEP(
        mgf=padding.MGF1(algorithm=hashes.SHA256()),
        algorithm=hashes.SHA256(),
        label=None
    )
)

# Display decrypted code
print("Decrypted message:", plain_text.decode())