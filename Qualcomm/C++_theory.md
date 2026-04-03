# 📘 Qualcomm C++ Interview Preparation (Group 1)

## 👨‍💻 Topics Covered (3 Topics)

1. Basics & OOP
2. Memory Management
3. Pointers & References

---

# 🔥 1. BASICS & OOP (20 Q&A)

### 1. What is C++?

* Extension of C with OOP features
* Supports procedural + object-oriented
* Compiled and statically typed
* Used in systems and embedded

### 2. What are OOP principles?

* Encapsulation → data hiding
* Abstraction → hide complexity
* Inheritance → reuse code
* Polymorphism → multiple behavior

### 3. What is a class?

* Blueprint for objects
* Contains data + functions
* Logical structure
* User-defined type

### 4. What is an object?

* Instance of class
* Holds real data
* Uses class methods
* Allocates memory

### 5. What is encapsulation?

* Binding data + methods
* Use private/public
* Protects data
* Improves maintainability

### 6. What is abstraction?

* Hides internal details
* Shows only interface
* Reduces complexity
* Achieved via classes

### 7. Access specifiers?

* public → accessible everywhere
* private → inside class
* protected → inherited access
* Controls visibility

### 8. struct vs class?

* struct default public
* class default private
* Functionality same
* Convention difference

### 9. What is namespace?

* Avoid name conflicts
* Groups identifiers
* Example: std
* Improves clarity

### 10. What is this pointer?

* Points to current object
* Used in member functions
* Resolves ambiguity
* Implicitly passed

### 11. What is static?

* Shared among objects
* One memory copy
* Lifetime entire program
* Used in functions/vars

### 12. What is const?

* Prevents modification
* Applied to vars/functions
* Improves safety
* Helps optimization

### 13. What is friend function?

* Access private members
* Declared inside class
* Not member function
* Used carefully

### 14. Operator overloading?

* Redefine operators
* Works on objects
* Improves readability
* Example: +, ==

### 15. Function overloading?

* Same name, diff params
* Compile-time polymorphism
* Improves flexibility
* No runtime cost

### 16. What is constructor?

* Special function
* Initializes object
* Same name as class
* Called automatically

### 17. What is destructor?

* Called on object deletion
* Frees resources
* Only one allowed
* No parameters

### 18. What is virtual function?

* Runtime polymorphism
* Overridden in child
* Uses vtable
* Base class pointer used

### 19. Pure virtual function?

* Declared = 0
* No implementation
* Must override
* Makes class abstract

### 20. Abstract class?

* Has pure virtual function
* Cannot instantiate
* Used for design
* Base class only

---

# 🔥 2. MEMORY MANAGEMENT (20 Q&A)

### 1. Dynamic memory allocation?

* Runtime allocation
* Uses new
* Stored in heap
* Manual deallocation

### 2. Stack vs heap?

* Stack → automatic
* Heap → manual
* Stack fast
* Heap flexible

### 3. new operator?

* Allocates memory
* Calls constructor
* Returns pointer
* Used in C++

### 4. delete operator?

* Frees memory
* Calls destructor
* Prevents leaks
* Matches new

### 5. new vs malloc?

* new → constructor
* malloc → no constructor
* Typed vs void*
* C++ vs C

### 6. delete vs free?

* delete → destructor
* free → no destructor
* C++ vs C
* Should not mix

### 7. Memory leak?

* Memory not freed
* Causes crash
* Long-term issue
* Avoid using smart ptr

### 8. Dangling pointer?

* Points to freed memory
* Undefined behavior
* After delete
* Set nullptr

### 9. Null pointer?

* Points to nothing
* Safe check
* Avoid dereference
* Use nullptr

### 10. nullptr?

* Type-safe null
* C++11 feature
* Replaces NULL
* Avoids ambiguity

### 11. Double free?

* Free twice
* Crash risk
* Undefined behavior
* Null after delete

### 12. Wild pointer?

* Uninitialized pointer
* Random memory
* Dangerous
* Always initialize

### 13. Fragmentation?

* Broken memory blocks
* Internal/external
* Reduces efficiency
* Heap issue

### 14. Smart pointer?

* Automatic management
* Avoid leaks
* RAII based
* From <memory>

### 15. unique_ptr?

* Single owner
* No copy
* Move allowed
* Lightweight

### 16. shared_ptr?

* Multiple owners
* Ref counting
* Auto delete
* Slight overhead

### 17. weak_ptr?

* Non-owning
* Avoid cycles
* With shared_ptr
* No ref count

### 18. Circular reference?

* shared_ptr loop
* No deletion
* Memory leak
* Use weak_ptr

### 19. Placement new?

* Construct at location
* No allocation
* Used in allocators
* Syntax special

### 20. RAII?

* Resource in constructor
* Release in destructor
* Auto cleanup
* Prevent leaks

---

# 🔥 3. POINTERS & REFERENCES (20 Q&A)

### 1. Pointer?

* Stores address
* Indirection operator *
* Can be null
* Reassignable

### 2. Reference?

* Alias to variable
* Must initialize
* Cannot change
* Safer than pointer

### 3. Pointer vs reference?

* Pointer nullable
* Reference not null
* Pointer reassignable
* Reference fixed

### 4. Double pointer?

* Pointer to pointer
* Used in dynamic arrays
* Example: int**
* Multi-level access

### 5. Void pointer?

* Generic pointer
* No type info
* Needs casting
* Used in malloc

### 6. Null pointer?

* Points to nothing
* Safe checks
* Avoid crash
* Use nullptr

### 7. Dangling pointer?

* Freed memory pointer
* Undefined behavior
* Dangerous
* Reset after delete

### 8. Wild pointer?

* Uninitialized
* Random value
* Crash risk
* Initialize always

### 9. Function pointer?

* Points to function
* Used in callbacks
* Improves flexibility
* Syntax complex

### 10. Pointer arithmetic?

* Increment/decrement
* Based on type size
* Used in arrays
* Efficient traversal

### 11. Array vs pointer?

* Array fixed size
* Pointer dynamic
* Array name constant
* Pointer flexible

### 12. Const pointer?

* Pointer constant
* Cannot change address
* Data may change
* Syntax: int* const

### 13. Pointer to const?

* Data constant
* Cannot modify value
* Pointer can change
* Safer access

### 14. Smart pointer?

* Auto management
* Avoid leaks
* RAII concept
* Modern C++

### 15. Reference vs pointer usage?

* Reference → safe
* Pointer → flexible
* Use reference mostly
* Pointer for dynamic

### 16. Returning pointer?

* Return address
* Must ensure validity
* Avoid local variable
* Use heap/static

### 17. Returning reference?

* Avoid copy
* Faster
* Must not return local
* Safe if valid

### 18. Pointer to object?

* Access members via ->
* Dynamic objects
* Used widely
* Example: obj->fun()

### 19. Smart pointer vs raw pointer?

* Smart auto free
* Raw manual free
* Smart safer
* Raw error-prone

### 20. nullptr vs NULL?

* nullptr type-safe
* NULL macro
* Avoid ambiguity
* Prefer nullptr

---

# 🚀 Notes

* This is **Group 1 (3 Topics)**
* Next groups:
  👉 Constructors / Polymorphism / Inheritance
  👉 STL / Multithreading / Advanced

---
# 📘 Qualcomm C++ Interview Preparation (Group 2)

## 👨‍💻 Topics Covered (3 Topics)

1. Constructors & Destructors
2. Polymorphism
3. Inheritance

---

# 🔥 1. CONSTRUCTORS & DESTRUCTORS (20 Q&A)

### 1. What is a constructor?

* Special member function
* Same name as class
* Initializes object
* Called automatically

### 2. Types of constructors?

* Default constructor
* Parameterized constructor
* Copy constructor
* Move constructor (C++11)

### 3. What is default constructor?

* No parameters
* Auto-generated if not defined
* Initializes object
* Called implicitly

### 4. What is parameterized constructor?

* Takes arguments
* Initializes values
* Improves flexibility
* User-defined

### 5. What is copy constructor?

* Copies object data
* Takes reference of same class
* Used in copying
* Prevent shallow copy issues

### 6. What is move constructor?

* Transfers ownership
* Uses rvalue reference
* Improves performance
* Avoids deep copy

### 7. What is destructor?

* Cleans up resources
* Called automatically
* No parameters
* Only one per class

### 8. When is destructor called?

* Object goes out of scope
* delete is used
* Program ends
* Stack unwind

### 9. Constructor vs destructor?

* Constructor initializes
* Destructor cleans
* Called at creation/destruction
* Opposite roles

### 10. What is initializer list?

* Initializes members directly
* Used in constructor
* More efficient
* Required for const/ref

### 11. What is shallow copy?

* Copies pointer address
* Shares memory
* Causes issues
* Default behavior

### 12. What is deep copy?

* Copies actual data
* Allocates new memory
* Safe copying
* Prevents bugs

### 13. What is Rule of 3?

* Copy constructor
* Copy assignment
* Destructor
* Manage resources safely

### 14. What is Rule of 5?

* Adds move constructor
* Move assignment
* Modern C++
* Performance optimized

### 15. What is explicit constructor?

* Prevent implicit conversion
* Use keyword explicit
* Improves safety
* Avoid unexpected behavior

### 16. What is delegating constructor?

* One constructor calls another
* Reduces duplication
* Cleaner code
* C++11 feature

### 17. Can constructor be virtual?

* No
* Object not fully created
* vtable not ready
* Not allowed

### 18. Can destructor be virtual?

* Yes
* Required in base class
* Ensures proper cleanup
* Prevents memory leak

### 19. What happens if destructor not defined?

* Compiler provides default
* Works for simple objects
* No custom cleanup
* Risk if dynamic memory

### 20. What is copy elision?

* Avoids unnecessary copy
* Optimized by compiler
* Improves performance
* Happens in return

---

# 🔥 2. POLYMORPHISM (20 Q&A)

### 1. What is polymorphism?

* Multiple forms
* Same interface, diff behavior
* Improves flexibility
* Core OOP concept

### 2. Types of polymorphism?

* Compile-time
* Runtime
* Function overloading
* Virtual functions

### 3. What is compile-time polymorphism?

* Resolved at compile time
* Function overloading
* Operator overloading
* Faster execution

### 4. What is runtime polymorphism?

* Resolved at runtime
* Uses virtual functions
* Achieved via inheritance
* Uses base pointer

### 5. What is function overloading?

* Same name
* Different parameters
* Compile-time decision
* Improves readability

### 6. What is operator overloading?

* Redefines operators
* Works on objects
* Improves usability
* Example: +

### 7. What is virtual function?

* Declared in base class
* Overridden in child
* Supports runtime polymorphism
* Uses vtable

### 8. What is vtable?

* Table of function pointers
* Used for dynamic binding
* Created per class
* Hidden implementation

### 9. What is late binding?

* Function call resolved at runtime
* Uses virtual keyword
* Based on object type
* Enables polymorphism

### 10. What is early binding?

* Compile-time resolution
* Faster
* No virtual
* Static binding

### 11. What is function overriding?

* Same function signature
* In derived class
* Requires inheritance
* Runtime polymorphism

### 12. What is pure virtual function?

* Declared = 0
* No implementation
* Must override
* Makes class abstract

### 13. What is abstract class?

* Contains pure virtual
* Cannot instantiate
* Used for interface
* Base class only

### 14. What is override keyword?

* Ensures overriding
* Compile-time check
* Avoid mistakes
* Improves readability

### 15. What is final keyword?

* Prevents override
* Used in methods/classes
* Stops inheritance
* Compile-time restriction

### 16. Can static functions be virtual?

* No
* No object binding
* Resolved at compile time
* Not allowed

### 17. What is dynamic_cast?

* Safe type casting
* Works with polymorphism
* Runtime check
* Returns nullptr if fail

### 18. What is typeid?

* Identifies object type
* Used in RTTI
* Works with polymorphism
* Returns type info

### 19. What is covariant return type?

* Derived return type allowed
* Used in overriding
* Improves flexibility
* Rare use

### 20. Why polymorphism is important?

* Code reuse
* Flexibility
* Extensibility
* Clean design

---

# 🔥 3. INHERITANCE (20 Q&A)

### 1. What is inheritance?

* Deriving new class
* Reuse code
* IS-A relationship
* Improves maintainability

### 2. Types of inheritance?

* Single
* Multiple
* Multilevel
* Hierarchical

### 3. What is single inheritance?

* One base class
* One derived class
* Simple structure
* Easy to use

### 4. What is multiple inheritance?

* Multiple base classes
* One derived class
* Powerful
* Can cause ambiguity

### 5. What is multilevel inheritance?

* Chain of inheritance
* A → B → C
* Reuse extended
* Deep hierarchy

### 6. What is hierarchical inheritance?

* One base → multiple derived
* Common features shared
* Code reuse
* Widely used

### 7. What is hybrid inheritance?

* Combination of types
* Complex structure
* Real-world use
* Needs care

### 8. What is access mode?

* public inheritance
* protected inheritance
* private inheritance
* Controls visibility

### 9. What is diamond problem?

* Multiple inheritance conflict
* Same base class twice
* Ambiguity issue
* Solved using virtual

### 10. What is virtual inheritance?

* Prevent duplicate base
* Shared base instance
* Solves diamond problem
* Uses virtual keyword

### 11. Base vs derived class?

* Base → parent
* Derived → child
* Inherits properties
* Extends functionality

### 12. What is overriding?

* Redefining base function
* Same signature
* Runtime behavior
* Polymorphism

### 13. What is protected member?

* Accessible in derived
* Not outside class
* Between private/public
* Used in inheritance

### 14. Constructor order in inheritance?

* Base constructor first
* Then derived
* Reverse in destruction
* Important concept

### 15. Destructor order?

* Derived first
* Then base
* Reverse of constructor
* Ensures cleanup

### 16. Can private members be inherited?

* Yes (but not accessible)
* Exist in derived
* Cannot access directly
* Use public/protected

### 17. What is base pointer?

* Points to derived object
* Enables polymorphism
* Calls virtual functions
* Flexible design

### 18. What is slicing problem?

* Object copied partially
* Base part only copied
* Loses derived data
* Avoid via pointers

### 19. What is virtual destructor?

* Ensures proper cleanup
* Needed in base class
* Prevents memory leaks
* Important in polymorphism

### 20. Advantages of inheritance?

* Code reuse
* Easy maintenance
* Extensible
* Logical hierarchy

---

# 🚀 Notes

* This is **Group 2 (Core OOP Deep Concepts)**
* Next Group:
  👉 STL / Multithreading / Advanced C++ ⭐⭐⭐

---
# 📘 Qualcomm C++ Interview Preparation (Group 3)

## 👨‍💻 Topics Covered (3 Topics)

1. STL (Standard Template Library) ⭐⭐⭐
2. Multithreading (C++11) ⭐⭐⭐
3. Advanced C++ Concepts ⭐⭐⭐

---

# 🔥 1. STL (STANDARD TEMPLATE LIBRARY) (20 Q&A)

### 1. What is STL?

* Library of templates
* Provides containers, algorithms
* Improves productivity
* Generic programming

### 2. Components of STL?

* Containers
* Algorithms
* Iterators
* Functors

### 3. What is a vector?

* Dynamic array
* Contiguous memory
* Fast access
* Slow insert/delete middle

### 4. What is list?

* Doubly linked list
* Non-contiguous memory
* Fast insert/delete
* No random access

### 5. What is deque?

* Double-ended queue
* Insert both ends
* Faster than vector in front
* Random access supported

### 6. What is map?

* Key-value pairs
* Sorted order
* Unique keys
* Implemented using tree

### 7. What is unordered_map?

* Hash table
* No order
* Faster lookup
* Unique keys

### 8. set vs unordered_set?

* set → sorted
* unordered_set → hash
* set slower
* unordered faster

### 9. What is iterator?

* Pointer-like object
* Traverses container
* Supports operations
* Important in STL

### 10. Types of iterators?

* Input
* Output
* Forward
* Random access

### 11. What is algorithm library?

* Predefined functions
* Sorting, searching
* Works with iterators
* Efficient

### 12. What is sort()?

* Sorting algorithm
* Uses introsort
* O(n log n)
* From <algorithm>

### 13. What is lambda function?

* Anonymous function
* Inline usage
* C++11 feature
* Used in STL

### 14. What is pair?

* Holds two values
* Used in map
* Simple struct
* Access via first/second

### 15. What is priority_queue?

* Heap structure
* Max heap default
* Fast top element
* Used in scheduling

### 16. What is stack?

* LIFO structure
* push/pop operations
* No iteration
* Simple container

### 17. What is queue?

* FIFO structure
* push/pop front
* Used in BFS
* Limited access

### 18. What is emplace?

* Construct in-place
* Faster than push
* Avoid copy
* C++11 feature

### 19. What is capacity vs size?

* size → elements count
* capacity → allocated space
* capacity ≥ size
* vector specific

### 20. When to use STL?

* Faster development
* Tested library
* Reduces bugs
* Industry standard ⭐

---

# 🔥 2. MULTITHREADING (20 Q&A)

### 1. What is multithreading?

* Multiple threads
* Parallel execution
* Improves performance
* Shared memory

### 2. What is thread in C++?

* std::thread
* Runs function
* Lightweight process
* C++11 feature

### 3. What is join()?

* Wait for thread
* Blocks main thread
* Ensures completion
* Required cleanup

### 4. What is detach()?

* Runs independently
* No join needed
* Risky
* No control after

### 5. What is mutex?

* Mutual exclusion
* Prevents race condition
* Lock/unlock
* Ensures safety

### 6. What is race condition?

* Multiple threads conflict
* Shared data issue
* Unpredictable result
* Needs synchronization

### 7. What is deadlock?

* Threads waiting forever
* Circular dependency
* Program freeze
* Avoid lock order

### 8. What is condition_variable?

* Thread communication
* Wait/notify
* Efficient sync
* Avoid busy wait

### 9. What is atomic?

* Lock-free operations
* Thread-safe
* Faster than mutex
* Limited use

### 10. What is thread safety?

* Safe concurrent access
* No data corruption
* Use locks/atomics
* Important concept

### 11. What is lock_guard?

* Auto lock/unlock
* RAII based
* Prevent errors
* Simple wrapper

### 12. What is unique_lock?

* Flexible lock
* Lock/unlock manually
* Used with condition_variable
* More control

### 13. What is future?

* Holds result
* Async execution
* Wait/get result
* C++11 feature

### 14. What is async?

* Runs task asynchronously
* Returns future
* Simplifies threading
* Automatic handling

### 15. What is thread pool?

* Reuse threads
* Improves efficiency
* Reduces overhead
* Not in standard STL

### 16. What is livelock?

* Threads active but stuck
* No progress
* Similar to deadlock
* Rare issue

### 17. What is hardware_concurrency()?

* Returns CPU threads
* Used for optimization
* Helps scaling
* System dependent

### 18. What is spinlock?

* Busy waiting
* No sleep
* Faster short locks
* CPU intensive

### 19. What is context switch?

* Switch between threads
* OS controlled
* Performance overhead
* Happens frequently

### 20. When to use multithreading?

* Parallel tasks
* Performance improvement
* Real-time systems
* Embedded systems ⭐

---

# 🔥 3. ADVANCED C++ (20 Q&A)

### 1. What is RAII?

* Resource tied to object
* Constructor acquires
* Destructor releases
* Prevent leaks

### 2. What is move semantics?

* Transfer ownership
* Avoid copy
* Uses rvalue
* Improves performance

### 3. What is rvalue reference?

* Temporary object reference
* Syntax: &&
* Used in move
* C++11 feature

### 4. What is std::move?

* Converts to rvalue
* Enables move semantics
* Does not move itself
* Just cast

### 5. What is lambda?

* Anonymous function
* Inline usage
* Capture variables
* Used in STL

### 6. What is auto keyword?

* Type inference
* Reduces code
* Improves readability
* C++11 feature

### 7. What is decltype?

* Gets type of expression
* Compile-time
* Used with templates
* Advanced feature

### 8. What is constexpr?

* Compile-time constant
* Faster execution
* Used in functions
* Improves optimization

### 9. What is template?

* Generic programming
* Works with any type
* Code reuse
* Compile-time

### 10. What is template specialization?

* Customize template
* Specific type behavior
* Improves flexibility
* Advanced usage

### 11. What is SFINAE?

* Substitution failure rule
* Template resolution
* Compile-time logic
* Advanced concept

### 12. What is variadic template?

* Multiple arguments
* Flexible functions
* Used in STL
* C++11 feature

### 13. What is noexcept?

* Indicates no exception
* Improves optimization
* Used in functions
* Important in move

### 14. What is enum class?

* Scoped enum
* Type-safe
* No implicit conversion
* C++11 feature

### 15. What is inline vs constexpr?

* inline → expand function
* constexpr → compile-time
* Different purpose
* Optimization tools

### 16. What is perfect forwarding?

* Preserve value category
* Used with templates
* Avoid copies
* Advanced

### 17. What is std::bind?

* Bind arguments
* Create callable
* Used in functional
* Legacy feature

### 18. What is function object?

* Object behaving like function
* operator() used
* Used in STL
* Flexible

### 19. What is type casting in C++?

* static_cast
* dynamic_cast
* const_cast
* reinterpret_cast

### 20. Why modern C++ is important?

* Safer code
* Better performance
* Less bugs
* Industry standard ⭐

---

# 🚀 FINAL NOTES

* This is **Group 3 (MOST IMPORTANT ⭐⭐⭐)**
* Focus areas for Qualcomm:

  * STL deep understanding
  * Memory + pointers + RAII
  * Multithreading basics
  * Move semantics

---

# 🎯 FINAL PREPARATION STRATEGY

* Revise all 3 groups
* Practice coding + outputs
* Focus on concepts clarity
* Be ready for deep follow-ups

---
