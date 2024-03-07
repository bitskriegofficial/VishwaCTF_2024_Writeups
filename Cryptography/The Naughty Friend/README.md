# The Naughty Friend

Apply ROT47, reverse the string, take the first and the last charaacter of each word in the quotes & that becomes the key for the **Blowfish** encryption

There was no IV being used, so it becomes easy to decrypt the given ciphertext

There were couple of more steps, which first involved xoring the ciphertext we obtain from [`solve.java`](./solve.java) & then decoding it using base64 to obtain the final flag

[Solve script](./solve.py)

> FLAG: VishwaCTF{Pr0f1l3_1dent1fi3d_v0uch3r5_cr3d1t3d_5ucc355fully}
