# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    monitoring.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 15:49:19 by sade-ara          #+#    #+#              #
#    Updated: 2025/05/15 16:06:14 by sade-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

arch=$(uname -a)
physical_cpu=$(lscpu | grep "Socket(s):" | awk '{print $2}')
vcpus=$(nproc)
mem_total=$(free -m | awk '/Mem:/ {print $2}')
mem_used=$(free -m | awk '/Mem:/ {print $3}')
mem_percent=$(free -m | awk '/Mem:/ {printf ("%.2f%"), ($3 / $2) * 100}')
disk_used=$(df -BG --total | grep 'total' | awk '{print $3}' | sed 's/G//')
disk_total=$(df -BG --total | grep 'total' | awk '{print $2}' | sed 's/G//')
disk_percent=$(df -h --total | grep 'total' | awk '{print $5}')
cpu_load=$(top -bn1 | grep '^%Cpu' | xargs | awk '{print $2 + $4}')
last_boot=$(who -b | awk '{print $3 " " $4}')
lvm_use=$(lsblk | grep -q "lvm" && echo "yes" || echo "no")
tcp_conn=$(ss -ta | grep ESTAB | wc -l)
user_log=$(who | wc -l)
ip_addr=$(hostname -I)
mac_addr=$(ip link show | awk '/ether/ {print $2}' | head -n 1)
sudo_cmds=$(journalctl _COMM=sudo | grep COMMAND | wc -l 2>/dev/null || echo "N/A")

echo "#Architecture: $arch
#CPU physical : $physical_cpu
#vCPU : $vcpus
#Memory Usage: ${mem_used}/${mem_total}MB (${mem_percent})
#Disk Usage: ${disk_used}/${disk_total}Gb (${disk_percent})
#CPU load: ${cpu_load}%
#Last boot: $last_boot
#LVM use: $lvm_use
#Connections TCP : $tcp_conn ESTABLISHED
#User log: $user_log
#Network: IP $ip_addr ($mac_addr)"