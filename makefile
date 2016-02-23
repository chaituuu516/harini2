all: chaitu2

chaitu2: sort.o sortmethod.o
	gcc sort.o sortmethod.o -o chaitu2.o

sort.o: sort.c
	gcc -c sort.c

sortmethod.o: sortmethod.c
	gcc -c sortmethod.c
