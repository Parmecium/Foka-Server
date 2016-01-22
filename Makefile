CXX = g++
CXXFLAGS = -O2 -Wall

SRC =  \
	main.cpp

OBJS = $(SRC:.cpp=.o)

LIBS =

debug: CXXFLAGS += -g
debug: linux

all: linux
	echo All done

clean:
	rm -f $(OBJS) foka-server
	echo Clean done

linux: $(OBJS)
	$(CXX) $(CXXFLAGS) -o foka-server $^ $(LIBS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<
