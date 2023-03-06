M=



commit:
	cd linux/linux-5.15.85 && \
	make clean && \
	git add . && \
	git commit -m "${M}"


testargs:
	echo hello && \
	echo ${M}

