# Ecole42 Philosophers Project

- [Introduction](#introduction)
- [Global Rules](#global-rules)
- [Mandatory Part - Program: philo](#mandatory-part---program-philo)
  - [Project Structure](#project-structure)
  - [Build Instructions](#build-instructions)
  - [Execution](#execution)
  - [Requirements](#requirements)
  - [Description](#description)
- [Bonus Part - Program: philo_bonus](#bonus-part---program-philo_bonus)
  - [Project Structure](#project-structure-1)
  - [Build Instructions](#build-instructions-1)
  - [Execution](#execution-1)
  - [Requirements](#requirements-1)
  - [Description](#description-1)


## Introduction

This repository contains the implementation of the Philosophers project for Ecole42. The project involves creating a simulation of philosophers dining, with both mandatory and bonus parts.

## Global Rules

Ensure that your program adheres to the global rules provided in the project description to avoid issues and data races. The logs should accurately represent the state changes of philosophers, and the program should handle philosopher deaths appropriately.

# Mandatory Part - Program: `philo`

## Project Structure

- **philo/** (directory)
  - `Makefile`
  - `*.h` (header files)
  - `*.c` (source files)

### Build Instructions

To build the `philo` program, navigate to the `philo/` directory and run the following commands:

```bash
make          # Compile the program
```
#### The Makefile includes the following targets: all, clean, fclean, re.

### Execution

Run the `philo` program with the following command:
```bash
./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]
```
| Parameter                                      | Description                                                                |
| ---------------------------------------------- | -------------------------------------------------------------------------- |
| `number_of_philosophers`                       | The number of philosophers and forks.                                      |
| `time_to_die`                                  | Time (in milliseconds) for a philosopher to die if they haven't started eating.|
| `time_to_eat`                                  | Time (in milliseconds) for a philosopher to eat.                           |
| `time_to_sleep`                                | Time (in milliseconds) for a philosopher to sleep.                         |
| `number_of_times_each_philosopher_must_eat`    | (Optional) Simulation stops when all philosophers have eaten this many times.|

## Requirements

- External Functions: `memset`, `printf`, `malloc`, `free`, `write`, `usleep`, `gettimeofday`, `pthread_create`, `pthread_detach`, `pthread_join`, `pthread_mutex_init`, `pthread_mutex_destroy`, `pthread_mutex_lock`, `pthread_mutex_unlock`.
- Libft is authorized.

## Description

The `philo` program simulates philosophers using threads and mutexes, adhering to specific rules mentioned in the project description.

# Bonus Part - Program: `philo_bonus`

## Project Structure

- **philo_bonus/** (directory)
  - `Makefile`
  - `*.h` (header files)
  - `*.c` (source files)

### Build Instructions

To build the `philo_bonus` program, navigate to the `philo_bonus/` directory and run the following commands:

```bash
make          # Compile the program
```
#### The Makefile includes the following targets: all, clean, fclean, re.

### Execution

Run the `philo_bonus` program with the same command structure as the mandatory part:

```bash
./philo_bonus number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]
```

## Requirements

External Functions: `memset`, `printf`, `malloc`, `free`, `write`, `fork`, `kill`, `exit`, `pthread_create`, `pthread_detach`, `pthread_join`, `usleep`, `gettimeofday`, `waitpid`, `sem_open`, `sem_close`, `sem_post`, `sem_wait`, `sem_unlink`.

Libft is not authorized.

## Description

The `philo_bonus` program extends the project with processes and semaphores, following the rules specified in the project description.

Note: This README provides a general structure and guidelines. Make sure to refer to the actual project requirements and guidelines for the most accurate and specific information.


