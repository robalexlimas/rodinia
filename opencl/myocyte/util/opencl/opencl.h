// #ifdef __cplusplus
// extern "C" {
// #endif

//===============================================================================================================================================================================================================200
//	INCLUDE/DEFINE
//===============================================================================================================================================================================================================200

#include <stdio.h> // (in path known to compiler)		needed by printf

#include <CL/cl.h> // (in path specified to compiler)	needed by OpenCL types

//===============================================================================================================================================================================================================200
//	LOAD KERNEL SOURCE CODE FUNCTION HEADER
//===============================================================================================================================================================================================================200

char *load_kernel_source(const char *filename);

//===============================================================================================================================================================================================================200
//	PRINT ERROR FUNCTION HEADER
//===============================================================================================================================================================================================================200

void fatal(const char *s);

//===============================================================================================================================================================================================================200
//	PRINT OPENCL ERROR FUNCTION HEADER
//===============================================================================================================================================================================================================200

void fatal_CL(cl_int error, int line_no);

//===============================================================================================================================================================================================================200
//	END
//===============================================================================================================================================================================================================200

// #ifdef __cplusplus
// }
// #endif
