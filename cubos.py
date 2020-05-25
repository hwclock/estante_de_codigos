num = int(input("quantos cubos perfeitos quer que apareça? => "))
num = num + 1
cubos = [cubo**3 for cubo in range(1, num)]
print(cubos)
