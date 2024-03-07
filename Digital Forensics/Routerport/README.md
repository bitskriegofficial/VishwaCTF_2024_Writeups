# Router|port|

We looked through the TCP streams in the capture.pcapng file and found data in the 155th stream which on applying ROT20 gave some info. Along the streams was also the SSL session keys which helped in cracking the TLS packets.

We then looked through the HTTP stream and found the flag.

>FLAG: VishwaCTF{K3Y5_CAN_0P3N_10CK5}