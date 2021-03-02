from random import randint

numeros_sorteados = []
while len(numeros_sorteados) < 6:
    numero = randint(1,60)
    if numero not in numeros_sorteados:
        numeros_sorteados.append(numero)

print(numeros_sorteados)
print(numeros_sorteados[0])
print(numeros_sorteados[1])
print(numeros_sorteados[len(numeros_sorteados) - 1])

numeros_jogados = []
continuar = True

while continuar:
    numero = int(input("Informe um valor:"))
    if numero not in numeros_jogados:
        if numero >= 1 and numero <= 60:
            #Adicionar um valor no final da lista
            numeros_jogados.append(numero)
    print(numeros_jogados)
    if len(numeros_jogados) >= 6:
        if len(numeros_jogados) < 15:
            continuar = input("Deseja continuar (s/n)?") == "s"
        else:
            continuar = False

#Conta a quantidade de acertos que a pessoa teve
acertos = 0

#Passar por todos os números, um por vez
for numero in numeros_sorteados:
    if numero in numeros_jogados:
        acertos = acertos + 1
print(f"Total de Acertos: {acertos}")
