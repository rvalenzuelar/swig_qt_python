%module example


/* Parse the header file to generate wrappers */
%include "example.h"
%include "typemaps.i"
%include "std_string.i"
using std::string;

%include "cstring.i"
// %cstring_mutable(char *getInputPath)
// %cstring_bounded_output(const char *path, 1024);


// %include "exception.i"
// %include "constraints.i"
// %include "carrays.i"

%{
/* Includes the header in the wrapper code */
#include "example.h"
#include <QDir>		
#define SWIG_FILE_WITH_INIT	
extern char *example::getInputPath();
%}
 

extern char *getInputPath();
