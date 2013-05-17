CC=gcc
PWD=$(shell pwd)
FLAGS=--std=c99 `pkg-config --cflags --libs gtk+-3.0` -I$(PWD)
SOURCES=screen.c download.c login.c main.c
OUTNAME=-o launcher.run

all:
	$(CC) $(FLAGS) $(OUTNAME) $(SOURCES) 

screen:
	$(CC) $(FLAGS) -o screen screen.c