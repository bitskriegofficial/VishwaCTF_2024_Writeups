## Professor's Inheritance

The next number in the series was 29177

We used DeepSound on the [audio file](TunePocket-Rock-Guitar-Power-Intro-Preview.wav) with the password 29177.

We then get 

![maths](maths_embed.png)

We figured out that the file had secret data encoded using StegoSuite

The letters of the word "VISHWA" are permuted in all possible ways and the words thus formed are arranged as in a dictionary. The rank of the word "VISHWA" is
Answer in the following format:
VISHWA-ANS

Example: Answer of above question is 127 then password for next file is: 
VISHWA-127

We figured out the answer to be VISHWA-545 which was the decryption key.

Then by using the command `mcrypt -d encryptedcode.txt.nc -k VISHWA-545`. We got the flag

>FLAG: VishwaCTF{a4th0r_sa4ya}