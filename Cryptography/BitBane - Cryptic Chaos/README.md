# BitBane

This was pretty straightforward brute force challenge. I started with an empty string, iterated through all printable characters & appended the current character to the string.

If on applying all the operations on the string, the result is equal to the one given in the text file for the corresponding index, I do not pop the character from the string, print the current character & continue with the next iteration.

At the end, we get the flag in the output.

[Solve Script](./Encrypt.cpp)

>FLAG: VishwaCTF{BIT5_3NCRYPT3D_D3CRYPTED_M1ND5_D33PLY_TE5T3D}
