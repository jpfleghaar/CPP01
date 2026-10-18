# C++ Module 01 — Memory allocation, references, pointers to members

Stack vs. heap allocation, references vs. pointers, file streams and pointers to member functions in C++98.

*This project was created as part of the 42 curriculum by jpflegha.*

## Exercises

| Exercise | Program | What it does |
|:---|:---|:---|
| `ex00` | `zombie` | `newZombie` creates a zombie on the heap (caller must `delete` it), `randomChump` creates one on the stack that is destroyed automatically. |
| `ex01` | `zombieHorde` | Allocates a horde of N named zombies (`Zombie1`, `Zombie2`, …) and frees them again. |
| `ex02` | `brain` | Shows that a pointer and a reference to a string refer to the same address and value. |
| `ex03` | `violence` | `HumanA` always has a weapon (stored as a reference), `HumanB` may have none (stored as a pointer). Changing the `Weapon` type is visible to both. |
| `ex04` | `replace` | `./replace <file> <s1> <s2>` copies `<file>` to `<file>.replace` and replaces every `s1` with `s2` — without `std::string::replace`. |
| `ex05` | `Harl` | `Harl::complain(level)` calls the right private member function (`debug`, `info`, `warning`, `error`) through an array of pointers to member functions instead of an if/else chain. |

## Key concepts

- `new` / `delete` / `new[]` / `delete[]`, object lifetime, destructors
- References vs. pointers (when each one makes sense)
- `std::ifstream` / `std::ofstream`, searching and building strings
- Pointers to member functions

## Build and run

```bash
git clone https://github.com/jpfleghaar/CPP01.git
cd CPP01/ex00 && make && ./zombie
HeapZombie 🧟 : BraiiiiiiinnnzzzZ...
LeakZombie 🧟 : BraiiiiiiinnnzzzZ...
StackZombie 🧟 : BraiiiiiiinnnzzzZ...
StackZombie 🧟 has been destroyed
HeapZombie 🧟 has been destroyed
LeakZombie 🧟 has been destroyed
```

```bash
cd ../ex03 && make && ./violence
Bob attacks with their crude spiked club
Bob attacks with their some other type of club
Jim attacks with their crude spiked club
Jim attacks with their some other type of club
```

```bash
cd ../ex04 && make
printf 'hello world\nsay hello\n' > test.txt
./replace test.txt hello bye && cat test.txt.replace
bye world
say bye
```

Every exercise has its own Makefile (`c++ -Wall -Wextra -Werror -std=c++98`).

## Project structure

```
ex00/  Zombie.{hpp,cpp}, newZombie.cpp, randomChump.cpp, main.cpp
ex01/  Zombie.{hpp,cpp}, zombieHorde.cpp, main.cpp
ex02/  main.cpp
ex03/  Weapon.{hpp,cpp}, HumanA.{hpp,cpp}, HumanB.{hpp,cpp}, main.cpp
ex04/  main.cpp
ex05/  Harl.{hpp,cpp}, main.cpp
```

## What I learned

- When to allocate on the stack (short-lived, automatic cleanup) and when on the heap (must outlive the function, needs `delete`).
- A reference can never be null and can't be re-bound, so it fits a member that must always exist; a pointer fits an optional one.
- Pointers to member functions replace long if/else chains with a lookup table.
- Handling files and errors (missing file, wrong arguments) cleanly in C++.
