with open("cattos.jpg" , "rb") as f:
    cattos = f.read()

with open("kitters.jpg", "rb") as f:
    kitters = f.read()

flag = ""

for i in range(min(len(cattos), len(kitters))):
    if cattos[i] != kitters[i]:
        flag += chr(cattos[i])

print(flag)
