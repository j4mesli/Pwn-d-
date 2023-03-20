# YOU MUST USE "MinGW32-make" TO COMPILE THIS PROJECT
output: main.o
	g++ main.o -o output
	./output
	del *.o output.exe

main.o: main.cpp
	g++ -c main.cpp

run:
	./output

run-clean:
	./output
	MinGW32-make clean

clean:
	del *.o output.exe