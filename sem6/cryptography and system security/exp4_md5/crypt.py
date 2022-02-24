import hashlib

text = input("Enter text : ")

hash_object = hashlib.md5(text.encode())
md5_hash = hash_object.hexdigest()

print("Normal text : ", text)
print("MD5 " + md5_hash)

hash_object = hashlib.sha1(text.encode())
sha1_hash = hash_object.hexdigest()



print("SHA1 " + sha1_hash)