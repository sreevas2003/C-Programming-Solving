# 📘 Qualcomm C Preparation – 50 Tricky Output Questions ⭐⭐⭐

---

## 🔥 1. Pre/Post Increment

```c
#include <stdio.h>
int main() {
    int i = 5;
    printf("%d %d %d", i, i++, ++i);
}
```

### ✅ Key Points:

* Undefined behavior
* Order not guaranteed
* Compiler dependent
* Avoid such code

---

## 🔥 2. Sequence Point

```c
int i = 1;
i = i++ + ++i;
printf("%d", i);
```

### ✅ Key Points:

* Undefined behavior
* Multiple modifications
* No sequence point
* Dangerous

---

## 🔥 3. Pointer Increment

```c
int a[] = {10,20,30};
int *p = a;
printf("%d %d", *p, *p++);
```

### ✅ Key Points:

* *p++ vs (*p)++
* Post increment
* Address moves
* Common trap

---

## 🔥 4. Array Pointer

```c
int a[] = {1,2,3};
printf("%d", *(a+1));
```

### ✅ Key Points:

* a[i] == *(a+i)
* Pointer arithmetic
* Output: 2
* Basic concept

---

## 🔥 5. sizeof vs strlen

```c
char str[] = "Hello";
printf("%lu %lu", sizeof(str), strlen(str));
```

### ✅ Key Points:

* sizeof includes '\0'
* strlen excludes '\0'
* Compile vs runtime
* Important

---

## 🔥 6. Pointer Arithmetic

```c
int a[] = {10,20,30};
int *p = a;
printf("%d", *(p+2));
```

### ✅ Key Points:

* Access third element
* Output: 30
* Pointer indexing
* Important

---

## 🔥 7. Static Variable

```c
void fun() {
    static int x = 0;
    x++;
    printf("%d ", x);
}
int main() {
    fun(); fun(); fun();
}
```

### ✅ Key Points:

* Static retains value
* Output: 1 2 3
* Initialized once
* Important

---

## 🔥 8. Dangling Pointer

```c
int *p;
{
    int x = 10;
    p = &x;
}
printf("%d", *p);
```

### ✅ Key Points:

* Undefined behavior
* x destroyed
* Dangling pointer
* Dangerous

---

## 🔥 9. Double Pointer

```c
int x = 10;
int *p = &x;
int **pp = &p;
printf("%d", **pp);
```

### ✅ Key Points:

* Double dereference
* Output: 10
* Pointer to pointer
* Important

---

## 🔥 10. String Literal

```c
char *str = "Hello";
str[0] = 'h';
printf("%s", str);
```

### ✅ Key Points:

* Undefined behavior
* String literal read-only
* Crash possible
* Important

---

## 🔥 11. Array Size

```c
int arr[5];
printf("%lu", sizeof(arr));
```

### ✅ Key Points:

* Depends on int size
* Usually 20 bytes
* Compile-time
* Important

---

## 🔥 12. Pointer Size

```c
int *p;
printf("%lu", sizeof(p));
```

### ✅ Key Points:

* Address size
* 4 or 8 bytes
* Platform dependent
* Important

---

## 🔥 13. Increment Order

```c
int i = 1;
printf("%d %d", i++, i++);
```

### ✅ Key Points:

* Undefined behavior
* Order unknown
* Compiler dependent
* Avoid

---

## 🔥 14. Struct Padding

```c
struct s { char a; int b; };
printf("%lu", sizeof(struct s));
```

### ✅ Key Points:

* Padding added
* Likely 8 bytes
* Alignment rules
* Important

---

## 🔥 15. Bitwise

```c
int x = 5;
printf("%d", x << 1);
```

### ✅ Key Points:

* Left shift
* Multiply by 2
* Output: 10
* Fast

---

## 🔥 16. Right Shift

```c
int x = 8;
printf("%d", x >> 1);
```

### ✅ Key Points:

* Divide by 2
* Output: 4
* Efficient
* Important

---

## 🔥 17. XOR

```c
int a = 5, b = 5;
printf("%d", a ^ b);
```

### ✅ Key Points:

* a^a = 0
* Output: 0
* Bit trick
* Important

---

## 🔥 18. Function Return

```c
int fun() { return 10; }
printf("%d", fun());
```

### ✅ Key Points:

* Simple return
* Output: 10
* Function call
* Basic

---

## 🔥 19. Pointer Comparison

```c
int a = 10;
int *p = &a;
int *q = &a;
printf("%d", p == q);
```

### ✅ Key Points:

* Same address
* Output: 1
* Pointer compare
* Important

---

## 🔥 20. Array Decay

```c
void fun(int arr[]) {
    printf("%lu", sizeof(arr));
}
```

### ✅ Key Points:

* Array → pointer
* Size lost
* Prints pointer size
* Important

---

## 🔥 21–50 (Compact High-Value Tricky Cases)

### Examples:

* printf("%d", printf("Hello")) → returns count
* int x = 10; printf("%d", ++x + x++) → undefined
* char *p; printf("%d", *p) → undefined
* int a=5; printf("%d", a+++a) → tricky parsing
* int a=0; if(a=1) → assignment, not comparison
* printf("%d", 'A') → ASCII 65
* printf("%d", 'A'+1) → 66
* int x=10; printf("%d", ~x) → bitwise NOT
* int a[]={1,2}; printf("%d", *(a+1)) → 2
* int x=5; printf("%d", x&1) → odd/even
* int x=8; printf("%d", x&(x-1)) → 0
* int x=7; printf("%d", x&(x-1)) → 6
* int a=1; printf("%d", a<<2) → 4
* int a=4; printf("%d", a>>1) → 2
* printf("%d", sizeof('A')) → int size
* char c='A'; printf("%d", c) → 65
* int *p=NULL; printf("%d", *p) → crash
* int x; printf("%d", x) → garbage
* printf("%d", 10/0) → runtime error
* int a[3]; a[5]=10 → UB

### ✅ Key Points:

* Mostly undefined behavior
* Compiler dependent outputs
* Tests deep understanding
* Very important for Qualcomm

---

# 🧠 FINAL NOTES

* Practice these daily ⭐⭐⭐
* Focus on **why output occurs**
* Avoid memorizing blindly
* Explain clearly in interview

---

👉 This is your **MOST IMPORTANT section for Qualcomm**
