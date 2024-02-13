#
# smiro
# src.mk
# 2024-02
#

include src/io/io.mk
include src/lst/lst.mk
include src/std/std.mk
include src/string/string.mk
include src/type/type.mk

INC_FILES = $(IO_INC) \
			$(LST_INC) \
			$(STD_INC) \
			$(STRING_INC) \
			$(TYPE_INC)

SRC_FILES = $(IO_SRC) \
			$(LST_SRC) \
			$(STD_SRC) \
			$(STRING_SRC) \
			$(TYPE_SRC)

