PROJECT_NAME=gtk-hello
CC=gcc
CFLAGS="pkg-config --cflags gtk+-3.0"
CLIBS="pkg-config --libs gtk+-3.0"
gtk-hello:
	@echo "### Compiling the program..."
	@$(CC) `"$(CFLAGS)"` -o $(PROJECT_NAME) $(PROJECT_NAME).c `"$(CLIBS)"`
clean:
	@rm ./$(PROJECT_NAME)
run:
	./$(PROJECT_NAME)
