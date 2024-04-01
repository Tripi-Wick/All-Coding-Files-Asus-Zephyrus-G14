import random
def generate_keypair(p, q):
    n = p * q
    phi = (p - 1) * (q - 1)

    e = random.randrange(1, phi)
    while gcd(e, phi) != 1:
        e = random.randrange(1, phi)

    d = mod_inverse(e, phi)
    return ((n, e), (n, d))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def mod_inverse(a, m):
    m0, x0, x1 = m, 0, 1
    while a > 1:
        q = a // m
        m, a = a % m, m
        x0, x1 = x1 - q * x0, x0
    return x1 + m0 if x1 < 0 else x1

def encrypt(public_key, plaintext):
    n, e = public_key
    cipher = [pow(ord(char), e, n) for char in plaintext]
    return cipher

def decrypt(private_key, ciphertext):
    n, d = private_key
    plain = [chr(pow(char, d, n)) for char in ciphertext]
    return ''.join(plain)

p = 13
q = 19
public_key, private_key = generate_keypair(p, q)

message = "Trishan UE218105"
encrypted_message = encrypt(public_key, message)
decrypted_message = decrypt(private_key, encrypted_message)

print(f"Original message: {message}")
print(f"Encrypted message: {encrypted_message}")
print(f"Decrypted message: {decrypted_message}")
