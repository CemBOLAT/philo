# philo
# pthread_create
```
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
```
# pthread_detach
```
int pthread_detach(pthread_t thread);
```
# pthread_join
```
int pthread_join(pthread_t thread, void **retval);
```
# pthread_mutex_inint
```
int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);
```
# pthread_mutex_destroy
```
int pthread_mutex_destroy(pthread_mutex_t *mutex);
```
# pthread_mutex_lock
```
int pthread_mutex_lock(pthread_mutex_t *mutex);
```
# pthread_mutex_unlock
```
int pthread_mutex_unlock(pthread_mutex_t *mutex);
```
