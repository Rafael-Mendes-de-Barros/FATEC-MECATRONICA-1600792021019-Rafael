#Trabalho Final da Disciplina de L.T.P.C. 
#Integrantes: Lucas D'Elia da Silva e Rafael Mendes de Barros
#R.A. correspondentes: 1600792021047 / 1600792021019
#Professor: Murilo Zanini de Carvalho
#Criar um sistema de contas monetizadas com transações 
#Data: 09/11/2020
import random

repeticao = 0
#Email dos usuarios
email1 = 'lucasdelia2014@hotmail.com'
email2 = 'rafaelmendes_barros@hotmail.com'
email3 = 'murilo.zcarvalho@fatec.sp.gov.br'
#Senha dos usuarios
senhaUser1 = 'lucas123'
senhaUser2 = 'qualquer_coisa'
senhaUser3 = 'senha'
#ID dos usuarios
USER1 = senhaUser1
USER2 = senhaUser2
USER3 = senhaUser3
#Saldo dos usuarios
saldoUser1 = 1000.00
saldoUser2 = 250.00
saldoUser3 = 3000.00
#Ordem das respostas dadas pelo professor
feedback = 'Sim'
feedback1 = 'sim'
feedback2 = 'sim'
feedback3 = 'sim'
feedback4 = 'sim'
Sim = True
while feedback == 'Sim':
  while feedback1 == 'sim':
    print('Transação de Rafao de R$250,00 para Geleia')
    print('Logue na conta de Rafao e realize a transação para Geleia')
    print('USER1 = Geleia')
    print('USER2 = Rafao')
    print('USER3 = Murilo')
    usuario = input('Usuario: ')
    senha = input('Senha: ')
    email2 = input('E-mail: ')
    if usuario == 'Rafao' and senha == senhaUser2 and email2 == 'rafaelmendes_barros@hotmail.com':
         print(f'Saldo: R${saldoUser2: .2f}')
         cobrador = input('Cobrador da transação: ')
         if cobrador == 'Geleia':
           valor_transacao = float(input('Insira o valor : '))
           if saldoUser2 >= valor_transacao:
             valordepagamento = (saldoUser2 - valor_transacao)
             saldoUser2 = (saldoUser2 - valor_transacao)
             saldoUser1 = (saldoUser1 + valor_transacao)
             print('Operação concluida!')
             print('Remetente:', usuario)
             print('Destinatário:', cobrador)
             print(f'Valor da transação R${valor_transacao: .2f}')
             print("QR Code:"),print(random.randrange(1000, 9999))
             print('Email: ',email2)
             print(f'Saldo (Geleia): R${saldoUser1: .2f}')
             print(f'Saldo (Rafao): R${saldoUser2: .2f}')
             print(f'Saldo (Murilo): R${saldoUser3: .2f}')
           elif saldoUser2 < valor_transacao:
             print('Saldo insuficiente!')
             saldoUser1 = saldoUser1
             saldoUser2 = saldoUser2
    else:
        print('Dados de entrada incorretos!')
    feedback1 = input('Realizar novamente o processo? ')
  while feedback2 == 'sim':
    print('Transação de Murilo de R$ 250,00 para Geleia')
    print('Logue na conta de Murilo e realize a transação para Geleia')
    print('USER1 = Geleia')
    print('USER2 = Rafao')
    print('USER3 = Murilo')
    usuario = input('Usuário: ')
    senha = input('Senha: ')
    email3 = input('E-mail: ')
    if usuario == 'Murilo' and senha == senhaUser3 and email3 == 'murilo.zcarvalho@fatec.sp.gov.br':
      if senha == senhaUser3:
        print('Saldo: R$', saldoUser3)
        cobrador = input('Cobrador da transação: ')
        if cobrador == 'Geleia':
          valor_transacao = float(input('Insira o valor : '))
          if saldoUser3 >= valor_transacao:
            valordepagamento = (saldoUser3 - valor_transacao)
            saldoUser3 = (saldoUser3 - valor_transacao)
            saldoUser1 = (saldoUser1 + valor_transacao)
            print('Operação concluida!')
            print('Remetente:', usuario)
            print('Destinatário:', cobrador)
            print(f'Valor da transação R${valor_transacao: .2f}')
            print("QR Code:"),print(random.randrange(1000, 9999))
            print('Email: ',email3)
            print(f'Saldo (Geleia): R${saldoUser1: .2f}')
            print(f'Saldo (Rafao): R${saldoUser2: .2f}')
            print(f'Saldo (Murilo): R${saldoUser3: .2f}')
          elif saldoUser3 < valor_transacao:
            print('Saldo insuficiente!')
            saldoUser3 = saldoUser3
            saldoUser1 = saldoUser1
    else:
        print('Dados de entrada incorretos!')
    feedback2 = input('Realizar novamente o processo? ')
  while feedback3 == 'sim':
    print('Transação de Rafao de R$ 250,00 para Geleia')
    print('Logue na conta de Rafao e realize a transação para Geleia')
    print('USER1 = Geleia')
    print('USER2 = Rafao')
    print('USER3 = Murilo')
    usuario = input('Usuário: ')
    senha = input('Senha: ')
    email2 = input('E-mail: ')
    if usuario == 'Rafao' and senha == senhaUser2 and email2 == 'rafaelmendes_barros@hotmail.com':
        print(f'Saldo: R$ {saldoUser2: .2f}')
        cobrador = input('Cobrador da transação: ')
        if cobrador == 'Geleia':
          valor_transacao = float(input('Insira o valor : '))
          if saldoUser2 >= valor_transacao:
            valordepagamento = (saldoUser2 - valor_transacao)
            saldoUser1 = (saldoUser1 + valor_transacao)
            saldoUser2 = (saldoUser2 - valor_transacao)
            print('Operação concluida!')
            print('Remetente:', usuario)
            print('Destinatário:', cobrador)
            print(f'Valor da transação R${valor_transacao: .2f}')
            print("QR Code:"),print(random.randrange(1000, 9999))
            print('Email: ',email2)
            print(f'Saldo (Geleia): R${saldoUser1: .2f}')
            print(f'Saldo (Rafao): R${saldoUser2: .2f}')
            print(f'Saldo (Murilo): R${saldoUser3: .2f}')
          elif saldoUser2 < valor_transacao:
            print('Saldo insuficiente!')
            saldoUser1 = saldoUser1
            saldoUser2 = saldoUser2
            print(saldoUser1)
            print(saldoUser2)
            print(saldoUser3)
    else:
        print('Dados de entrada incorretos!')
    feedback3 = input('Realizar novamente o processo? ')
  while feedback4 == 'sim':
    print('Transação de Murilo de R$ 1000.00 para Rafao')
    print('Logue na conta de Murilo e realize a transação para Rafao')
    print('USER1 = Geleia')
    print('USER2 = Rafao')
    print('USER3 = Murilo')
    usuario = input('Usuário: ')
    senha = input('Senha: ')
    email3 = input('E-mail: ')
    if usuario == 'Murilo' and senha == senhaUser3 and email3 == 'murilo.zcarvalho@fatec.sp.gov.br':
        print('Saldo: R$', saldoUser3)
        cobrador = input('Cobrador da transação: ')
        if cobrador == 'Rafao':
          valor_transacao = float(input('Insira o valor : '))
          if saldoUser3 >= valor_transacao:
            valordepagamento = (saldoUser3 - valor_transacao)
            saldoUser3 = (saldoUser3 - valor_transacao)
            saldoUser2 = (saldoUser2 + valor_transacao)
            print('Operação concluida!')
            print('Remetente:', usuario)
            print('Destinatário:', cobrador)
            print(f'Valor da transação R${valor_transacao: .2f}')
            print("QR Code:"),print(random.randrange(1000, 9999))
            print('Email: ',email3)
            print(f'Saldo (Geleia): R${saldoUser1: .2f}')
            print(f'Saldo (Rafao): R${saldoUser2: .2f}')
            print(f'Saldo (Murilo): R${saldoUser3: .2f}')
          elif saldoUser3 < valor_transacao:
            print('Saldo insuficiente!')
            saldoUser3 = saldoUser3
            saldoUser2 = saldoUser2
    else:
        print('Dados de entrada incorretos!')
    feedback4 = input('Realizar novamente o processo? ')
feedback = ('Realizar novamente o processo? ')
print('Operações finalizadas')
