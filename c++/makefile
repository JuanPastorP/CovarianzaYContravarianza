all: main.o objetoA.o objetoB.o objetoC.o Y.o 
	g++ main.o objetoA.o objetoB.o objetoC.o Y.o X.o  -o prueba 
objetoA.o: objetoA.cc objetoA.h 
	g++ -c objetoA.cc
objetoB.o: objetoB.cc objetoB.h 
	g++ -c objetoB.cc
objetoC.o: objetoC.cc objetoC.h 
	g++ -c objetoC.cc
Y.o: Y.cc Y.h 
	g++ -c Y.cc
X.o: X.cc X.h 
	g++ -c X.cc
main.o: main.cc
	g++ -c main.cc