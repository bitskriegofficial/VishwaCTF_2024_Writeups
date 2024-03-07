# The Naughty Friend

Apply ROT47, reverse the string, take the first and the last charaacter of each word in the quotes & that becomes the key for the **Blowfish** encryption

There was no IV being used, so it becomes easy to decrypt the given ciphertext

There were couple of more steps, which first involved xoring the ciphertext we obtain from [`solve.java`](./solve.java) & then decoding it using base64 to obtain the final flag

[Solve script](./solve.py)

> FLAG: VishwaCTF{P@ssw0rD_Re5eTed_$uccesfu11y}
