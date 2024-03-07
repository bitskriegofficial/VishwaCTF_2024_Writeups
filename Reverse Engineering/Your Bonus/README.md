# Your Bonus

`ransomware.exe` was a C++ binary, we reversed it using IDA & observed 4-5 functions which were responsible for the encryption.

On analyzing, we found the following mapping of characters for the ones given in the text file:
    
```python
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
```
Now, on taking every 2 bytes from the produced output, we get the ASCII values for the next operation, which is the shift operation. As we couldn't find the exact shift amount out of `[0, 1, 2, 3]`, we decided to brute it.

We got 40 gibberish strings, out of which one was - `MW4R35_B3AUTIFUL=?_>[:)]]VISHWACTF[<_4R3_R4N50`, which is kind of in the flag format.

On rearranging the characters & trying out some combinations, we got the flag.

[Solve script](./solve.py)

> FLAG: VISHWACTF[4R3_R4N50MW4R35_B3AUTIFUL]
