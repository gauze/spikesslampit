AS=/usr/local/bin/as6809

all :
	$(AS) reactor.asm -o reactor.hex 
	hex2bin -e bin reactor.hex

