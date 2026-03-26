# Linux Process & Scheduling Interview Answers

---
### 1. Exec Family Calls

* The `exec` family (`execl`, `execv`, `execvp`, etc.) replaces the current process image with a new program.
* It does **not create a new process**; it overwrites the existing one.
* After successful execution, the previous code, stack, heap, and data are replaced entirely.

---

### 2. Scheduler & Scheduling Mechanisms

* A **scheduler** decides which process gets CPU time.
* **Types:**

  * **FCFS (First Come First Serve):** Simple, no preemption.
  * **Round Robin:** Time-sliced, fair for multitasking.
  * **Priority Scheduling:** Based on priority levels.
* Modern OS uses **Completely Fair Scheduler (CFS)** for balanced execution.

---

### 3. Process & Memory Layout

* A **process** is a program in execution with its own resources.
* Memory layout:

  * **Text segment:** Code
  * **Data segment:** Global/static variables
  * **Heap:** Dynamic memory
  * **Stack:** Function calls, local variables
* Each process has isolated memory space.

---

### 4. PCB (Process Control Block)

* Stores process-related information.
* Contains:

  * PID, state, program counter
  * CPU registers, scheduling info
  * Memory management info
* Used by OS to manage processes.

---

### 5. fork vs vfork

* `fork()`:

  * Creates a copy of parent process.
  * Uses **copy-on-write**.
* `vfork()`:

  * Child shares parent's memory temporarily.
  * Parent is suspended until child exits or execs.
* `vfork()` is faster but risky.

---

### 6. Viewing Running Processes

* Use commands:

  * `ps` → snapshot of processes
  * `top` / `htop` → real-time monitoring
  * `pidof` → find process ID
* Helps track CPU, memory usage.

---

### 1. Orphan vs Zombie Process

* **Orphan:**

  * Parent dies before child.
  * Adopted by init (PID 1).
* **Zombie:**

  * Child finished execution but still in process table.
  * Waiting for parent to read exit status.
* Orphan runs; zombie is dead but not cleaned.

---

### 2. Zombie vs Daemon Process

* **Zombie:**

  * Dead process, no resources except PID entry.
* **Daemon:**

  * Background service (e.g., sshd).
  * Runs continuously.
* Daemon is active; zombie is inactive.

---

### 3. Copy-On-Write Flow

* Parent calls `fork()`.
* Memory is **shared initially (read-only)**.
* On modification:

  * OS creates a separate copy.
* Efficient because copying is delayed.

---

### 4. Kernel vs User Space Process

* **User Process:**

  * Runs in user mode.
  * Limited privileges.
* **Kernel Process:**

  * Runs in kernel mode.
  * Full hardware access.
* Kernel processes handle system-level tasks.

---

### 5. If Parent Doesn't Call wait()

* Child becomes **zombie**.
* Entry remains in process table.
* Can exhaust system resources if many zombies accumulate.

---

### 6. fork Return Value

* Returns:

  * `0` → child process
  * Child PID → parent process
  * `-1` → failure
* Helps distinguish execution paths.

---

### 1. fork() Internally Calls

* Invokes kernel system call:

  * `clone()` (in Linux)
* Kernel duplicates process structure.
* Sets up child execution context.

---

### 2. Preemption

* OS interrupts a running process.
* Assigns CPU to another process.
* Improves responsiveness.

---

### 3. Nice Value

* Determines process priority.
* Range:

  * `-20` (highest priority)
  * `+19` (lowest priority)
* Lower nice → more CPU time.

---

### 4. Process States

* **New**
* **Ready**
* **Running**
* **Waiting/Blocked**
* **Terminated**
* OS switches between these states.

---

### 5. Context Switching

* Saving current process state.
* Loading next process state.
* Allows multitasking.

---

### 6. return vs exit()

* `return`:

  * Exits from function.
* `exit()`:

  * Terminates entire process.
  * Cleans resources.
* `exit()` also returns status to OS.

---
### 1. Process vs Thread

* **Process:**

  * Separate memory space.
* **Thread:**

  * Shared memory within process.
* Threads are lightweight.

---

### 2. PID 0 vs PID 1

* **PID 0:**

  * Scheduler (swapper process).
* **PID 1:**

  * Init/systemd.
  * Parent of all orphan processes.

---

### 3. Exec Memory Behavior

* Replaces:

  * Code, stack, heap
* Keeps:

  * PID unchanged
* Old program completely removed.

---

### 4. PID After exec()

* PID **remains same**.
* Only program changes.
* Important for process tracking.

---

### 5. Why wait() is Used

* To collect child exit status.
* Prevent zombie processes.
* Synchronizes parent-child execution.

---

### 6. Real-Time Examples

* **Daemon:**

  * Web server, SSH server.
* **Zombie:**

  * Improperly handled child processes.
* Daemons are useful; zombies indicate poor management.

---

## ✅ End of Document




# Linux Memory Management Interview Answers

---

## **Sushanth**

### 1. Virtual Memory vs Physical Memory

* **Physical Memory:**

  * Actual RAM present in the system.
  * Limited in size.
* **Virtual Memory:**

  * Logical memory abstraction provided by OS.
  * Uses disk space (swap) to extend RAM.
* Virtual memory allows running large programs beyond physical RAM.

---

### 2. Memory Segments (Program vs Process)

* **Text Segment:**

  * Contains executable code.
  * Read-only.
* **Data Segment:**

  * Initialized & uninitialized global/static variables.
* **Heap:**

  * Dynamic memory (`malloc`, `new`).
* **Stack:**

  * Function calls, local variables.
* Process memory is runtime instance of program segments.

---

### 3. Demand Paging

* Pages are loaded **only when required**.
* Reduces memory usage and load time.
* Improves efficiency by avoiding loading unused pages.

---

### 4. Page Fault

* Occurs when required page is not in RAM.
* OS pauses process and loads page from disk.
* Types:

  * Minor (already in memory but not mapped)
  * Major (requires disk access)

---

### 5. Virtual → Physical Address Conversion

* Done by **MMU (Memory Management Unit)**.
* Uses page tables.
* Assisted by **TLB for faster lookup**.

---

### 6. Memory Leak

* Allocated memory not freed.
* Causes gradual memory exhaustion.
* Common in C/C++ when `free()` is missed.

---

## **Nagalakshmi**

### 1. Fragmentation

* **Internal Fragmentation:**

  * Unused space inside allocated block.
* **External Fragmentation:**

  * Free memory scattered in small blocks.
* Leads to inefficient memory usage.

---

### 2. TLB (Translation Lookaside Buffer)

* Small cache storing recent address translations.
* Speeds up virtual → physical address mapping.
* Reduces page table lookup time.

---

### 3. Where Memory Management Resides

* Located in **kernel space**.
* Managed by OS memory management subsystem.
* Handles allocation, deallocation, paging.

---

### 4. Multilevel Paging in Linux

* Uses hierarchical page tables.
* Example:

  * PGD → PUD → PMD → PTE
* Reduces memory overhead of page tables.

---

### 5. Memory Management

* Responsible for:

  * Allocation & deallocation
  * Address translation
  * Protection & sharing
* Ensures efficient RAM usage.

---

### 6. Segmentation vs Paging

* **Segmentation:**

  * Logical division (code, data, stack).
  * Variable size.
* **Paging:**

  * Fixed-size blocks.
  * Eliminates external fragmentation.
* Paging is widely used in modern OS.

---

## **Bharath**

### 1. Compaction Technique

* Combines scattered free memory.
* Eliminates external fragmentation.
* Moves processes to create contiguous space.

---

### 2. Need for Page Replacement

* RAM is limited.
* When full, OS replaces pages.
* Algorithms:

  * FIFO, LRU, Optimal

---

### 3. Pages vs Frames

* **Page:**

  * Fixed-size block in virtual memory.
* **Frame:**

  * Fixed-size block in physical memory.
* Pages map to frames.

---

### 4. DMA (Direct Memory Access)

* Allows devices to transfer data directly to memory.
* CPU involvement is minimal.
* Improves performance.

---

### 5. Swap Area

* Disk space used as extra memory.
* Used when RAM is full.
* Helps run large applications.

---

### 6. Thrashing

* Excessive page swapping.
* System spends more time swapping than executing.
* Avoid by:

  * Increasing RAM
  * Using better algorithms
  * Limiting processes

---

## **Niharika**

### 1. Copy-On-Write (COW)

* Used in `fork()`.
* Parent & child share memory initially.
* Copy happens only on modification.
* Saves memory and improves performance.

---

### 2. Check Memory Usage in Linux

* Commands:

  * `free -h`
  * `top` / `htop`
  * `vmstat`
* Shows RAM, swap, usage stats.

---

### 3. Address Calculation

* Virtual address:

  * Split into page number + offset.
* Physical address:

  * Frame number + offset.
* Page table maps page → frame.

---

### 4. Segmentation Fault

* Occurs when accessing invalid memory.
* Handled by OS.
* Signal:

  * `SIGSEGV`
* Example: accessing NULL pointer.

---

### 5. Detect Memory Leaks

* Tools:

  * `valgrind`
  * `top` (monitor growth)
* Debugging:

  * Track malloc/free usage.

---

### 6. Modifying Text Segment

* Text segment is read-only.
* Modification causes:

  * Segmentation fault.
* Ensures program integrity.

---

## ✅ End of Document
