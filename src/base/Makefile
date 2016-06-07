CFLAGS=-std=c++14  -O3
INC=-I${HOME}/local/anaconda2/include/python2.7/
INC+=-I${HOME}/local/anaconda2/lib/python2.7/site-packages/numpy/core/include/
LIB=-L${HOME}/local/anaconda2/lib/python2.7/
LIB+=-L${HOME}/local/anaconda2/lib/ -lpython2.7 -ldl -framework CoreFoundation -u _PyMac_Error
all:
	swig -c++ -python -o solver_wrap.cpp solver.i
	g++ -fPIC -c solver_wrap.cpp -o solver_wrap.o  $(CFLAGS) $(INC)
	g++ -shared solver_wrap.o -o _solver.so $(CFLAGS) $(LIB) -Wl,-undefined,dynamic_lookup

clean:
	rm -rf *~ *.so *.o *.pyc solver.py solver_wrap.cpp
