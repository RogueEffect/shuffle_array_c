CC = gcc
FLAGS = -g -Wall -std=c99
FILES = main.c
EXE = shuffle

all:
	$(CC) $(FLAGS) $(FILES) -o $(EXE)
