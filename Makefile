all: clean main1 main2 main3 main4

main1:
	g++ -std=c++0x main1.cpp -o main1
	./main1

main2:
	g++ -std=c++0x main2.cpp -o main2
	./main2
	./main2 argument
	./main2 dwa argumenty

main3:
	g++ -std=c++0x main3.cpp -o main3

main4:
	g++ -std=c++0x main4.cpp -o main4

clean:
	rm -f main1 main2 main3 main4

.PHONY: clean
