numeros_jogados = []
continuar = True

while continuar:
    numero = int(input("Informe um valor:"))
    if numero not in numeros_jogados:
        #Adicionar um valor no final da lista
        numeros_jogados.append(numero)
    print(numeros_jogados)
    if len(numeros_jogados) >= 6:
        if len(numeros_jogados) < 15:
            continuar = input("Deseja continuar (s/n)?") == "s"
        else:
            continuar = False
