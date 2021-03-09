#Criar uma lista vazia para guardar os nomes dos motoristas
motoristas = []
continuar = True
while continuar:
    nome = input("Informe seu nome:")

    if nome == "FIM":
        continuar = False
    else:
        #Coloca o nome na lista
        motoristas.append(nome)
        print(motoristas)

import random
#Escolhe de forma aleatória um motorista
motorista_da_rodada = random.choice(motoristas)
print(f"O motorista da rodada é {motorista_da_rodada}")
