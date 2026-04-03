# 📘 Qualcomm C Preparation – GROUP 1 (Fundamentals)

## 📦 Topics Covered

1. Basics & Data Types
2. Pointers ⭐⭐⭐
3. Arrays & Strings

---

# 🔥 1. BASICS & DATA TYPES (20 Q&A)

### Q1. What is C language?

* Procedural programming language
* Developed by Dennis Ritchie
* Close to hardware
* Used in embedded systems

### Q2. What are basic data types?

* int, float, char, double
* Store different kinds of values
* Size depends on system
* Fundamental building blocks

### Q3. What is sizeof()?

* Operator, not function
* Returns memory size
* Compile-time evaluation
* Used in portability

### Q4. What is signed vs unsigned?

* signed → + and - values
* unsigned → only positive
* Larger range for unsigned
* Same memory size

### Q5. What is type casting?

* Convert one type to another
* Implicit and explicit
* Avoid data loss
* Improves control

### Q6. What is const?

* Read-only variable
* Prevents modification
* Improves safety
* Compiler optimization

### Q7. What is volatile?

* Value can change anytime
* Used in hardware registers
* Prevents optimization
* Important in embedded

### Q8. What is enum?

* Named constants
* Improves readability
* Default starts from 0
* User-defined type

### Q9. What is typedef?

* Alias for data type
* Simplifies complex types
* Improves readability
* Used with structs

### Q10. What is scope?

* Visibility of variable
* Local vs global
* Block-level control
* Important concept

### Q11. What is lifetime?

* Duration of variable
* Auto, static, dynamic
* Memory dependent
* Important in design

### Q12. What is keyword?

* Reserved word
* Predefined meaning
* Cannot be variable name
* Example: int, return

### Q13. What is identifier?

* Variable/function name
* Must follow rules
* Cannot start with digit
* Case-sensitive

### Q14. What is ASCII?

* Character encoding
* Maps char to number
* Used internally
* Example: 'A' = 65

### Q15. Format specifiers?

* %d, %f, %c
* Used in printf/scanf
* For I/O operations
* Important

### Q16. Implicit conversion?

* Automatic type conversion
* Happens in expressions
* Smaller → larger
* Safe

### Q17. Explicit conversion?

* Manual casting
* (type)variable
* Avoid warnings
* Control precision

### Q18. float vs double?

* float → 4 bytes
* double → 8 bytes
* double more precise
* Used in calculations

### Q19. main() function?

* Entry point
* Returns int
* Called by OS
* Required

### Q20. void type?

* No value
* Used in functions
* Pointer type also
* Important

---

# 🔥 2. POINTERS (20 Q&A ⭐⭐⭐)

### Q1. What is a pointer?

* Stores address of variable
* Enables indirect access
* Core concept
* Used in memory handling

### Q2. Pointer declaration?

* int *p;
* Stores address
* *p gives value
* Must initialize

### Q3. What is NULL pointer?

* Points to nothing
* Value is 0
* Safe initialization
* Avoid garbage

### Q4. Dangling pointer?

* Points freed memory
* Undefined behavior
* Dangerous
* Set NULL

### Q5. Wild pointer?

* Uninitialized pointer
* Random address
* Crash risk
* Always initialize

### Q6. Pointer arithmetic?

* p+1 moves size
* Depends on type
* Used in arrays
* Efficient

### Q7. Void pointer?

* Generic pointer
* Can hold any type
* Needs casting
* Used in malloc

### Q8. Double pointer?

* Pointer to pointer
* int **pp
* Used in dynamic memory
* Used in argv

### Q9. Function pointer?

* Points to function
* Used in callbacks
* Flexible
* Advanced

### Q10. Const pointer types?

* const int *p → value constant
* int *const p → address constant
* const int *const p → both
* Important

### Q11. Pointer vs array?

* Array fixed size
* Pointer dynamic
* Array name constant
* Pointer reassignable

### Q12. malloc vs calloc?

* malloc → uninitialized
* calloc → zero
* Both dynamic
* Return void*

### Q13. realloc?

* Resize memory
* May change address
* Preserve data
* Use carefully

### Q14. Pointer to struct?

* struct *p
* Access using ->
* Efficient
* Widely used

### Q15. Pointer increment vs value?

* p++ → address
* (*p)++ → value
* Tricky question
* Important

### Q16. Memory leak?

* Not freed memory
* Wastes resources
* Causes crash
* Use free()

### Q17. sizeof(pointer) vs sizeof(*pointer)?

* pointer → address size
* *pointer → data size
* Platform dependent
* Important

### Q18. Segmentation fault?

* Invalid memory access
* Crash
* Null/dangling pointer
* Common bug

### Q19. Pointer aliasing?

* Multiple pointers same memory
* Can cause bugs
* Affects optimization
* Careful use

### Q20. Pointer to array?

* int (*p)[5]
* Different from int*
* Used in 2D arrays
* Tricky syntax

---

# 🔥 3. ARRAYS & STRINGS (20 Q&A)

### Q1. What is array?

* Collection of elements
* Same data type
* Contiguous memory
* Indexed

### Q2. Array initialization?

* int a[] = {1,2}
* Partial allowed
* Default zero
* Flexible

### Q3. 2D array?

* Matrix form
* Row-major storage
* Used in applications
* Important

### Q4. Array vs pointer?

* Array fixed
* Pointer dynamic
* Array constant
* Pointer flexible

### Q5. String in C?

* char array
* Ends with '\0'
* Null-terminated
* Important

### Q6. strlen()?

* Returns length
* Excludes '\0'
* O(n)
* string.h

### Q7. strcpy()?

* Copies string
* No bounds check
* Risk overflow
* Use strncpy

### Q8. strcmp()?

* Compares strings
* 0 → equal
* Lexicographic
* Case-sensitive

### Q9. strcat()?

* Concatenates
* Needs space
* Risk overflow
* Common

### Q10. gets vs fgets?

* gets unsafe
* fgets safe
* Prevent overflow
* Use fgets

### Q11. char* vs char[]?

* Pointer vs array
* Literal vs modifiable
* Important diff
* Interview Q

### Q12. Passing array?

* Passed as pointer
* No size info
* Efficient
* Need size param

### Q13. Reverse string?

* Two-pointer method
* Swap ends
* O(n)
* Common

### Q14. Palindrome?

* Compare ends
* Move inward
* O(n)
* Simple

### Q15. Duplicate chars?

* Frequency array
* ASCII mapping
* O(n)
* Common

### Q16. char vs string?

* char single
* string array
* '\0' needed
* Important

### Q17. Array decay?

* Array → pointer
* Lose size info
* Function calls
* Important

### Q18. Memory layout?

* Row-major
* Continuous block
* Index calculation
* Embedded

### Q19. Pointer to array?

* int (*p)[n]
* Complex syntax
* Useful
* Important

### Q20. Dynamic array?

* malloc used
* Flexible size
* Manual free
* Embedded usage

---

# 🧠 REVISION NOTES

* Focus heavily on **Pointers ⭐⭐⭐**
* Practice **array + string coding**
* Understand **memory + address flow**
* Be ready for **output-based questions**

---
# 📘 Qualcomm C Preparation – GROUP 2 (Programming Core)

## 📦 Topics Covered

1. Functions & Recursion
2. Memory Management ⭐⭐⭐
3. Structures, Unions & Enums

---

# 🔥 1. FUNCTIONS & RECURSION (20 Q&A)

### Q1. What is a function?

* Block of reusable code
* Performs specific task
* Improves modularity
* Reduces redundancy

### Q2. Function declaration vs definition?

* Declaration → prototype
* Definition → implementation
* Declaration before use
* Enables type checking

### Q3. Call by value?

* Copies data
* Original unchanged
* Safe
* Default in C

### Q4. Call by reference?

* Pass address
* Modifies original
* Uses pointers
* Efficient

### Q5. What is recursion?

* Function calling itself
* Needs base condition
* Used in problems
* Risk of stack overflow

### Q6. What is base condition?

* Stops recursion
* Prevents infinite calls
* Required
* Important

### Q7. Stack overflow?

* Too many calls
* Stack memory exceeded
* Program crash
* Avoid deep recursion

### Q8. Inline function?

* Suggest inline expansion
* Reduces overhead
* Compiler decides
* Used in embedded

### Q9. Static function?

* File scope
* Not visible outside
* Encapsulation
* Avoid conflicts

### Q10. Function prototype?

* Declares signature
* Type checking
* Improves readability
* Required

### Q11. Arguments vs parameters?

* Arguments → actual values
* Parameters → variables
* Used in function
* Slight difference

### Q12. Variadic functions?

* Variable arguments
* Uses stdarg.h
* Example printf
* Flexible

### Q13. Tail recursion?

* Recursive call last
* Can optimize
* Reduces stack
* Limited use

### Q14. Function pointer?

* Pointer to function
* Used in callbacks
* Dynamic behavior
* Important

### Q15. Returning pointer?

* Returns address
* Avoid local variables
* Use static/dynamic
* Risk dangling

### Q16. Nested functions?

* Not standard in C
* GCC extension
* Not portable
* Avoid

### Q17. Reentrant function?

* Safe in interrupts
* No global/static use
* No shared state
* Important in embedded

### Q18. Pure function?

* No side effects
* Same output always
* Easy testing
* Functional style

### Q19. Function overloading?

* Not in C
* Supported in C++
* Use different names
* Trick question

### Q20. main() return type?

* Should return int
* OS expects value
* Standard practice
* Avoid void main

---

# 🔥 2. MEMORY MANAGEMENT (20 Q&A ⭐⭐⭐)

### Q1. Types of memory?

* Stack
* Heap
* Data segment
* Code segment

### Q2. Stack vs Heap?

* Stack automatic
* Heap manual
* Stack faster
* Heap flexible

### Q3. malloc()?

* Allocates memory
* Uninitialized
* Returns void*
* Needs free()

### Q4. calloc()?

* Allocates + initializes
* Zero-filled
* Two parameters
* Slower

### Q5. free()?

* Deallocates memory
* Prevent leaks
* Required
* Safe programming

### Q6. realloc()?

* Resize memory
* May move address
* Preserve data
* Use carefully

### Q7. Memory leak?

* Not freed memory
* Wastes resources
* Causes crash
* Critical

### Q8. Dangling pointer?

* Points freed memory
* Undefined behavior
* Dangerous
* Set NULL

### Q9. Fragmentation?

* Memory scattered
* Inefficient
* Internal/external
* Happens in heap

### Q10. Static memory?

* Compile-time allocation
* Exists entire program
* Fast access
* Used for globals

### Q11. Automatic memory?

* Stack allocation
* Local variables
* Limited lifetime
* Auto managed

### Q12. Memory alignment?

* Align data
* Improves performance
* Avoid faults
* Important

### Q13. Heap overflow?

* Write beyond heap
* Corrupt memory
* Crash
* Security issue

### Q14. Stack frame?

* Function call data
* Stores locals
* Return address
* Debugging

### Q15. Segmentation fault?

* Invalid access
* Crash
* Null/dangling pointer
* Common

### Q16. Double free?

* Free twice
* Undefined behavior
* Crash
* Avoid

### Q17. Smart memory usage?

* Allocate minimal
* Free early
* Avoid fragmentation
* Embedded optimization

### Q18. Buffer overflow?

* Exceed buffer
* Overwrites memory
* Security risk
* Use safe APIs

### Q19. Memory pool?

* Pre-allocated block
* Fast allocation
* Used in RTOS
* Reduces fragmentation

### Q20. Virtual memory?

* OS abstraction
* Paging system
* Not direct hardware
* Limited embedded use

---

# 🔥 3. STRUCTURES, UNIONS & ENUMS (20 Q&A)

### Q1. What is structure?

* Collection of different types
* User-defined
* Groups related data
* Widely used

### Q2. What is union?

* Shared memory
* One member active
* Saves memory
* Used in embedded

### Q3. Struct vs Union?

* Struct separate memory
* Union shared memory
* Struct larger
* Union efficient

### Q4. Structure padding?

* Extra bytes added
* Alignment purpose
* Improves performance
* Affects size

### Q5. sizeof struct?

* Includes padding
* Depends on alignment
* Platform dependent
* Important

### Q6. Bit fields?

* Control bits
* Used in registers
* Saves memory
* Embedded use

### Q7. Nested structure?

* Struct inside struct
* Complex data
* Used in drivers
* Hierarchical

### Q8. Pointer to struct?

* struct *p
* Access using ->
* Efficient
* Common

### Q9. typedef struct?

* Simplifies syntax
* Removes 'struct' keyword
* Cleaner code
* Common

### Q10. Flexible array member?

* Last member array
* No fixed size
* Used in dynamic alloc
* C99 feature

### Q11. Anonymous struct?

* No name
* Direct usage
* Less common
* Used in unions

### Q12. Enum default values?

* Starts from 0
* Auto increment
* Can override
* Useful

### Q13. Enum size?

* Usually int
* Compiler dependent
* Efficient
* Used in states

### Q14. Struct copy?

* Direct copy allowed
* Copies all members
* Shallow copy
* Careful with pointers

### Q15. Struct alignment?

* Based on largest type
* Improves performance
* Causes padding
* Important

### Q16. Packed struct?

* No padding
* Uses pragma
* Saves memory
* Slower access

### Q17. Union use case?

* Protocol parsing
* Memory optimization
* Hardware registers
* Embedded

### Q18. Struct vs class?

* Struct → C
* Class → C++
* Struct public default
* No methods

### Q19. Self-referential struct?

* Pointer to itself
* Used in linked list
* Trees
* Graphs

### Q20. Structure initialization?

* struct s = {...}
* Partial allowed
* Default zero
* Clean syntax

---

# 🧠 REVISION NOTES

* Focus heavily on **Memory Management ⭐⭐⭐**
* Be strong in **function pointers + recursion logic**
* Understand **struct padding (VERY IMPORTANT)**
* Prepare for **real-time embedded questions**

---

👉 This is your **Group 2 complete Qualcomm-ready document**
# 📘 Qualcomm C Preparation – GROUP 3 (Advanced & Embedded)

## 📦 Topics Covered

1. Bit Manipulation ⭐⭐⭐
2. Storage Classes
3. Preprocessor & Macros

---

# 🔥 1. BIT MANIPULATION (20 Q&A ⭐⭐⭐)

### Q1. What are bitwise operators?

* &, |, ^, ~
* <<, >>
* Operate at bit level
* Used in embedded

### Q2. Check even or odd?

* n & 1
* 0 → even
* 1 → odd
* Fast method

### Q3. Set a bit?

* n | (1<<k)
* Turns bit ON
* Used in flags
* Efficient

### Q4. Clear a bit?

* n & ~(1<<k)
* Turns bit OFF
* Safe operation
* Common

### Q5. Toggle a bit?

* n ^ (1<<k)
* Flips bit
* Efficient
* Used in control

### Q6. Check if bit is set?

* n & (1<<k)
* Non-zero → set
* Zero → not set
* Important

### Q7. Count set bits?

* Loop or optimized
* Brian Kernighan algo
* Efficient
* Used widely

### Q8. Left shift operator?

* Multiplies by 2
* Fast operation
* Risk overflow
* Used in flags

### Q9. Right shift operator?

* Divides by 2
* Logical/arithmetic
* Depends on sign
* Important

### Q10. XOR properties?

* a^a = 0
* a^0 = a
* Used in tricks
* Important

### Q11. Swap using XOR?

* No temp variable
* Bit trick
* Efficient
* Interview favorite

### Q12. What is masking?

* Extract bits
* Uses AND
* Hardware use
* Important

### Q13. What is endianness?

* Byte order
* Little vs Big endian
* Hardware dependent
* Important

### Q14. What are bit fields?

* Control bits
* Save memory
* Used in registers
* Embedded

### Q15. Check power of 2?

* n&(n-1)==0
* Efficient
* O(1)
* Common

### Q16. Clear lowest set bit?

* n&(n-1)
* Efficient
* Used in algorithms
* Optimization

### Q17. Isolate lowest set bit?

* n & -n
* Bit trick
* Advanced
* Useful

### Q18. Rotate bits?

* Circular shift
* Used in crypto
* Hardware ops
* Important

### Q19. What is sign bit?

* MSB
* Indicates sign
* Affects shift
* Important

### Q20. Bit manipulation use cases?

* Flags
* Permissions
* Hardware control
* Protocol parsing

---

# 🔥 2. STORAGE CLASSES (20 Q&A)

### Q1. What are storage classes?

* Define scope & lifetime
* auto, static, extern, register
* Memory behavior
* Important

### Q2. What is auto?

* Default storage
* Local scope
* Stack memory
* Rarely used

### Q3. What is register?

* Suggest CPU register
* Faster access
* Compiler decides
* No address allowed

### Q4. What is static?

* Retains value
* Lifetime full program
* Limited scope
* Important

### Q5. What is extern?

* Declares global variable
* Defined elsewhere
* Used in multi-file
* Important

### Q6. Static vs global?

* static → file scope
* global → everywhere
* static safer
* Avoid conflicts

### Q7. Lifetime vs scope?

* Lifetime → existence
* Scope → visibility
* Different concepts
* Important

### Q8. Static local variable?

* Retains value
* Initialized once
* Used in counters
* Persistent

### Q9. Static global variable?

* File-level visibility
* Not accessible outside
* Safer
* Used in modules

### Q10. Register limitations?

* No address (&)
* Limited registers
* Compiler decides
* Optimization hint

### Q11. Extern usage?

* Multi-file programs
* Shared variables
* Avoid duplication
* Important

### Q12. Default storage class?

* auto for locals
* extern for globals
* Compiler assigns
* Important

### Q13. Static function?

* File scope
* Not visible outside
* Encapsulation
* Used in drivers

### Q14. Lifetime of static variable?

* Entire program
* Initialized once
* Retains value
* Important

### Q15. Scope of global variable?

* Entire file/program
* Accessible anywhere
* Needs extern
* Important

### Q16. Initialization of static?

* Default zero
* Done once
* Before execution
* Important

### Q17. Register vs auto?

* register faster
* auto default
* register optional
* Compiler decision

### Q18. Storage class importance?

* Controls memory
* Optimizes performance
* Avoid conflicts
* Embedded use

### Q19. Can static be global?

* Yes
* Limits scope
* File-level visibility
* Safer

### Q20. Why use extern?

* Access global variables
* Multi-file linking
* Avoid duplication
* Important

---

# 🔥 3. PREPROCESSOR & MACROS (20 Q&A)

### Q1. What is preprocessor?

* Runs before compilation
* Handles directives
* Text substitution
* No type checking

### Q2. What is #define?

* Macro definition
* Replaces text
* No memory
* Fast

### Q3. Macro vs function?

* Macro faster
* No type checking
* Function safer
* Debug easier

### Q4. What is #include?

* Includes file
* Header/library
* Compilation step
* Important

### Q5. < > vs " " ?

* < > → system headers
* " " → user headers
* Search path differs
* Important

### Q6. Conditional compilation?

* #if, #ifdef
* Compile selectively
* Used in embedded
* Debugging

### Q7. What is #undef?

* Removes macro
* Redefine later
* Clean code
* Useful

### Q8. Function-like macro?

* #define MAX(a,b)
* Inline logic
* No overhead
* Risk bugs

### Q9. Macro pitfalls?

* No type safety
* Multiple evaluation
* Debug difficult
* Parentheses needed

### Q10. What is #pragma?

* Compiler-specific
* Optimization
* Struct packing
* Not portable

### Q11. Include guards?

* Prevent duplication
* #ifndef pattern
* Avoid errors
* Standard practice

### Q12. What is #ifdef?

* Checks macro defined
* Conditional compile
* Used in configs
* Important

### Q13. What is #if?

* Evaluates condition
* Compile control
* Flexible
* Useful

### Q14. What is #elif?

* Else if condition
* Multiple checks
* Cleaner code
* Important

### Q15. What is #error?

* Generates compile error
* Debugging
* Validation
* Useful

### Q16. What is #line?

* Changes line number
* Debugging
* Rarely used
* Advanced

### Q17. Macro expansion?

* Replaces text
* Before compilation
* No runtime cost
* Important

### Q18. Multi-line macros?

* Use \
* Extend lines
* Complex logic
* Careful usage

### Q19. Why macros used?

* Performance
* Inline expansion
* Constants
* Embedded usage

### Q20. Debugging macros?

* Difficult
* No type checking
* Hidden errors
* Use carefully

---

# 🧠 REVISION NOTES

* Focus heavily on **Bit Manipulation ⭐⭐⭐**
* Practice **bit tricks (very important for Qualcomm)**
* Understand **storage classes deeply**
* Be careful with **macros pitfalls**

---

👉 This is your **Group 3 complete Qualcomm-ready document**
# 📘 Qualcomm C Preparation – GROUP 4 (System & Edge Cases)

## 📦 Topics Covered

1. File Handling
2. Undefined Behavior ⭐⭐⭐
3. Coding Concepts (Output + Logic) ⭐⭐⭐

---

# 🔥 1. FILE HANDLING (20 Q&A)

### Q1. What is FILE pointer?

* FILE *fp
* Used to handle files
* Defined in stdio.h
* Required for file operations

### Q2. What is fopen()?

* Opens a file
* Modes: r, w, a
* Returns FILE pointer
* NULL if fails

### Q3. What are file modes?

* r → read
* w → write
* a → append
* r+, w+ → read/write

### Q4. What is fclose()?

* Closes file
* Frees resources
* Prevents leaks
* Important

### Q5. What is fprintf()?

* Writes formatted data
* Similar to printf
* Used for files
* Flexible

### Q6. What is fscanf()?

* Reads formatted data
* Similar to scanf
* Used for files
* Important

### Q7. What is fread()?

* Reads binary data
* Faster
* Efficient
* Used in embedded

### Q8. What is fwrite()?

* Writes binary data
* Efficient
* Used in embedded
* Faster than text

### Q9. What is fseek()?

* Moves file pointer
* Random access
* Efficient
* Important

### Q10. What is ftell()?

* Returns current position
* Offset value
* Used with fseek
* Debugging

### Q11. What is rewind()?

* Moves pointer to start
* Equivalent to fseek
* Useful
* Simple

### Q12. What is EOF?

* End of file
* Value -1
* Used in loops
* Important

### Q13. Text vs binary file?

* Text readable
* Binary compact
* Binary faster
* Embedded usage

### Q14. What is file buffering?

* Temporary storage
* Improves performance
* Reduces I/O calls
* Important

### Q15. Error handling in files?

* Check NULL
* Use perror()
* Handle failures
* Safe coding

### Q16. What is fflush()?

* Clears buffer
* Writes pending data
* Important
* Used in output

### Q17. What is feof()?

* Checks EOF
* Returns status
* Used in loops
* Important

### Q18. What is ferror()?

* Checks error
* Returns status
* Debugging
* Useful

### Q19. File pointer states?

* Open
* Closed
* Error
* EOF

### Q20. Why file handling important?

* Data storage
* Logging
* Persistent data
* System programming

---

# 🔥 2. UNDEFINED BEHAVIOR (20 Q&A ⭐⭐⭐)

### Q1. What is undefined behavior?

* No defined result
* Compiler dependent
* Dangerous
* Avoid always

### Q2. Example of UB?

* i = i++ + ++i
* Order undefined
* Unexpected output
* Common question

### Q3. Uninitialized variable?

* Garbage value
* Unpredictable
* Bug source
* Always initialize

### Q4. Out-of-bounds access?

* Invalid memory access
* Crash or garbage
* Undefined
* Common mistake

### Q5. Null pointer dereference?

* Access NULL
* Crash
* Segmentation fault
* Dangerous

### Q6. Dangling pointer?

* Freed memory access
* Undefined behavior
* Crash
* Avoid

### Q7. Integer overflow?

* Exceeds limit
* Wrap-around
* Undefined (signed)
* Critical

### Q8. Division by zero?

* Runtime error
* Crash
* Undefined
* Must check

### Q9. Double free?

* Free twice
* Undefined
* Crash
* Avoid

### Q10. Modifying const variable?

* Undefined
* Compiler optimization issue
* Crash possible
* Avoid

### Q11. Sequence point issue?

* i++ + ++i
* Undefined order
* Dangerous
* Common

### Q12. Pointer arithmetic overflow?

* Beyond memory
* Undefined
* Crash
* Dangerous

### Q13. Accessing freed memory?

* Dangling pointer
* Undefined
* Crash
* Avoid

### Q14. Invalid pointer casting?

* Wrong type
* Undefined
* Data corruption
* Avoid

### Q15. Overflow in array?

* Exceed bounds
* Corrupt memory
* Crash
* Dangerous

### Q16. Modifying string literal?

* Undefined
* Stored in read-only
* Crash
* Important

### Q17. Returning local address?

* Invalid memory
* Dangling pointer
* Undefined
* Avoid

### Q18. Shift beyond limit?

* Undefined
* Depends compiler
* Dangerous
* Avoid

### Q19. Strict aliasing violation?

* Access wrong type
* Undefined
* Optimization issue
* Advanced

### Q20. Why UB dangerous?

* Unpredictable
* Hard to debug
* System crash
* Critical in embedded

---

# 🔥 3. CODING CONCEPTS (OUTPUT + LOGIC) ⭐⭐⭐

### Q1. What is output-based question?

* Predict output
* Tests understanding
* Common in interviews
* Requires practice

### Q2. Example: i = i++ + ++i?

* Undefined behavior
* Order not fixed
* Different outputs
* Avoid such code

### Q3. Pointer increment output?

* p++ vs (*p)++
* Address vs value
* Common trap
* Important

### Q4. Array pointer output?

* a[i] == *(a+i)
* Same result
* Pointer arithmetic
* Important

### Q5. sizeof vs strlen?

* sizeof compile-time
* strlen runtime
* Different results
* Important

### Q6. printf return value?

* Returns printed chars
* Useful
* Often asked
* Important

### Q7. Pre/post increment?

* i++ → after use
* ++i → before use
* Output differs
* Common

### Q8. Pointer to pointer output?

* Double dereference
* **p access value
* Confusing
* Practice needed

### Q9. Struct padding output?

* Size includes padding
* Depends alignment
* Platform dependent
* Important

### Q10. Bitwise output?

* Binary operations
* Fast computation
* Common questions
* Practice needed

### Q11. Memory allocation output?

* malloc uninitialized
* calloc zero
* Important difference
* Common

### Q12. String literal vs array?

* Literal read-only
* Array modifiable
* Output differs
* Important

### Q13. Dangling pointer output?

* Undefined
* Crash/garbage
* Dangerous
* Avoid

### Q14. Function pointer output?

* Call via pointer
* Dynamic behavior
* Advanced
* Important

### Q15. Static variable output?

* Retains value
* Across calls
* Important
* Common

### Q16. Recursion output?

* Depends base condition
* Stack behavior
* Important
* Trace required

### Q17. Macro expansion output?

* Text replacement
* No type checking
* Can cause bugs
* Important

### Q18. Endianness output?

* Byte order
* Memory layout
* Hardware dependent
* Advanced

### Q19. Bit shift output?

* Depends sign
* Logical/arithmetic
* Important
* Practice

### Q20. Why practice outputs?

* Builds understanding
* Improves debugging
* Interview success
* Critical skill

---

# 🧠 REVISION NOTES

* Focus heavily on **Undefined Behavior ⭐⭐⭐**
* Practice **output-based questions daily**
* Be strong in **file handling basics**
* Prepare for **tricky C behavior questions**

---

👉 This is your **Group 4 complete Qualcomm-ready document**

👉 This is your **Group 1 complete Qualcomm-ready document**
You can edit, expand, or revise anytime.
