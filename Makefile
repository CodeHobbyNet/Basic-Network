all: NetworkApp

Node.o: Node.cpp Node.h
        g++ -g -Wall -c Node.cpp

Link.o: Link.cpp Link.h
        g++ -g -Wall -c Link.cpp

NetworkApp: NetworkApp.cpp Node.o Link.o
        g++ -g -Wall -o NetworkApp NetworkApp.cpp Node.o

Test: Node.o Link.o NetworkTest.cpp NetworkApp.cpp
        g++ -Wall -o Test NetworkTest.cpp NetworkApp.cpp Node.o Link.o -lcppunit

clean:
        rm NetworkApp *.o *~ *.gch