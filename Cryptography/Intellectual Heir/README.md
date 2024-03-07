# Intellectual Heir

The source code seems like a RSA implementation, so just obtain the prime numbers in binary format by taking the inverse sines & cosines from `file1.txt` & `file2.txt`.

Then convert them to decimal format and use the RSA algorithm to decrypt the message.

There is one more function called `str_to_ass()`, which concatenates 2-byte ASCII bytes into the plain text, reversing it gives us the flag

[Solve script](./solve.py)

> FLAG: VishwaCTF{Y0U_@R3_T#3_W0RT#Y_OF_3}
