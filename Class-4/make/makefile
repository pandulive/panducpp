# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++17

# Target executable name
TARGET = main

# Source file
SRC = main.cpp

# Compile the program
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean the compiled files
clean:
	rm -f $(TARGET)
