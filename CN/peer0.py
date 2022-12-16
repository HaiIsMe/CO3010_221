import json
from threading import Thread

from peer import Peer

p = Peer()

lis = Thread(target=p.listen)
lis.start()

p.register_peer()

while True:
    ch = int(input('0: close\n1: show Peers\n'))
    if ch == 0:
        print('break\n')
        continue
    elif ch == 1:
        p.handle_server()
        print(p.listFriend)
        # l = p.peer_from_server
        # l = json.loads(l)
        # for x in l:
        #     print(x   + ':' + l.get(x))
