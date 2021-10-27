CC = gcc										# Nom du compilateur
CFLAGS = -std=c99 -Wall -Wextra -Werror -Wstrict-prototypes		# Les flags
RM = rm -f 										# Commande pour supprimer des fichiers
NAME = morse									# Nom de l'exécutable
SRC = main.c	 								# Les fichiers source. Soir *.c, soit on liste les fichiers
EXEC = ./

all: compilation 

execute:
	$(EXEC)$(NAME)

compilation:							# Règle all, exécutée par défaut avec la commande "make"
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:								# Règle clean, pour supprimer les fichiers générés par le compilateur. On utilise "make clean"
	$(RM) $(NAME)

re: clean all							# "make re", pour supprimer les anciens fichiers et les génére à nouveau.