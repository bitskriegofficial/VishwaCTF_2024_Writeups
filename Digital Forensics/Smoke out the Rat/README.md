# Smoke out the Rat

We are given a [MySQL Replication log file](./DBlog-bin.000007) which we are not able to open. So we converted the 0xFF bytes to 0x20 and were able to view the file using `mysqlbinlog` cli tool.

We then get the name of the insider by looking up the phone number in the `maintainers` table.

The outsider was one of the guys who was added to the `employees` table by this insider, just before the database was dropped.

We get the timestamp for this event using the log file.

> FLAG: VishwaCTF{Matthew_Darwin_15:31:29}