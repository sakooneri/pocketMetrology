CC = g++

GFLAGS = -c -Wall


all: metrology

metrology: main.o Sensivity.o Reletive_Error.o Reduced_Error.o Absolute_Error.o
	$(CC) main.o Sensivity.o Reletive_Error.o Reduced_Error.o Absolute_Error.o

main.o: main.cpp
	$(СС) $(GFLAGS) main.cpp

Sensivity.o: Sensivity.cpp
	$(CC) $(GFLAGS) Sensivity.cpp

Reletive_Error.o: Reletive_Error.cpp
	$(CC) $(GFLAGS) Reletive_Error.cpp

Reduced_Error.o: Reduced_Error.cpp
	$(CC) $(GFLAGS) Reduced_Error.cpp

Absolute_Error.o: Absolute_Error.cpp
	$(CC) $(GFLAGS) Absolute_Error.cpp

clean:
	rm -rf *.o metrology