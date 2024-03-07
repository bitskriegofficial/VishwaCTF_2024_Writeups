from base64 import b64decode

a = b'mVWAZs_Sj\ni|^\nyzX\x08u\x08vsq~c\nqWulmnali]qsmQb\tmAaUnCvcW\x02'
flag = ''

for i in range(100):
    a = list(a)
    for j in range(len(a)):
        a[j] ^= i
    
    temp = ''.join(map(chr, a))
    if 'Vml' in temp:
        flag = temp
        break

print(b64decode(flag).decode())