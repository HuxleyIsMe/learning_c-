## chapter 2

### Number systems 

Lets talk number systems cos you gotta know emm eeeeey 

Decimal -> our regular gold ten numbers etc - base10 bebe 
Binary -> 2 digit so base 2 
Octal -> base 8 its 8 numeros
hexadecimal -> base 16! hexa and deci so we have 10 numeros 0 - 9 then A -F 

How to convert them! 

[number systems](https://www.youtube.com/watch?v=FFDMzbrEXaE)

binary conversion is wild you just like keep diving it by 2
every time there is a point you turn it into 1 then bame
read from bottom up is the answer.

hm another fun type was the char type, this could be signed
i was kinda bamboozled for why could this be signed

[why the char is signed](https://stackoverflow.com/questions/4337217/difference-between-signed-unsigned-char)

turns out char is a subset the smallest int type so therefor can be signed 
however we will mostly used unsigned

### raw memory 

the Std:byte type enables us to worrk with raw memory this enable bit wise operations  std:: is a namesapce 

## size_t 

this is a special type used to encode objects  its usually equal to unsigned long long

## size of e %zd

> sizeof The unary operator sizeof takes a type operand and returns the size (in bytes) of that type. The sizeof operator always returns a size_t. For example, sizeof(float) returns the number of bytes of storage a float takes.

We have void here 

Arrays same as python/rust

loops like js 

ooh nice for in loop 

for( type: x ) {}

## getting the size of an array: 
Use the sizeof operator to obtain the total size in bytes of an array. You can use a simple trick to determine the number of elements in an array: divide the size of the array by the size of a single constituent element:

## ASCII

so lol this whole time control codes where ascii codes.

## making our own types 

- enumerations
    enums restricted set of possible vals
- classes 
    members share same memory location and unions are dangerous to miss use
- unions 


Ok wow this a is a lot on this chapter 

>C++ object come with a destructor cleanup functions that cleans it all up Defining a destructor is optional. If you do decide to implement a destructor, it must not take any arguments. Examples of actions you might want to take in a destructor include releasing file handles, flushing network sockets, and freeing dynamic objects. If you don’t define a destructor, a default destructor is automatically generated. The default destructor’s behavior is to perform no action. You’ll learn a whole lot more about destructors in “Tracing the Object Life Cycle”.


ooh structs and classes look the same but theres like minute difference a lot to do with visibility:

['differences between struct vs class'](https://www.youtube.com/watch?v=fLgTtaqqJp0)