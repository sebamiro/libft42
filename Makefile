# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smiro <smiro@student.42barcelona>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:23:29 by smiro             #+#    #+#              #
#    Updated: 2023/03/30 21:43:05 by smiro            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
################################################################################

MAKE		= make --no-print-directory

NAME		= libft.a
INC			= ./inc/
INC_HEADERS	= $(INC)

SRC_DIR		= src/
OBJ_DIR		= obj/
DEP_DIR		= dep/

CFLAGS		= -I $(INC) -MMD -MP -MF $(DEP_DIR)$*.d -Wall -Werror -Wextra
RM			= rm -rf
CC			= gcc
AR			= ar rcs


################################################################################
### COLORS
################################################################################

DEL_LINE =		\033[2K
ITALIC =		\033[3m
BOLD =			\033[1m
DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
WHITE =			\033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

################################################################################
################################################################################

SRC_FILES	=	$(basename $(notdir $(wildcard $(SRC_DIR)*.c)))

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEP 		=	$(patsubst $(SRC_DIR)%, $(DEP_DIR)%, $(SRCS:.c=.d))

################################################################################
################################################################################

all:
			@$(MAKE) $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile
			@printf "\r${ORANGE} | $(BROWN)COMPILING ${ORANGE}|  $(BLUE)< ${MAGENTA}$(notdir $(basename $<)) $(BLUE)> $(DEF_COLOR)%20c"
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME)::	$(OBJ_DIR) $(DEP_DIR) $(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@echo "\n\n$(BLUE)[$(ORANGE)============$(BLUE)<|$(ORANGE)DONE$(BLUE)|>$(ORANGE)============$(BLUE)] $(DEF_COLOR)"

$(OBJ_DIR):
			@mkdir -p $@

$(DEP_DIR):
			@mkdir -p $@

clean:
			@$(RM) $(OBJ_DIR) $(DEP_DIR)
			@echo "\n${RED}[$(MAGENTA)Objects removed successfully${RED}]$(DEF_COLOR)\n"

fclean:
			@$(MAKE) clean
			@$(RM) $(NAME)
			@echo "\n${RED}[$(MAGENTA)Everything removed successfully${RED}]$(DEF_COLOR)\n"

re:
			@$(MAKE) fclean
			@$(MAKE)

.PHONY: all clean fclean re
-include $(DEP)
