## Mysterios Old Case

We are given an audio file [final.mp3](final.mp3) which was reversed. 

Using Audacity, we reverse the audio and find an audio message of someone named “Dan Cooper”. 

Exif data of the final.mp3 reveals a [drive link](https://drive.google.com/file/d/1bkuZRLKOGWB7tLNBseWL34BoyI379QbF/view) and the password to the [zip file](flight_logs.zip) is hinted in the audio message. 

The password is found to be **northwestorientairlines**. 

Using the hint we come across file **Flight-305.log** which reveals the flag bytes being stored in it the fibonacci sequence starting from 2.

We used `cat Flight-305.log | grep -v 1971` to get the flag.

>FLAG: VishwaCTF{1_W!LL_3E_B@CK}
