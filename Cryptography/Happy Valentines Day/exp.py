from PIL import Image
from itertools import cycle


def xor(a, b):
    return [i^j for i, j in zip(a, cycle(b))]


f = open("../../../a.png", "rb").read()
key = [f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7]]


g = open("enc.txt","rb").read()


enc = bytearray(xor(g,key))
open("result.png","wb").write(enc)
