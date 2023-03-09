Heap Memory

If memory needs to exist for longer than the lifecycle of the function, we must use heap memory.

+ The only way to create heap memory in C++ is with the new operator

The new operator returns a pointer to  the memory string the data - not an instance of the date itself.

The new operator in C++ will always do three things:

+ Allocate memory on the heap for the data structure
+ initialize the data structure
+ Return a pointer to the start of the data structure

The memory is only ever reclaimed by the system when the pointer is passed to the delete operator


nullptr

The C++ keyword nullptr is a pointer that points to the memory address 0x0

+ nullptr represents a pointer to "nowhere"
+ Address 0x0 is reserved and never used by the system
+ Address 0x0 will always generate an "segmentation fault" when accessed
+ Calls to delete 0x0 are ignored


Arrow Operator(->)

When an object is stored via a pointer, access can be made to member functions using the -> operator:

< c->getVolume();
...idential to ...
(*c).getVolume();


