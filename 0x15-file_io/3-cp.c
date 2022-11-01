#include "main.h"
int open_files(char *f_from, char *f_to);
int read_files(int from_fd, int to_fd, char *f_from, char *f_to);
int write_to_file(char *buff, int to_fd, int read_chars, char *f_to);
/**
 * main - Entry point
 * @argc: Count of the arguments to start the program.
 * @argv: An array of strings containing the arguments passed to the program.
 * Description: The overall goal of this program is to copy the contents of a
 * file FILE_FROM to a file FILE_TO. Usage ./cp FILE_FROM FILE_TO.
 * Return: Always zero, but It will have exit 97 when there it does not have
 * the right number of parameters, 98 when it can not read / open
 * the file FILE_from, 99 when it can not open/write to the file FILE_TO and
 * 100 when it can not close the file descriptors.
 */
int main(int argc, char **argv)
{
	char *f_from;
	char *f_to;
		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
		f_from = argv[1];
		f_to = argv[2];
		open_files(f_from, f_to);
		exit(0);
		return (0);
}
