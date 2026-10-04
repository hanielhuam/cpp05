CPP = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRC_DIR = src
OBJ_DIR = obj
INCLUDE = -Iinclude

SRCS = ${SRC_DIR}/main.cpp ${SRC_DIR}/Bureaucrat.cpp ${SRC_DIR}/AForm.cpp \
	${SRC_DIR}/ShrubberyCreationForm.cpp ${SRC_DIR}/RobotomyRequestForm.cpp \
	${SRC_DIR}/PresidentialPardonForm.cpp

OBJS = $(SRCS:${SRC_DIR}/%.cpp=${OBJ_DIR}/%.o)

NAME = MultForms

all: ${NAME}

$(NAME): ${OBJS}
	$(CPP) ${CFLAGS} ${OBJS} -o ${NAME}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp
	mkdir -p $(dir $@)
	$(CPP) $(CFLAGS) ${INCLUDE} -c $< -o $@

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all