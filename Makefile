all: main.cpp tree.cpp tree.h
	g++ --std=c++17 main.cpp tree.cpp -o tree

clean:
	rm tree

