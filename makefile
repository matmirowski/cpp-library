CXX = g++
CXXFLAGS = -g -Wall -pedantic

TARGET1 = map
TARGET2 = lib

SRC1 = TestMap.cpp
SRC2 = TestLibrary.cpp

HEADERS1 = Employee.h Map.h
HEADERS2 = Library.h Map.h

all: $(TARGET1) $(TARGET2)

$(TARGET1): $(SRC1) $(HEADERS1)
	$(CXX) $(CXXFLAGS) $(SRC1) -o $(TARGET1)

$(TARGET2): $(SRC2) $(HEADERS2)
	$(CXX) $(CXXFLAGS) $(SRC2) -o $(TARGET2)

clean:
	rm -f $(TARGET1) $(TARGET2)
