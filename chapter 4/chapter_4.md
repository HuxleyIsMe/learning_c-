# Chapter 4 the object lifecycle

The circle of life!! 
And it exist in C++ tooooo

im really really wierdly excited about this, like i seem to like memory why i dont know its just blocks filled with blocks not even shiny - well actually a little shiny los ghets

Object = region of storagethat has type and value

reserving storage = allocation
releasing storage ( forgetting ) = deallocation


lifetime of an object is once its born via constructor and just before its destructor is called

automatic variables = local variables 

what this means when making a function things used with in them only exist in that time and space. auto is not to be confused with our earlier use of auto when declaring var type, its a term used to mean just a forgettable moment

> I like C++ so far but ifeel some parts of the language and ideas awkwardly overlap each other, like the above use of auto for auto assignment of var types but also used as a term for local vars... also the whole * * situations placing where etc, it feels very much made for one persons idea of logic then something tangible, it would be cool to instead use like - when derefferencing a value or use like local var instead of automatic variables... jsut thoughts and personal opinions

Ok we alos have static and extern keywords.
static goes at global scope
these bebes have static storage duration -> meaning they live while the program lives!
global allows referencing everywhere


local static vars are the same as normal var existing within the function scope 

static members = js static (hmm i should revisit some of the classe static based things in JS its been a while)


## THREADSSSSSS 

AHH now we get exciting!! tweeeelll me more

threads = workers in a kitchen
thread safe code is generally a peice of code that everyone in the kitchen can use safely


oooooh sometimes this can lead to problems because everyones using the same things

i.e. in a kitchen everyones using the same knife but ah nein, its been used to cut meat then veg 
and now youve lost a health food star rating ah boi
best to give everyone there own set of knives so they can keep better track of the hygien
to do this in the code we say thread_local static whatever the var is


but telll me more about threaddddddssssss i am a muse

## dynamic storage duration

we say when and where they are made and terminated
we use a new to specify these ines
"New expressions reate objects of a given typend then return a pointer to a dynamic object."
we use delete to remove it manually
yet the compiler will not typically clean up the memory right away... this can lead to something called 'use after free'
this can lead to red herrings easy to pass mistakes..;. its like wierd i dont wuiote get the point of delete if it doesnt delete right away? like C++ is so anal this feels like a wierd quirk of its behaviour so far, like having a super organized friend but whos always late...

we can have dynamic arrays 
so arrays using the new key word that we can say delete ( that may or may not delete it.... )

when we emply these new individuals we must make sure we have enough memory to pay them all, else we loose all our memory called a memory leak - its kinda like having contractors and a limited budget ( sorry for the capitalism ).

ooooooooo wilddddd most of our operating systems are smart enough to clean left overs up however if we write to the kernal and forget to clean it up we will have to reboot the machine!!

ah im really not enjoying the member lingo, there not a band?! are they?!

## SAME SAME 
- exceptions
- try / catch 
- throw
- subclass / superclass
- inheritance

NEAT the std::exceptiong class comes with premade subclasses for different error types so no need to make out own type of errors! we already have domain_error, Invalid_error,Length
nifty1!! 
I did enjoy but resent making custom JS ones.

we can say noExcept 
meaning do not throw an error even if there is one...

do not throw an exception is a destructor its dangerous
imagine this is like your trying to carry a soul across the river but then you throw an error, like.....
this is a big ah shit mo

descturcotrs are written with the same name as the member but with ~

ok im a little locked here, like the i dont quite see throw the syntax which is which - its hard to spot the destructor...

ok its been an hour time for a break we are at page 166