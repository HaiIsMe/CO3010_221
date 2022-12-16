import json
import socket


class Peer:
    name = ''
    chosenName = ''
    chosenPort = ''
    friendName = ''
    portFriend = 0
    allThread = []
    connections = []
    command = ''
    listFriend = ""

    # socket server peer
    def __init__(self):
        self.peer_from_server = ""
        self.port_from_server = ""
        self.sock_server = None
        self.name = ''

        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.bind((socket.gethostname(), 0))
        self.sock.listen()
        self.c_port = self.sock.getsockname()[1]

        print('Open socket: {}'.format(str(self.c_port)))

        self.sock_server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock_server.connect((socket.gethostname(), 8000))

    def listen(self):
        while True:
            try:
                conn, addr = self.sock.accept()
            except:
                continue

            # message = conn.recv(1024).decode('utf-8')
            # if message:
            #     print('new receive!')

    def handle_server(self):
        self.sock_server.send(str('!list').encode('utf-8'))
        self.peer_from_server = self.sock_server.recv(1024).decode('utf-8')

        self.sock_server.send(str('!port').encode('utf-8'))
        self.port_from_server = self.sock_server.recv(1024).decode('utf-8')

    def register_peer(self):
        self.name = input('Enter your name: ')

        self.sock_server.send(str(self.name).encode('utf-8'))
