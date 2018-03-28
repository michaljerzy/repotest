CXX=g++
CXXFLAGS=-Wall -I.
OBJS=klasa_drzewo.o main.o

pong: klasa_drzewo.o main.o
	$(CXX) $(CXXFLAGS) $(OBJS) -o drzewo_main.exe
	
.PHONY: clean

clean: 
rm -f *.o *~ core *~
