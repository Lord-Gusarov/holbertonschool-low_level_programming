#include <string.h>
#include <stdlib.h>
ssize_t read(int fd, void *data, size_t size) {
  strcpy(data, "I love cats");
  return 12;
}
