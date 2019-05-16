#!/bin/bash
while IFS="," read username f2
do
echo $username
sudo useradd -m $username
[ $? -eq 0 ] && echo "User added $username"
echo -e "12345\n12345" | sudo passwd $f1
done < users.csv
