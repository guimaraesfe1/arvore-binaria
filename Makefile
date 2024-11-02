CC = gcc
LIB_PATH = ./src/lib
INCLUDE_PATH = ./src/include

main: ./src/main.c createNode.o
	$(CC) -g -o main ./src/main.c $(LIB_PATH)/createNode.o -I$(INCLUDE_PATH)

createNode.o: $(LIB_PATH)/createNode.c
	$(CC) -g -o $(LIB_PATH)/createNode.o -c $(LIB_PATH)/createNode.c -I$(INCLUDE_PATH)

clean:
	rm -f ./src/lib/*.o main.exe