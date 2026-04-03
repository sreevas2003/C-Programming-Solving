# 📘 Qualcomm C Preparation – TOP 20 CODING QUESTIONS

---

## 🔥 1. Reverse a String

```c
void reverse(char *str) {
    char *start = str;
    char *end = str;
    while (*end) end++;
    end--;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
```

### ✅ Key Points:

* Two-pointer approach
* In-place reversal
* O(n) complexity
* No extra memory

---

## 🔥 2. Check Power of 2

```c
int isPowerOf2(int n) {
    return (n > 0) && (n & (n - 1)) == 0;
}
```

### ✅ Key Points:

* Bit manipulation trick
* Removes lowest set bit
* O(1) solution
* Very important

---

## 🔥 3. Count Set Bits

```c
int countBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}
```

### ✅ Key Points:

* Brian Kernighan method
* Efficient
* O(set bits)
* Better than naive

---

## 🔥 4. Swap Without Temp

```c
void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
```

### ✅ Key Points:

* XOR trick
* No extra variable
* Memory efficient
* Interview favorite

---

## 🔥 5. Find Missing Number

```c
int findMissing(int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= n; i++) xor1 ^= i;
    for (int i = 0; i < n-1; i++) xor2 ^= arr[i];
    return xor1 ^ xor2;
}
```

### ✅ Key Points:

* XOR cancels duplicates
* No overflow issue
* O(n)
* Efficient

---

## 🔥 6. Reverse Integer

```c
int reverse(int n) {
    int rev = 0;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
```

### ✅ Key Points:

* Uses modulo
* Handles digits
* O(log n)
* Watch overflow

---

## 🔥 7. Check Palindrome String

```c
int isPalindrome(char *str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}
```

### ✅ Key Points:

* Two-pointer technique
* O(n)
* No extra space
* Common

---

## 🔥 8. Find Duplicate Element

```c
int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]);
        if (arr[index] < 0) return index;
        arr[index] = -arr[index];
    }
    return -1;
}
```

### ✅ Key Points:

* Index marking
* No extra memory
* O(n)
* Modifies array

---

## 🔥 9. Implement strcpy()

```c
char* my_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while (*src) *ptr++ = *src++;
    *ptr = '\0';
    return dest;
}
```

### ✅ Key Points:

* Pointer usage
* Null termination
* Classic question
* Important

---

## 🔥 10. Find Maximum Element

```c
int max(int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > m) m = arr[i];
    return m;
}
```

### ✅ Key Points:

* Linear scan
* O(n)
* Simple
* Frequently asked

---

## 🔥 11. Check Anagram

```c
int isAnagram(char *a, char *b) {
    int count[256] = {0};
    for (int i = 0; a[i]; i++) count[a[i]]++;
    for (int i = 0; b[i]; i++) count[b[i]]--;
    for (int i = 0; i < 256; i++)
        if (count[i] != 0) return 0;
    return 1;
}
```

### ✅ Key Points:

* Frequency array
* O(n)
* Efficient
* ASCII based

---

## 🔥 12. Fibonacci (Iterative)

```c
int fib(int n) {
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return n == 0 ? 0 : b;
}
```

### ✅ Key Points:

* Avoid recursion
* O(n)
* Efficient
* Embedded-friendly

---

## 🔥 13. Remove Duplicates (Sorted Array)

```c
int removeDuplicates(int arr[], int n) {
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }
    return j + 1;
}
```

### ✅ Key Points:

* Two-pointer method
* In-place
* O(n)
* Sorted assumption

---

## 🔥 14. First Non-Repeating Character

```c
char firstNonRepeat(char *str) {
    int count[256] = {0};
    for (int i = 0; str[i]; i++) count[str[i]]++;
    for (int i = 0; str[i]; i++)
        if (count[str[i]] == 1) return str[i];
    return '\\0';
}
```

### ✅ Key Points:

* Two-pass approach
* O(n)
* Frequency array
* Common

---

## 🔥 15. Check Prime Number

```c
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
```

### ✅ Key Points:

* Check till √n
* Efficient
* O(√n)
* Common

---

## 🔥 16. Rotate Array

```c
void reverseArr(int arr[], int s, int e) {
    while (s < e) {
        int t = arr[s];
        arr[s++] = arr[e];
        arr[e--] = t;
    }
}

void rotate(int arr[], int n, int k) {
    k %= n;
    reverseArr(arr, 0, n-1);
    reverseArr(arr, 0, k-1);
    reverseArr(arr, k, n-1);
}
```

### ✅ Key Points:

* Reverse technique
* In-place
* O(n)
* Efficient

---

## 🔥 17. Implement memset()

```c
void *my_memset(void *ptr, int val, int n) {
    unsigned char *p = ptr;
    while (n--) *p++ = (unsigned char)val;
    return ptr;
}
```

### ✅ Key Points:

* Byte-wise operation
* Void pointer usage
* Casting required
* Library understanding

---

## 🔥 18. Detect Cycle (Linked List)

```c
int hasCycle(struct Node *head) {
    struct Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    return 0;
}
```

### ✅ Key Points:

* Floyd’s algorithm
* Two-pointer
* O(n)
* No extra space

---

## 🔥 19. Middle of Linked List

```c
struct Node* middle(struct Node *head) {
    struct Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
```

### ✅ Key Points:

* Fast & slow pointer
* Single pass
* Efficient
* Common

---

## 🔥 20. Merge Two Sorted Arrays

```c
void merge(int a[], int b[], int n, int m) {
    int i = n-1, j = m-1, k = n+m-1;
    while (j >= 0) {
        if (i >= 0 && a[i] > b[j])
            a[k--] = a[i--];
        else
            a[k--] = b[j--];
    }
}
```

### ✅ Key Points:

* Start from end
* Avoid overwrite
* O(n+m)
* Efficient

---

# 🧠 FINAL NOTES

* Focus on **bit manipulation + pointers ⭐⭐⭐**
* Practice writing code without IDE
* Be ready to explain logic clearly
* Optimize solutions

---

👉 This is your **Top 20 Coding Questions Document (Qualcomm Ready)**
