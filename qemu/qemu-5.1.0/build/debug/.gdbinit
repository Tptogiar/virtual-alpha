
define cls
shell clear
end

document cls
Clears the screen with a simple command.
end


set args -m 1G -enable-kvm -drive format=qcow2,file=test.qcow2 -cdrom /myFiles/bigfile/ubuntu-22.04.1-desktop-amd64.iso 
b main
b memory_map_init
start
