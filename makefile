CFLAGS=-g -Wall

all: testblock
testblock: aes.o
testkey:aes.o
testshiftrows:aes.o
testmixcolumns:aes.o
