ifconfig -a | grep Ethernet | awk -F' ' '{print $2}'
