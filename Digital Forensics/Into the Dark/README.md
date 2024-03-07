## Into the Dark

In the hierloom.txt file we had a bunch of hex values which we figured out to be offset values and by visiting the specified offsets we get the string **torlogowikisaveaspng**. With the final hex value being **2011** so we get the [Tor 2011 logo](Tor-logo-2011-flat.svg.png) and save it as png.

The Base64 encoded string in hierloom.txt gave us a vignere cipher with the Key **TOR** which then revealed a function to be performed on the World.png file

After this we tried for quite a while with no avail to get the flag. Then we went to the tickets and gave our exact steps. There was a problem in how OpenCV was adding the images together due to which we were not able to get the flag. After some time we then got the flag.

>FLAG: VishwaCTF{YCGU_34AY3D_70TH3_W05RlD}



