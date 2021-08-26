output: main.o Node.o List.o
	g++ main.o Node.o List.o -o build

main.o: main.cpp
	g++ -c main.cpp

Node.o: src/Node.cpp include/Node.hpp
	g++ -c src/Node.cpp

List.o: src/List.cpp include/List.hpp
	g++ -c src/List.cpp

clear:
	rm *.o build