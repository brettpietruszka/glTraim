CC = gcc
CXX = g++

INCLUDES = -I$(all_inc) #-I$(glfw_inc) -I$(glad_inc)
LIBRARIES = -L$(glfw_lib)

OBJDIR = ./objects

all_inc = ./includes

cpp_files = main.cpp ./src/Circle.cpp ./src/CircleObjectHolder.cpp ./src/globals.cpp ./src/Shader.cpp
objects = $(cpp_files:.cpp=.o) glad.o

ifeq ($(OS),Windows_NT)
# Meant to be compiled on mysys and ran via ./main.exe on msys terminal

glfw_lib = /mingw64/lib #./libs #$(glfw)/lib64

CFLAGS = -Wall -ggdb -O3 $(INCLUDES)
TARGET = .\main.exe
CXXFLAGS = -Wall -ggdb -O3 $(INCLUDES)
LDFLAGS = $(LIBRARIES) ./libs/libglfw3dll.a -lopengl32  -luser32 -lkernel32 -lglu32 -lgdi32 # -lmingw32

headers =

all: $(TARGET)

$(TARGET): $(objects) 
	$(CXX) $(LIBRARIES) -o $@ $^ $(LDFLAGS)

.PHONY : clean
clean :
	-rm $(TARGET) $(objects)
###############################################################################
else

glfw_lib = ./libs/ #$(glfw)/lib64

CFLAGS = -Wall -ggdb -O3 $(INCLUDES)
TARGET = main.out
CXXFLAGS = -std=c++17 -Wall -ggdb -O3 -framework OpenGL -framework GLUT $(INCLUDES)
LDFLAGS = $(LIBRARIES) -lglfw  #-lopengl32 -lglu32 -lgdi32

headers =

all: $(TARGET)

$(TARGET): $(objects) 
	$(CXX) $(LIBRARIES) -o $@ $^ $(LDFLAGS)

# glad.o: ./glad.c
# 	$(CC) $(CFLAGS) $(INCLUDES) -c -o glad.o ./glad.c

.PHONY : clean
clean :
	-rm $(TARGET) $(objects)
endif



# CC = gcc
# CXX = g++

# COMPILE_FLAGS = -Wall -ggdb -O3
# LINK_FLAGS = -lglfw3 -lopengl32 -lglu32 -lgdi32

# glfw = d:/external/glfw-3.1
# glfw_inc = $(glfw)/include
# glfw_lib = $(glfw)/lib64

# glad = d:/external/glad-c
# glad_inc = $(glad)/include

# INCLUDES = -I$(glfw_inc) -I$(glad_inc)
# LIBRARIES = -L$(glfw_lib)

# cpp_files = main.cpp
# objects = $(cpp_files:.cpp=.o)
# headers =

# all: main.exe

# main.exe: $(objects) glad.o
#         $(CXX) $(LIBRARIES) -o main.exe $(objects) glad.o $(LINK_FLAGS)

# $(objects): %.o: %.cpp $(headers) makefile
#         $(CXX) $(COMPILE_FLAGS) $(INCLUDES) -c -o $@ $<

# glad.o: glad.c
#         $(CC) $(COMPILE_FLAGS) $(INCLUDES) -c -o glad.o glad.c