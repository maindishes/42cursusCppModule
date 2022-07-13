NAME = ex00

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
INCXXFLAGS = -I$(INC_DIR)

SRCS = main.cpp Span.cpp
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
		@$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(INCXXFLAGS)
		@echo "$(NAME): $(GREEN)object files created$(RESET)"
		@echo "$(NAME): $(GREEN)$(NAME) compiled$(RESET)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC_DIR)*.hpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCXXFLAGS)

clean:
		@rm -rf $(OBJ_DIR)
		@rm -rf *_surubbery
		@echo "$(NAME): $(RED)$(OBJS) deleted$(RESET)"
		@echo "$(NAME): $(RED)object files deleted$(RESET)"

fclean: clean
		@rm -rf $(NAME)
		@echo "$(NAME): $(RED)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJS)
