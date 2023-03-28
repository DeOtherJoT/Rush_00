#NAME#

EXP_EXE	= expected.out
EVL_EXE	= eval.out
EXP_TXT	= expected.txt
EVL_TXT = eval.txt

#COMMANDS#

GCC		= gcc -Wall -Wextra -Werror
RM		= rm -rf
FSAN	= -fsanitize=address -g3

#PATHS#

EXP_DIR	= mine/
EVL_DIR	= ~/Desktop/rush00_eval/eval/ex00/

#SOURCE FILES#

RSH_TGT	= rush0$(TARGET).c
EXP_SRC	= $(addprefix $(EXP_DIR), main.c rush.c)
EVL_SRC	= $(addprefix $(EVL_DIR), main.c ft_putchar.c $(RSH_TGT))

all	: $(EXP_SRC) $(EVL_SRC)
	$(GCC) $(EXP_SRC) -o $(EXP_EXE)
	$(GCC) $(EVL_SRC) -o $(EVL_EXE)

res	: all
	./$(EXP_EXE) $(IN_X) $(IN_Y) $(TARGET) > $(EXP_TXT)
	./$(EVL_EXE) > $(EVL_TXT)

diff	: res
	diff $(EXP_TXT) $(EVL_TXT)

clean	:
	$(RM) $(EVL_TXT) $(EXP_TXT)

fclean	: clean
	$(RM) $(EVL_EXE) $(EXP_EXE)

norm	:
	norminette $(EVL_DIR)

.PHONY	: all res diff clean fclean
