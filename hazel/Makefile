PLATFORM =HZ_PLATFORM_LINUX
#MODE =HZ_BUILD_SO

CPPC =g++
SO_CFLAGS =-shared -fPIC -D$(PLATFORM)
BIN =bin

all: libHazel.so

libHazel.so: src/Hazel/Application.cpp src/Hazel/Application.h
	$(CPPC) $(SO_CFLAGS) src/Hazel/Application.cpp -o $(BIN)/libHazel.so 
