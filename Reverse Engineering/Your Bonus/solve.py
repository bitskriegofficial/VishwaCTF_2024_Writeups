m = {
    '#':5,
    '&':9,
    '(':6,
    '$':2,
    '!':7,
    '@':3,
    '%':8,
    '^':4,
    '*':0,
    ')':1
}

with open('Your_hacked_data0.txt', 'r') as f:
    data = f.readlines()

strings = []

for i in data:  
    i = i.strip()
    temp = b''
    for j in range(0,len(i),2):
        temp += chr(m[i[j]]*10+m[i[j+1]]).encode()
        
    strings.append(temp)

cnt = 0
for i in range(10):
    for j in range(0,4):
        for k in strings[i]:
            print(chr(k+j),end='')
        cnt += 1
        print()