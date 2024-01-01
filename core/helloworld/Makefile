CC=gcc
OBJ=main.o

run: main
	./main

main: $(OBJ)
	$(CC) $(OBJ) -o main

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm main $(OBJ)
