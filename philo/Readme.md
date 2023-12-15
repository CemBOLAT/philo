# External Function Descriptions

## 1. [`memset`](https://www.cplusplus.com/reference/cstring/memset/)

**Description:** Sets the first `n` bytes of the memory pointed to by `s` to the specified value `c`.

**Library:** [`<string.h>`](https://www.cplusplus.com/reference/clibrary/cstring/)

## 2. [`printf`](https://www.cplusplus.com/reference/cstdio/printf/)

**Description:** Prints formatted output to the standard output (stdout).

**Library:** [`<stdio.h>`](https://www.cplusplus.com/reference/cstdio/)

## 3. [`malloc`](https://www.cplusplus.com/reference/cstdlib/malloc/)

**Description:** Allocates a block of memory of specified size.

**Library:** [`<stdlib.h>`](https://www.cplusplus.com/reference/cstdlib/)

## 4. [`free`](https://www.cplusplus.com/reference/cstdlib/free/)

**Description:** Deallocates the memory previously allocated by `malloc`, `calloc`, or `realloc`.

**Library:** [`<stdlib.h>`](https://www.cplusplus.com/reference/cstdlib/)

## 5. [`write`](https://www.cplusplus.com/reference/unistd/write/)

**Description:** Writes data to the specified file descriptor.

**Library:** [`<unistd.h>`](https://www.cplusplus.com/reference/unistd.h/)

## 6. [`usleep`](https://www.cplusplus.com/reference/unistd/usleep/)

**Description:** Suspends execution of the calling thread for the specified number of microseconds.

**Library:** [`<unistd.h>`](https://www.cplusplus.com/reference/unistd.h/)

## 7. [`gettimeofday`](https://www.cplusplus.com/reference/sys-time.h/gettimeofday/)

**Description:** Gets the current time and/or date as a `struct timeval` and timezone information.

**Library:** [`<sys/time.h>`](https://www.cplusplus.com/reference/sys-time.h/)

## 8. [`pthread_create`](https://www.man7.org/linux/man-pages/man3/pthread_create.3.html)

**Description:** Creates a new thread, with specified attributes and starting routine.

**Library:** [`<pthread.h>`](https://www.man7.org/linux/man-pages/man3/pthread_create.3.html)

## 9. [`pthread_detach`](https://www.man7.org/linux/man-pages/man3/pthread_detach.3.html)

**Description:** Marks the thread identified by `thread` as detached, meaning it will clean up its resources upon termination.

**Library:** [`<pthread.h>`](https://www.man7.org/linux/man-pages/man3/pthread_detach.3.html)

## 10. [`pthread_join`](https://www.man7.org/linux/man-pages/man3/pthread_join.3.html)

**Description:** Waits for the thread specified by `thread` to terminate.

**Library:** [`<pthread.h>`](https://www.man7.org/linux/man-pages/man3/pthread_join.3.html)

## 11. [`pthread_mutex_init`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_init.3.html)

**Description:** Initializes a mutex with the specified attributes.

**Library:** [`<pthread.h>`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_init.3.html)

## 12. [`pthread_mutex_destroy`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_destroy.3.html)

**Description:** Destroys the specified mutex object.

**Library:** [`<pthread.h>`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_destroy.3.html)

## 13. [`pthread_mutex_lock`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_lock.3.html)

**Description:** Locks the specified mutex.

**Library:** [`<pthread.h>`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_lock.3.html)

## 14. [`pthread_mutex_unlock`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_unlock.3.html)

**Description:** Unlocks the specified mutex.

**Library:** [`<pthread.h>`](https://www.man7.org/linux/man-pages/man3/pthread_mutex_unlock.3.html)
