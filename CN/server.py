import socket
from threading import Thread


class Server:
    def __init__(self):
        self.sock = socket.socket()
        self.sock.bind((socket.gethostname(), 8000))
        self.sock.listen()
        self.listPeer = "server"
        self.listPort = "8000"

    # def search_data(self, data):
    #     if data in self.peer_lists:
    #         return self.peer_lists[data]
    #     return None

    # def register_data(self, addr, data):
    #     addr += data
    #     if data[1] not in self.peer_lists:
    #         self.peer_lists[data[1]] = [addr]
    #     else:  # colisao de hash
    #         self.peer_lists[data[1]].append(addr)
    #     print(self.peer_lists)

    def conn_handler(self, conn):
        while True:
            try:
                message = conn.recv(1024).decode('utf-8')
                if message:
                    if message == '!list':
                        conn.send(self.listPeer.encode('utf-8'))
                    if message == '!port':
                        conn.send(self.listPort.encode('utf-8'))


            except:
                continue

    def run(self):
        print('Server is listening...')
        while True:
            conn, addr = self.sock.accept()
            if conn:
                try:
                    name = conn.recv(1024).decode('utf-8')
                    self.listPeer += ',' + str(name)
                    self.listPort += ',' + str(addr[1])

                    print('New peer {}: {}'.format(str(name), str(addr[1])))

                    t = Thread(target=self.conn_handler, args=(conn,))
                    t.start()
                except:
                    continue
