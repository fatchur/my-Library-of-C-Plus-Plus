## C and C++ Note


### Array
- array declaration
```c
int int my_array[5];
```
- array assignment
```c
int int my_array[5] = {1, 2, ,3 ,4, 5};
my_array[0] = -1;
```
- example
```c
#include <stdio.h>

int main()
{
    int my_array[5] = {1, 2, ,3 ,4, 5};
    printf("%d", my_array[0]);
    return 0;
};
```

### Structure
- structure example
```c
struct MyStructure {
    int a;
    float b;
}
```
- structure declaration
```c
struct MyStructure structureExample;
```
- structure value assignment
```c
structureExample.a = 0;
structureExample.b = 1;
```
- array of structure
```c
struct MyStructure structureExample[10];
```


### Pointer (* => value, & => address)
the benefit of pointer: accesing heap, accesing devices, and 
- example:
```c
int main()
{ 
    int a = 10: // assume a is save at addres: 200
    int *p;
    p = &a;

    // so here a = 10
    // a saved at address: 200
    // p is the address of a (&)
    // so *p is 10
};
```


