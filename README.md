# Progress Bar Simulation

A fun mini C project to simulate and display the progress of multiple tasks using visual progress bars in the console.

---

## Features

- Simulates progress for **5 tasks** (configurable).
- Dynamically updates progress bars in the console.
- Progress steps are randomized for each task.
- Clears the console and redraws the progress bars after every update.
- Stops when all tasks are 100% complete.

---

## How It Works

1. The program initializes **5 tasks** (or a user-defined number) with progress starting at 0%.
2. Each task progresses incrementally with a random step value (between 1 and 5).
3. The console is cleared on each update using `system("cls")` for Windows or `system("clear")` for Linux/Mac.
4. Progress bars are redrawn with updated values until all tasks reach 100%.
5. Once complete, a message **"ALL TASKS COMPLETED"** is displayed.

---

## File Structure

- **`progress_bar.c`**: The source code of the program.
- **`README.md`**: Documentation for the project.
- **`pb.exe`**: It is the executable file of the source code.

---

## Requirements

- A C compiler (e.g., GCC or MinGW).
- A terminal or console to run the compiled program.

---

## Compilation and Execution

1. **Clone the Repository**:
   ```bash
   git clone  https://github.com/Plasma-69/Progress_bar_by_c-mini-fun-project-.git
   cd progress_bar_with_c


