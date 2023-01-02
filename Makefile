CC = gcc
CXX = g++

INCLUDES = -I$(all_inc) #-I$(glfw_inc) -I$(glad_inc)
LIBRARIES = -L$(glfw_lib) 


all_inc = ./includes
#glfw = .
glfw_inc = ./includes/GLFW #$(glfw)/include
glfw_lib = ./libs/ #$(glfw)/lib64

glad = ./includes/glad
glad_inc = $(glad)/include

CFLAGS = -Wall -ggdb -O3 $(INCLUDES)
CXXFLAGS = -Wall -ggdb -O3 -framework OpenGL -framework GLUT $(INCLUDES)
LDFLAGS = $(LIBRARIES) -lglfw  #-lopengl32 -lglu32 -lgdi32

TARGET = glTraim.out #main.exe
cpp_files = ./glTraim/main.cpp ./glTraim/src/Shader.cpp
objects = $(cpp_files:.cpp=.o) glad.o
headers =

all: $(TARGET)

$(TARGET): $(objects) 
	$(CXX) $(LIBRARIES) -o $@ $^ $(LDFLAGS)

glad.o: ./glTraim/glad.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o glad.o ./glTraim/glad.c

.PHONY : clean
clean :
	-rm $(TARGET) $(objects)


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