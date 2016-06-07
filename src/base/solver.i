%module solver
%{
#define SWIG_FILE_WITH_INIT
#include "solver.h"
%}

%include "numpy.i"
%init %{
import_array();
%}

%include "solver.h"
