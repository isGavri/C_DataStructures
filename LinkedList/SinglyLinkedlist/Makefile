.PHONY = all run clean

all: main.c
	@clang -Wall --debug main.c -o main

run: all main
	@./main

clean: main
	@rm main
	@echo "Binaries removed"
