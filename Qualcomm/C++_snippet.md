# 📘 C++ – 50 Tricky Output-Based Questions (Qualcomm Level)

---

# 🔥 SECTION 1: BASICS & SCOPE

### 1.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    if (true) {
        int x = 20;
        cout << x << " ";
    }
    cout << x;
}
```

**Output:** 20 10

* Inner scope shadows outer variable
* Local variable used inside block
* Outer remains unchanged
* Scope-based resolution

---

### 2.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout << x++ << " " << ++x;
}
```

**Output:** 5 7

* Post increment prints then increments
* Pre increment increments first
* Evaluation left to right
* Final x = 7

---

### 3.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout << x++ + ++x;
}
```

**Output:** Undefined Behavior

* Modifying variable twice
* No sequence point
* Compiler dependent
* Avoid such expressions

---

### 4.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 0;
    cout << (x && 5);
}
```

**Output:** 0

* Logical AND short-circuits
* x is false (0)
* Second operand not evaluated
* Result false

---

### 5.

```cpp
#include <iostream>
using namespace std;
int main() {
    cout << sizeof('A');
}
```

**Output:** 1

* Character literal
* Size of char = 1 byte
* Stored as char
* Not int (C++ behavior)

---

### 6.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    cout << (x > 5 ? 100 : 200);
}
```

**Output:** 100

* Ternary operator
* Condition true
* First value selected
* Compact if-else

---

### 7.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 2;
    switch(x) {
        case 1: cout << "One";
        case 2: cout << "Two";
        case 3: cout << "Three";
    }
}
```

**Output:** TwoThree

* No break statements
* Fall-through behavior
* Executes next cases
* Important interview trap

---

### 8.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    cout << (x == 10 ? x = 20 : x = 30);
}
```

**Output:** 20

* Assignment inside ternary
* Condition true
* x becomes 20
* Expression returns value

---

### 9.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 3;
    cout << (x << 1);
}
```

**Output:** 6

* Left shift operator
* Multiplies by 2
* 3 * 2 = 6
* Bit manipulation

---

### 10.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout << (x & 1);
}
```

**Output:** 1

* Bitwise AND
* Checks odd/even
* 5 is odd
* LSB = 1

---

# 🔥 SECTION 2: POINTERS

### 11.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;
    cout << *p;
}
```

**Output:** 10

* Pointer stores address
* * dereferences
* Access value
* Basic pointer

---

### 12.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int *p = &x;
    (*p)++;
    cout << x;
}
```

**Output:** 11

* Pointer modifies value
* Same memory location
* Indirect access
* Shared reference

---

### 13.

```cpp
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3};
    cout << *(arr + 1);
}
```

**Output:** 2

* Array decays to pointer
* arr + 1 → next element
* Dereference gives value
* Pointer arithmetic

---

### 14.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *p = &x;
    int **q = &p;
    cout << **q;
}
```

**Output:** 5

* Double pointer
* q → p → x
* Two dereferences
* Multi-level pointer

---

### 15.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *p = NULL;
    cout << p;
}
```

**Output:** 0 (or null address)

* Null pointer
* Points to nothing
* Safe initialization
* Avoid dereference

---

# 🔥 SECTION 3: OOP & CONSTRUCTORS

### 16.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
};
int main() {
    A obj;
}
```

**Output:** A

* Constructor called
* Object creation
* Automatic call
* Initialization

---

### 17.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
    ~A() { cout << "~A "; }
};
int main() {
    A obj;
}
```

**Output:** A ~A

* Constructor first
* Destructor last
* Stack object
* Scope end cleanup

---

### 18.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
};
class B : public A {
public:
    B() { cout << "B "; }
};
int main() {
    B obj;
}
```

**Output:** A B

* Base constructor first
* Then derived
* Inheritance order
* Important concept

---

### 19.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    virtual void fun() { cout << "A"; }
};
class B : public A {
public:
    void fun() { cout << "B"; }
};
int main() {
    A* p = new B();
    p->fun();
}
```

**Output:** B

* Virtual function
* Runtime polymorphism
* Base pointer
* Calls derived

---

### 20.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    void fun() { cout << "A"; }
};
class B : public A {};
int main() {
    B obj;
    obj.fun();
}
```

**Output:** A

* Inheritance
* Function inherited
* No override
* Base method used

---

# 🔥 SECTION 4: STL & MISC

### 21.

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1,2,3};
    cout << v.size();
}
```

**Output:** 3

* Vector container
* Stores elements
* size() gives count
* Dynamic array

---

### 22.

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v(3, 5);
    cout << v[1];
}
```

**Output:** 5

* Initialize with value
* Size 3
* All elements 5
* Index access

---

### 23.

```cpp
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int,int> m;
    m[1] = 10;
    m[2] = 20;
    cout << m[1];
}
```

**Output:** 10

* Key-value pair
* Ordered map
* Access via key
* Unique keys

---

### 24.

```cpp
#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s = {3,1,2,1};
    cout << s.size();
}
```

**Output:** 3

* Set stores unique
* Removes duplicates
* Sorted order
* Size reflects unique

---

### 25.

```cpp
#include <iostream>
using namespace std;
int main() {
    auto x = 10;
    cout << typeid(x).name();
}
```

**Output:** int (compiler dependent)

* auto type deduction
* x becomes int
* typeid shows type
* Compile-time inference

---

# 📘 C++ – Tricky Output Questions (26–50)

---

# 🔥 SECTION 5: STATIC, CONST & REFERENCES

### 26.

```cpp
#include <iostream>
using namespace std;
void fun() {
    static int x = 0;
    x++;
    cout << x << " ";
}
int main() {
    fun(); fun(); fun();
}
```

**Output:** 1 2 3

* static retains value
* Initialized once
* Shared across calls
* Stored in static memory

---

### 27.

```cpp
#include <iostream>
using namespace std;
int main() {
    const int x = 10;
    int *p = (int*)&x;
    *p = 20;
    cout << x;
}
```

**Output:** Undefined Behavior

* Modifying const object
* Type casting used
* Compiler may optimize
* Avoid such code

---

### 28.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int &ref = x;
    ref = 20;
    cout << x;
}
```

**Output:** 20

* Reference alias
* Same memory
* Modification reflects
* No new copy

---

### 29.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int &r = x;
    int y = r;
    y = 10;
    cout << x;
}
```

**Output:** 5

* y is copy, not reference
* r refers to x
* y independent
* x unchanged

---

### 30.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int &r = x;
    int *p = &r;
    cout << *p;
}
```

**Output:** 5

* Reference has address
* Pointer can point to ref
* Same memory
* Works like normal variable

---

# 🔥 SECTION 6: ADVANCED POINTER TRICKS

### 31.

```cpp
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30};
    int *p = arr;
    cout << *(p + 2);
}
```

**Output:** 30

* Pointer arithmetic
* p+2 → third element
* Dereference
* Array indexing logic

---

### 32.

```cpp
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4};
    int *p = arr;
    cout << *p++ << " " << *p;
}
```

**Output:** 1 2

* Post increment
* First prints 1
* Then pointer moves
* Next value 2

---

### 33.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *p = &x;
    cout << (*p)++;
    cout << x;
}
```

**Output:** 5 6

* Post increment
* Prints first
* Then increments
* Value updated

---

### 34.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *p = &x;
    cout << ++(*p);
}
```

**Output:** 6

* Pre increment
* Value incremented first
* Then printed
* Direct modification

---

### 35.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *p = &x;
    int **q = &p;
    cout << **q + 1;
}
```

**Output:** 6

* Double pointer
* q → p → x
* Access value
* Add 1

---

# 🔥 SECTION 7: CONSTRUCTORS & OBJECT LIFETIME

### 36.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
    ~A() { cout << "~A "; }
};
int main() {
    A obj1;
    {
        A obj2;
    }
}
```

**Output:** A A ~A ~A

* obj1 created first
* obj2 created inside block
* obj2 destroyed first
* LIFO destruction

---

### 37.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
};
A fun() {
    A obj;
    return obj;
}
int main() {
    fun();
}
```

**Output:** A

* Copy elision
* No extra copy
* Optimization by compiler
* Single constructor call

---

### 38.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
    A(const A&) { cout << "Copy "; }
};
int main() {
    A obj1;
    A obj2 = obj1;
}
```

**Output:** A Copy

* Copy constructor
* Called on assignment
* obj2 initialized
* Deep/shallow depends

---

### 39.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
    ~A() { cout << "~A "; }
};
int main() {
    A *p = new A();
    delete p;
}
```

**Output:** A ~A

* Dynamic allocation
* Constructor called
* delete triggers destructor
* Proper cleanup

---

### 40.

```cpp
#include <iostream>
using namespace std;
class A {
public:
    A() { cout << "A "; }
};
int main() {
    A *p = new A[2];
}
```

**Output:** A A

* Array allocation
* Constructor called twice
* No delete[] used
* Potential leak

---

# 🔥 SECTION 8: LAMBDA, AUTO, MOVE

### 41.

```cpp
#include <iostream>
using namespace std;
int main() {
    auto x = 5.5;
    cout << typeid(x).name();
}
```

**Output:** double (compiler dependent)

* auto deduces type
* Floating → double
* Compile-time inference
* Cleaner code

---

### 42.

```cpp
#include <iostream>
using namespace std;
int main() {
    auto f = [](){ return 10; };
    cout << f();
}
```

**Output:** 10

* Lambda function
* Anonymous function
* Called like normal
* Inline definition

---

### 43.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    auto f = [x]() { return x + 5; };
    cout << f();
}
```

**Output:** 15

* Capture by value
* Copy of x
* No modification
* Safe usage

---

### 44.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    auto f = [&x]() { x += 5; return x; };
    cout << f();
}
```

**Output:** 15

* Capture by reference
* Modifies original x
* Shared memory
* Powerful feature

---

### 45.

```cpp
#include <iostream>
using namespace std;
int main() {
    string s1 = "Hello";
    string s2 = move(s1);
    cout << s1 << " " << s2;
}
```

**Output:** (empty) Hello

* Move semantics
* Ownership transferred
* s1 becomes empty
* s2 holds data

---

# 🔥 SECTION 9: MISC & EDGE CASES

### 46.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    cout << sizeof(x++);
}
```

**Output:** 4

* sizeof does not evaluate
* No increment happens
* Compile-time operator
* x remains same

---

### 47.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    cout << (true || x++);
}
```

**Output:** 1

* Short-circuit OR
* x++ not executed
* true || anything = true
* x unchanged

---

### 48.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    cout << (false && x++);
}
```

**Output:** 0

* Short-circuit AND
* x++ not executed
* false && anything = false
* Safe evaluation

---

### 49.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout << (x = 10) << " " << x;
}
```

**Output:** 10 10

* Assignment returns value
* x updated
* Expression result used
* Important trap

---

### 50.

```cpp
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout << (x == 5) + (x == 5);
}
```

**Output:** 2

* true = 1
* 1 + 1 = 2
* Boolean arithmetic
* Common trick

---

# 🚀 FINAL TIPS (VERY IMPORTANT)

* Watch undefined behavior carefully
* Focus on pointer increments
* Understand object lifecycle deeply
* Be strong in short-circuit logic

---


* Focus on undefined behavior
* Be careful with increments
* Master pointer arithmetic
* Understand constructor order

---
