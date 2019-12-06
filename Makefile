CFLAGS=-g -Wall
CXXFLAGS=-g -Wall

LDLIBS=-lX11 -lm

LINK.o = $(CXX) $(LDFLAGS) $(TARGET_ARCH)

markhovChain: markhovChain.o 

