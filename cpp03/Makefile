SRCS = main.cpp Bureaucrat.cpp Form.cpp
SRCS := $(addprefix $(SRC_DIR), $(SRCS))
OBJS =  $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCFLAGS = -I$(INC_DIR)

NAME = form

SRC_DIR = srcs/
OBJ_DIR = objs/
INC_DIR = incs/

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(INCFLAGS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC_DIR)*.hpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCFLAGS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

////////
NAME = ex00

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
INCFLAGS = -I$(INC_DIR)

SRCS = #파일명
SRCS := $(addprefix $(SRC_DIR), $(SRCS))
OBJS =  $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

SRC_DIR = srcs/
OBJ_DIR = objs/
INC_DIR = incs/


GREEN = \033[1;32m
RED = \033[1;31m
GREY = \033[2;37m
MAGENTA = \033[0;35m
RESET = \033[m

all: $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $@ $(INCFLAGS)
		@echo "$(NAME): $(GREEN)object files created$(RESET)"
		@echo "$(NAME): $(GREEN)$(NAME) compiled$(RESET)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC_DIR)*.hpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCFLAGS)

clean:
		@rm -rf $(OBJS)
		@echo "$(NAME): $(RED)$(OBJS) deleted$(RESET)"
		@echo "$(NAME): $(RED)object files deleted$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(NAME): $(RED)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJS)
