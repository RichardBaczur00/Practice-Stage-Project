CC = g++
TARGET = drawings 
SRC = main.cpp EnglineGlut.cpp GlutData.cpp GlutDrawing.cpp Shape.cpp Point.cpp Line.cpp Triangle.cpp Rectangle.cpp Airplane.cpp
     
CFLAGS =
FLAGS =
LIBS =  -lglut -lGL -lGLU -lpthread


OBJ = $(SRC:%.cpp=%.o)

%.cpp.o: 
	$(CC) -c $(CFLAGS) $<  -o $@ 
$(TARGET): $(OBJ)
	$(CC) $(FLAGS)  -o $(TARGET) $(OBJ) $(LIBS)
clean:
	rm *.o $(TARGET) 
