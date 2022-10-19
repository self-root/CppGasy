
all: def

def: utest.o laharan_teny.o  catch_amalgamated.o
	g++ utest.o laharan_teny.o catch_amalgamated.o -o def

main.o: utest.cpp laharan_teny.hpp catch_amalgamated.hpp
	g++ -c utest.cpp

laharan_teny.o: laharan_teny.cpp laharan_teny.hpp
	g++ -c laharan_teny.cpp

catch_amalgamated.o: catch_amalgamated.cpp
	g++ -c catch_amalgamated.cpp

clean:
	rm -f *.o def