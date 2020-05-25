# calculadora multi funções
# Guilherme Kessler

import math

def soma_termosPG():
    a1 = int(input("Digite o a1: "))
    n = int(input("Digite o numero de termos: "))
    q = int(input("Digite a razão: "))
    sn = (a1 * ( (q ** n) - 1 ) ) / (q - 1)
    print(f"A soma dos termos dessa PG é {sn}")

def termo_geralPG():
    a1 = int(input("digite o a1: "))
    n = int(input("digite o numero de termos: "))
    r = float(input("digite a razao: "))
    an = a1 *(r ** (n-1))
    print(f"o an é {an}\n")

def soma_termos(): # função para calcular a soma dos termos de uma P.A.
    a1 = int(input("Qual o a1? "))
    an = int(input("Qual o an? "))
    n = int(input("qual o numero de termos? "))
    print(f"a soma dos termos é {((a1+an)*n)/2}\n")
    
def termo_geralPA(): # função para calcular o termo geral de uma P.A.
    a1 = int(input("digite o a1: "))
    n = int(input("digite o numero de termos: "))
    r = int(input("digite a razao: "))
    an = a1+(n-1)*r
    print(f"o an é {an}\n")
    
def bhaskara(): # função para calcular formula de bhaskara
        a = float(input("\nQual o valor de A: ")) # ax²  
        b = float(input("Qual o valor de B: ")) # bx
        c = float(input("Qual o valor de C: ")) # c

        x = (b**2)-(4*a*c) # faz o calculo do delta

        if x < 0:
                print("\nNão posso resolver essa conta") # quando o delta tem raiz negativa
        elif x == 0:
                x1 = -(b)/2*a # quando o delta é zero
                print("\n" + x1)
        else: # bhaskara comum com x' e x"
                x1 = (-(b) + math.sqrt(x))/ 2*a
                x2 = (-(b) - math.sqrt(x))/ 2*a
                print("\nx1 = {}\nx2 = {}".format(x1, x2))

def soma(n1, n2): # função para soma
    result = n1 + n2
    return result

def diferenca(n1, n2): # função para subtração
    result = n1 - n2
    return result

def multiplica(n1, n2): # função para multiplicação
    result  = n1 * n2
    return result

def divisao(n1, n2): # função para divisão
    result = n1 / n2
    return result

def potencia(n1, n2): # função para potenciação
    result = n1 ** n2
    return result

def operacao(): # função para definir a operação
    print("\n=======================")
    print("===== CALCULADORA =====")
    print("=======================\n")
    print("""Digite '1' para somar
Digite '2' para subtrair
Digite '3' para multiplicar
Digite '4' para dividir
Digite '5' para exponenciar
Digite '6' para formula de bhaskara
Digite '7' para termo geral de uma PA
Digite '8' para soma dos termos
Digite '9' para termo geral de uma PG
Digite '10' para soma termos de uma PG""")
    oper = int(input())
    return oper
    
def calcular(opera): # função para calcular dependendo da operação
    if opera == 1:
        n1 = float(input("\nDigite um valor: "))
        n2 = float(input("Digite outro valor: "))
        resultado = soma(n1, n2) # chama a função de soma
        print(f"O resultado é {resultado}")
    elif opera == 2:
        n1 = float(input("\nDigite um valor: "))
        n2 = float(input("Digite outro valor: "))
        resultado = diferenca(n1, n2) # chama a função de subtração
        print(f"O resultado é {resultado}")
    elif opera == 3:
        n1 = float(input("\nDigite um valor: "))
        n2 = float(input("Digite outro valor: "))
        resultado = multiplica(n1, n2) # chama a função de multiplicação
        print(f"O resultado é {resultado}")
    elif opera == 4:
        n1 = float(input("\nDigite um valor: "))
        n2 = float(input("Digite outro valor: "))
        resultado = divisao(n1, n2) # chama a função de divisão
        print(f"O resultado é {resultado}")
    elif opera == 5:
        n1 = float(input("\nDigite a base: "))
        n2 = float(input("Digite o expoente: "))
        resultado = potencia(n1, n2) # chama a função de potenciação
        print(f"O resultado é {resultado}")
    elif opera == 6:
        bhaskara() # chama a função de bhaskara
    elif opera == 7:
        termo_geralPA() # chama a função de termo geral
    elif opera == 8:
        soma_termos() # chama a função de soma dos termos
    elif opera == 9:
        termo_geralPG()
    elif opera == 10:
        soma_termosPG()
    
while True: # inicia a calculadora
    operando = operacao()
    calcular(operando)
    print("\n")
    repetir = input("Digite 'sair' para sair ou qualquer tecla para continuar: ")
    if repetir.lower() == "sair": # condicional que decide se fecha a calculadora
        exit()                    # ou repete a execução
