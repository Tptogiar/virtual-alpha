
cp:
	cp ../linux-5.15.85/vmlinux ./vmlinux && \
	cp ../linux-5.15.85/arch/x86/boot/bzImage ./bzImage

r:
	qemu-system-x86_64 -kernel ./bzImage \
		-initrd ./initrd-busybox.img \
		-append "console=ttyS0 nokaslr" \
		-nographic


d:
	qemu-system-x86_64 -kernel ./bzImage \
		-initrd initrd-busybox.img \
		-append "console=ttyS0 nokaslr" \
		-nographic -S -s

gdb:
	gdb ./vmlinux
