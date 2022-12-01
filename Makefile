PROJECT = Exec
CC = g++
PREF_SRC = ./src/
PREF_OBJ = ./obj/
PREF_BIN = ./bin/
SOURCE = $(wildcard $(PREF_SRC)*.cpp)
OBJECTS = $(patsubst $(PREF_SRC)%.cpp, $(PREF_OBJ)%.o, $(SOURCE))

$(PROJECT) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(PREF_BIN)$(PROJECT)

$(PREF_OBJ)%.o : $(PREF_SRC)%.cpp 
	$(CC) -c $< -o $@

clean :
	rm $(PREF_OBJ)*.o $(PREF_BIN)$(PROJECT)