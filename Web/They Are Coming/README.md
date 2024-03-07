## They Are Coming

In the robots.txt webpage we find a base64 encoded string which points us to /secret-location and also gives us the decryption key: **th1s_1s_n0t_t5e_f1a9**.

The hints in the description tell us that most probably AES encryption is used and we find the flag encrypted in the local storage which on decryption with the above key gives the flag.

>FLAG: VishwaCTF{g0_Su88m1t_1t_Qu14kl7}