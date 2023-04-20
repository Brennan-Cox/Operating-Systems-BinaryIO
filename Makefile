all: reader.o writer.o
	g++ -o writer writer.o
	g++ -o reader reader.o
writer.o: writer.cpp
	g++ -c writer.cpp
reader.o: reader.cpp
	g++ -c reader.cpp
clean:		
	rm *.o