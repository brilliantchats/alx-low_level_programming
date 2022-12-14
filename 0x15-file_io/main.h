#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t str_len(char *str);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void read_write(int read_desc, int wrt_desc, char *buffr, char *frm, char *to);
#endif /* MAIN_H */
