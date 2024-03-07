# Smoke out the Rat

We are given a [MySQL Replication log file](DBlog-bin.000007) which we are not able to open.

We then convert the 0xff bytes to 0x20 and we are able to view the file using mysqlbinlog cli tool.

We find 

just before 
