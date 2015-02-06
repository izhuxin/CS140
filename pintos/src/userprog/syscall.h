#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
#include "threads/thread.h"
#include <stdbool.h>

void syscall_init (void);

/* Function to check pointer provided by user.
   If PTR is invalid, (maybe tell the user and)exit the process.
 */
void check_valid_ptr (void *ptr);

#endif /* userprog/syscall.h */
