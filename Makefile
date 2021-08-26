output: main.o Node.o List.o Queue.o
	g++ main.o Node.o List.o Queue.o -o build

main.o: main.cpp
	g++ -c main.cpp

Node.o: src/Node.cpp include/Node.hpp
	g++ -c src/Node.cpp

List.o: src/List.cpp include/List.hpp
	g++ -c src/List.cpp

Queue.o: src/Queue.cpp include/Queue.hpp
	g++ -c src/Queue.cpp

clear:
	rm *.o build