#Idades é um lista de Python
idades = []

#Cria uma lista com as idades de interesse
idades = [32, 31, 19, 20, 19, 24, 38, 38]
#Adiciona uma nova idade
idades.append(32)
print(idades)

#Encontra a maior idade
print(f"Maior idade: {max(idades)}")
print(f"Menor idade: {min(idades)}")
print(f"Idade média: {sum(idades)/len(idades)}")
