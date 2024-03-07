# Intellectual Heir

The source code seems like a RSA implementation, so just obtain the prime numbers in binary format by taking the inverse sines & cosines from `file1.txt` & `file2.txt`.

Then convert them to decimal format and use the RSA algorithm to decrypt the message.

There is one more function called `str_to_ass()`, which concatenates 2-byte ASCII bytes into the plain text, reversing it gives us the flag

[Solve script](./solve.py)

> FLAG: VishwaCTF{Pr0f1l3_1dent1fi3d_v0uch3r5_cr3d1t3d_5ucc355fully}
