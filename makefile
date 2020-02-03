clean:
	rm -f *.out *.o
complex:
	g++ -c complex.cpp -o complex.o

main:
	g++ -c main.cpp -o main.o
	g++ main.o complex.o -o main.out

driver:
	g++ -c driver.cpp -o driver.o
	g++ driver.o complex.o -o driver.out

run-main: clean complex main
	./main.out

run-driver: clean complex driver
	./driver.out