
PLATFORM =HZ_PLATFORM_LINUX

CPPC =g++
EXEC =sandbox

all: prep sandbox

# This is only whilst developing the Hazel Game Engine
prep:
	$(MAKE) -C ../hazel

sandbox: SandboxApp.cpp ../hazel/bin/libHazel.so
	$(CPPC) -D$(PLATFORM) -o $(EXEC) -L ../hazel/bin -lHazel SandboxApp.cpp ../hazel/bin/libHazel.so -I ../hazel/src

run:
	./$(EXEC)