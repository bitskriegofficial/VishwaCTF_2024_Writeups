## Save the City

We get **SSH-2.0-libssh_0.8.1** on connecting to the deployed server and on searching it on the web we find [CVE-2018-10993](https://gist.github.com/mgeeky/a7271536b1d815acfb8060fd8b65bd5d) which is the scritp in exploit.py.

We used the command `python3 exploit.py 13.234.11.113 -p 31192 -s` to exploit the vulnerability and get a shell and then `cat location.txt` to get the flag.

>FLAG: VishwaCTF{elrow-club-pune}