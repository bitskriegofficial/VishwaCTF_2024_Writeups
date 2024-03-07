import numpy as np

# prime1
cos = np.loadtxt('file1.txt')
cos = np.arccos(cos).tolist()
cos = [int(round(val, 1)) for val in cos]
p = int(''.join(str(x) for x in cos), 2)

# prime2
sin = np.loadtxt('file2.txt')
sin = np.arcsin(sin).tolist()
sin = [int(round(val, 1)) for val in sin]
q = int(''.join(str(x) for x in sin), 2)

n = p * q
ct = 4400037514278889258479265625258024039636437755883377709505596356049534358755375772484057042989024750972247184288820831886430459963472328358741858934783775986591400972020736548834642094922678189447202173710409868474198821576627330424767999152339702779346380

phi = (p - 1) * (q - 1)
e = 65537
d = pow(e, -1, phi)
pt = pow(ct, d, n)
pt = str(pt)

# reversing str_to_ass() function
for i in range(0, len(str(pt)), 2):
    print(chr(int(pt[i : i + 2])), end='')
