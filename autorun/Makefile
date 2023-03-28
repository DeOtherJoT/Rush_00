#NAME#

EXP_EXE	= expected.out
EVL_EXE	= eval.out
EXP_TXT	= expected.txt
EVL_TXT = eval.txt

#COMMANDS#

GCC		= gcc -Wall -Wextra -Werror
RM		= rm -rf

#PATHS#

EXP_DIR	= mine/
EVL_DIR	= eval/ex00/

#SOURCE FILES#

RSH_TGT	= rush0$(TARGET).c
EXP_SRC	= $(addprefix $(EXP_DIR), main.c rush.c)
EVL_SRC	= $(addprefix $(EVL_DIR), main.c ft_putchar.c $(RSH_TGT));

all	: $(EXP_SRC)
	$(GCC) $(EXP_SRC) -o $(EXP_EXE) -fsanitize=address -g3

res	:
	./$(EXP_EXE) $(IN_X) $(IN_Y) $(TARGET) > $(EXP_TXT)

