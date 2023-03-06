# echo ${1}



cd /tptogiar/virtual-alpha/linux/linux-5.15.85 && make clean
cd /tptogiar/virtual-alpha && git add .
cd /tptogiar/virtual-alpha && git commit -m "${1}"

