#Name of executable file
PROJECT_NAME = cargame

# Output Directory
BUILD = build

$(BUILD):
	mkdir build

# All source files
 
SRC = src/collision.cpp\
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
src/updateScore.cpp\
cargame.cpp\



# To Check OS is Windows or Linux

ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif



#Including all source files

INC = -Iinc\

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

all: $(BUILD)
	g++ $(SRC) $(INC) -o $(PROJECT_OUTPUT)

#run command to run the executable file
run:all
	./$(PROJECT_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf *.o *.out *.gcd* *.gcno* *.gcov* $(BUILD)