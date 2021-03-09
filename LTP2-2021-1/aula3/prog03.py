lista = []
continuar = True
while continuar:
    produto = input("Produto:").upper()
    if produto == "FIM":
        continuar = False
    else:
        lista.append(produto)

while len(lista) > 0:
    print("Lista:")
    for produto in lista:
        print(produto)
    produto = input("Produto:").upper()
    #Verifica se o produto existe na lista
    if produto in lista:
        lista.remove(produto)
