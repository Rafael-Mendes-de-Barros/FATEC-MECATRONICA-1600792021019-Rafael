from random import randint

numero_secreto = randint(0,100)
tentativas = []
acertou = False

while len(tentativas) < 10 and acertou == False:
    palpite = int(input("Informe um valor:"))
    tentativas.append(palpite)
    if palpite == numero_secreto:
        acertou = True
    elif palpite < numero_secreto:
        print("Chute mais alto!")
    else:
        print("Chute mais baixo!")
    print(f"Tentativas restantes:{10-len(tentativas)}")
if acertou:
    print("Parabens!")
else:
    print("Tente outra vez!")
print(f"Numero Secreto: {numero_secreto}")
print(f"Tentativas: {tentativas}")
