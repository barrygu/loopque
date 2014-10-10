
CC=g++
CPPFLAGS=-g -Wall

SRCS=tst-loopque.cpp
TARGET=tst_lq

all: $(TARGET)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

tst-loopque.o: xtl/LoopQue.h

$(TARGET): $(SRCS:.cpp=.o)
	g++ -o $@ $<

clean:
	rm -f $(TARGET) *.o