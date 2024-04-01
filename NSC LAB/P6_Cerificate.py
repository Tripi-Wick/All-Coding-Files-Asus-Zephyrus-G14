import datetime
from cryptography import x509
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives import serialization
from cryptography.hazmat.primitives.asymmetric import rsa
from cryptography.hazmat.primitives import hashes
from cryptography.hazmat.primitives.serialization import Encoding, PublicFormat

# Generate a private key
private_key = rsa.generate_private_key(
    public_exponent=65537,
    key_size=2048,
    backend=default_backend()
)

# Create a Certificate Signing Request (CSR)
csr = x509.CertificateSigningRequestBuilder().subject_name(x509.Name([
    x509.NameAttribute(x509.NameOID.COUNTRY_NAME, "US"),
    x509.NameAttribute(x509.NameOID.STATE_OR_PROVINCE_NAME, "California"),
    x509.NameAttribute(x509.NameOID.LOCALITY_NAME, "San Francisco"),
    x509.NameAttribute(x509.NameOID.ORGANIZATION_NAME, "Example Company"),
    x509.NameAttribute(x509.NameOID.COMMON_NAME, "example.com"),
])).sign(private_key, hashes.SHA256(), default_backend())

# Generate a self-signed certificate
certificate = x509.CertificateBuilder().subject_name(
    csr.subject
).issuer_name(
    csr.subject
).public_key(
    csr.public_key()
).serial_number(
    x509.random_serial_number()
).not_valid_before(
    datetime.datetime.utcnow()
).not_valid_after(
    datetime.datetime.utcnow() + datetime.timedelta(days=365)
).sign(private_key, hashes.SHA256(), default_backend())

# Extract the public key from the certificate
public_key = certificate.public_key()

# Serialize the public key to PEM format
public_key_pem = public_key.public_bytes(
    encoding=Encoding.PEM,
    format=PublicFormat.SubjectPublicKeyInfo
)

print("Public Key (PEM format):\n")
print(public_key_pem.decode("utf-8"))
