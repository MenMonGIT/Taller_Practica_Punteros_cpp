CXX = g++
CXXFLAGS = -Wall -std=c++11

SRCS = main.cpp Tablero.cpp 
OBJS = $(SRCS:.cpp=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

clean:
	rm -f $(OBJS) $(EXEC)
