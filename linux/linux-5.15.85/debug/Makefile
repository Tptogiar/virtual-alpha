
c:
	cd ../ && clear && time make -j 64 
m:
	cd ../ && clear && time make -j 64 modules_install
i:
	cd ../ && clear && time make -j 64 install
rq:
	qemu-system-x86_64 -m 2G -enable-kvm -drive format=qcow2,file=test.qcow2 -cdrom /tptogiar/bigfile/ubuntu-22.04.1-desktop-amd64.iso


gdb:cp
	gdb ./vmlinux

cmi: c m i


cp:
	cp ../vmlinux ./vmlinux && \
	cp ../arch/x86/boot/bzImage ./bzImage

rk:
	qemu-system-x86_64 -kernel ./bzImage \
		-initrd ./initrd-busybox.img \
		-append "console=ttyS0 nokaslr" \
		-nographic


dk:
	qemu-system-x86_64 -kernel ./bzImage \
		-initrd initrd-busybox.img \
		-append "console=ttyS0 nokaslr" \
		-nographic -S -s

