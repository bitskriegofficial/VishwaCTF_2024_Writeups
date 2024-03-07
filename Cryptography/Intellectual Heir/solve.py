with open('file1.txt', 'r') as f:
    p = f.readlines()

with open('file2.txt', 'r') as f:
    q = f.readlines()

with open('file.txt', 'r') as f:
    ct = int(f.read())

p = [('0' if i == '1.000000000000000000e+00\n' else '1') for i in p]
p = int(''.join(x for x in p), 2)

q = [('0' if i == '0.000000000000000000e+00\n' else '1') for i in q]
q = int(''.join(x for x in q), 2)

n = p*q

phi = (p-1)*(q-1)
e = 65537
d = pow(e, -1, phi)
pt = pow(ct, d, n)
pt = str(pt)

flag = ''
for i in range(0, len(str(pt)), 2):
    flag += chr(int(pt[i:i+2]))

print(flag)