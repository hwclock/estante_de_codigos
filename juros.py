valores = []

valor_inicial = float(input("Qual o valor inicial? \n"))
porcentagem = float(input("Qual a porcentagem de juros? \n"))
meses = int(input("Quantos meses acumulou o juros? \n"))

valores.append(valor_inicial)

for i in range(0, meses):
	valor_juros = valores[-1] * porcentagem / 100
	valores.append(valores[-1] + valor_juros)

print(valores)
