from threading import Thread

from peer import Peer

p = Peer()

lis = Thread(target=p.listen)
lis.start()

p.register_peer()


