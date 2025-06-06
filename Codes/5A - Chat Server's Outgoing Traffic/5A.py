import sys


if __name__=="__main__":
    users = set()
    l = 0
    for message in sys.stdin:
        message = message.rstrip('\n')
        if len(message) ==0:
                break
        if message[0] == '+':
            users.add(message[1:])
        elif message[0]=='-':
            users.remove(message[1:])
        else:
            l+=len(message[message.index(':')+1:])*len(users)

    print(l)
