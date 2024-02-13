#
# smiro
# string.mk
# 2024-02
#

STRING_DIR = string
STRING_INC = $(STRING_DIR)/string.h

STRING_SRC = $(STRING_DIR)/ft_bzero.c \
			 $(STRING_DIR)/ft_itoa.c \
			 $(STRING_DIR)/ft_memchr.c \
			 $(STRING_DIR)/ft_memcmp.c \
			 $(STRING_DIR)/ft_memcpy.c \
			 $(STRING_DIR)/ft_memmove.c \
			 $(STRING_DIR)/ft_memset.c \
			 $(STRING_DIR)/ft_split.c \
			 $(STRING_DIR)/ft_strchr.c \
			 $(STRING_DIR)/ft_strcmp.c \
			 $(STRING_DIR)/ft_strdup.c \
			 $(STRING_DIR)/ft_striteri.c \
			 $(STRING_DIR)/ft_strjoin.c \
			 $(STRING_DIR)/ft_strlcat.c \
			 $(STRING_DIR)/ft_strlcpy.c \
			 $(STRING_DIR)/ft_strlen.c \
			 $(STRING_DIR)/ft_strmapi.c \
			 $(STRING_DIR)/ft_strncmp.c \
			 $(STRING_DIR)/ft_strnstr.c \
			 $(STRING_DIR)/ft_strrchr.c \
			 $(STRING_DIR)/ft_strtrim.c \
			 $(STRING_DIR)/ft_substr.c

