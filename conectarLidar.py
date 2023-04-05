import socket

# Definir o endereço IP e porta do Lidar
ip_address = "192.168.1.64"
port = 2111

# Cria o objeto socket
lidar_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Conecta ao Lidar
try:
    lidar_socket.connect((ip_address, port))
    print("Conectado ao Lidar!")
except socket.error as e:
    print(f"Ocorreu um erro ao conectar ao Lidar: {e}")
    lidar_socket.close()
    exit()

# Envie um comando para o Lidar e aguarde uma resposta
lidar_socket.send(b"sRN DataStream 1\n")
response = lidar_socket.recv(1024)
print(response)

# Fecha o socket
lidar_socket.close()
