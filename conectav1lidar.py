import socket

# Configurações de conexão
IP_LIDAR = "192.168.1.64"
PORTA_LIDAR = 2111

# Montando pacote de dados SBP
pacote_sbp = b'\x02sMN SetAccessMode 03 F4724744\x03'

# Criando socket TCP/IP e conectando ao Lidar
lidar_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
lidar_socket.connect((IP_LIDAR, PORTA_LIDAR))

# Enviando pacote de dados SBP
lidar_socket.sendall(pacote_sbp)
lidar_socket.send(b'sEN LMDscandata 1\x0a')

# Recebendo resposta do Lidar
resposta = lidar_socket.recv(1024)

# Verificando se a conexão foi estabelecida com sucesso
if resposta == b'\x02sAN SetAccessMode 1\x03':
    print("Conexão estabelecida com sucesso!")
else:
    print("Erro ao estabelecer conexão.")

# Enviando comando para começar a medição
lidar_socket.sendall(b'sMN LMCstartmeas\x0a')

# Loop para receber dados contínuos do Lidar
while True:
    # Recebendo dados do Lidar
    dados = lidar_socket.recv(65536)
    
    # Imprimindo dados recebidos
    print(dados)

# Fechando a conexão com o Lidar
lidar_socket.close()
