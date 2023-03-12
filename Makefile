CC = g++
TARGET = test
OBJ = test.cpp

CCFLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CCFLAGS) $< -o $@

.PHONY: clean
clean:
	del *.o $(TARGET)