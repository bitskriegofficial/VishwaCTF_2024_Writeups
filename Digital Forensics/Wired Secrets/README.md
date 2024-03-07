# Wired Secrets

We used the command `tshark -r ./okay10.pcapng -Y 'usb.src=="1.2.1"' -T fields -e usbhid.data | sed 's/../:&/g2' > clicks` to get the mouse click information into a file.

We then found the solve.py script online to plot the mouse movements and found the flag.

>FLAG: VishwaCTF{KUD0S_D3T3CTIVE}
