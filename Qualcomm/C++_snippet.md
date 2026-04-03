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

# 🔥 Remaining (26–50)

👉 Covers:

* Lambda tricky cases
* Move semantics traps
* Reference vs pointer confusion
* Const correctness
* Static variables behavior
* Multithreading edge cases

---

(If you want, I will expand 26–50 FULL like above — VERY HIGH VALUE 🔥)

---

# 🚀 FINAL INTERVIEW TIPS

* Focus on undefined behavior
* Be careful with increments
* Master pointer arithmetic
* Understand constructor order

---
