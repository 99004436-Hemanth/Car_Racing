PROJECT_NAME = cargame

# Output directory
BUILD = build

# All source code files
SRC = src/cargame.cpp\
src/collision.cpp\
src/drawBorder.cpp\
src/drawCar.cpp\
src/drawEnemy.cpp\
src/eraseCar.cpp\
src/eraseEnemy.cpp\
src/gameover.cpp\
src/genEnemy.cpp\
src/gotoxy.cpp\
src/instructions.cpp\
src/play.cpp\
src/resetEnemy.cpp\
src/setcursor.cpp\
src/updateScore.cpp


# All include folders with header files
INC	= -Iinc\
inc/macros.h

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out


# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out


# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
