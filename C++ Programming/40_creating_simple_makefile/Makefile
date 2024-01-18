
math: maths_stuff.o maths_utils.o
	g++ maths_stuff.o maths_utils.o -o math

maths_stuff.o: maths_stuff.cpp
	g++ -c maths_stuff.cpp

maths_utils.o: maths_utils.cpp
	g++ -c maths_utils.cpp

clean:
	rm *.o math


## use "make" to compile and "make clean" to clear object files and executable file
## created after compilation...
