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

MAKE		= make --no-print-directory

NAME		= libft.a
INC			= ./inc/
INC_HEADER	= $(INC)*.h

SRC_DIR		= src/
OBJ_DIR		= obj/
DEP_DIR		= dep/

CFLAGS		= -I $(INC) -MMD -MP -MF $(DEP_DIR)$*.d -Wall -Werror -Wextra
RM			= rm -rf
CC			= gcc
AR			= ar rcs

################################################################################

SRC_FILES	=	$(basename $(notdir $(wildcard $(SRC_DIR)*.c)))

SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
DEP 		=	$(patsubst $(SRC_DIR)%, $(DEP_DIR)%, $(SRCS:.c=.d))

################################################################################

all:
			@$(MAKE) $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile
			@printf "\rcompiling.. $(notdir $(basename $<))%20c"
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME)::	$(OBJ_DIR) $(DEP_DIR) $(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@echo "\nDONE"

$(OBJ_DIR):
			@mkdir -p $@

$(DEP_DIR):
			@mkdir -p $@

clean:
			@$(RM) $(OBJ_DIR) $(DEP_DIR)
			@echo "$(OBJ_DIR) $(DEP_DIR) removed"

fclean:
			@$(MAKE) clean
			@$(RM) $(NAME)
			@echo "$(NAME) removed"

re:
			@$(MAKE) fclean
			@$(MAKE)

.PHONY: all clean fclean re
-include $(DEP)
