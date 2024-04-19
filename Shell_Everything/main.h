#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

extern char **environ;

/**
 * struct list_s - A singly linked list.
 * @patname: String name of a memory path.
 * @next: A pointer to a variable of type struct.
 *
 * Description: This typedef structure will represent
 *		a linked list containing all directories
 *		found in the environment variable PATH.
 */
typedef struct list_s
{
	char *pathname;
	struct list_s *next;
} list_t;

char *_getenv(const char *env_var_name);
char *_strtok(const char *str, const char *del);
list_t *path_lkd_ls(list_t **head);
size_t print_list(const list_t *head);
int _setenv(const char *name, const char *value, int overwrite);
char **_putenv(const char *name, const char *value, int count);
int _unsetenv(const char *var);

#endif
