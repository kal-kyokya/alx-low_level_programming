#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <string.h>

/**
 * error_exit1 - prints error message and exit
 * @code: exit code
 * @message: message to print
 * @filename: filename to print
 * Return : nothing.
 */
void error_exit1(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(code);
}

/**
 * error_exit2 - prints error message and exit
 * @code: exit code
 * @message: message to print
 * @value: value to print
 * Return : nothing.
 */
void error_exit2(int code, const char *message, const int value)
{
	dprintf(STDERR_FILENO, "%s %d\n", message, value);
	exit(code);
}

/**
 * error_exit0 - prints error message and exit
 * @code: exit code
 * @message: message to print
 * Return : nothing.
 */
void error_exit0(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy(const char *file_from, char *file_to);
void print_elf_header_info(Elf64_Ehdr *header);
int main(int argc, char **argv);

#endif
