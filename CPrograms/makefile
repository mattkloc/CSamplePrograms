# Makefile to compile all programs within the current directory

CC= gcc
CFLAGS= -Wall -ansi -std=c89
LDFLAGS= -lm

all: xtable identify blanks squeeze longline revline strip convert

xtable: xtable.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

identify: identify.c
	$(CC) $(CFLAGS) $^ -o $@

blanks: blanks.c
	$(CC) $(CFLAGS) $^ -o $@

longline: longline.c
	$(CC) $(CFLAGS) $^ -o $@

squeeze: squeeze.c
	$(CC) $(CFLAGS) $^ -o $@

strip: strip.c
	$(CC) $(CFLAGS) $^ -o $@

revline: revline.c
	$(CC) $(CFLAGS) $^ -o $@

convert: convert.c
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	rm identify blanks longline squeeze strip xtable revline convert

test:
	./identify <test.txt 
	./blanks <test.txt
	./longline <test.txt
	./squeeze <test.txt
	./strip <longline.c
	./xtable
	./revline <test.txt
	./convert <itob.txt

ass1.tar.gz: ass1.tar
	gzip ass1.tar

ass1.tar: *.c makefile
	tar -cf ass1.tar *.c makefile
