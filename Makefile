.PHONY: debug release clean

BINARY_NAME=monoff.exe

debug: monoff.c
	gcc -o $(BINARY_NAME) -Og $^
	
release: monoff.c
	gcc -std=c11 -Wall -Wextra -s \
		-nostdlib -ffreestanding -mwindows -Os \
		-fno-stack-check -fno-stack-protector -mno-stack-arg-probe \
		-o $(BINARY_NAME) $^ \
		-lkernel32 -luser32

clean:
	rm *.exe
