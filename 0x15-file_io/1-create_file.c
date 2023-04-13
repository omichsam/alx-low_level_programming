#include "main.h"
#include <stdlib.h>

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    mode_t mode = S_IRUSR | S_IWUSR;
    int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
    if (fd == -1) {
        return -1;
    }

    if (text_content != NULL) {
        size_t len = strlen(text_content);
        ssize_t num_bytes_written = write(fd, text_content, len);
        if (num_bytes_written == -1) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
