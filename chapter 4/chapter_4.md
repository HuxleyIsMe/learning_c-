# Chapter 4 the object lifecycle

The circle of life!! 
And it exist in C++ tooooo

im really excited about this, i seem to like memory. i don't know why, its just blocks filled with blocks not even shiny - well perhaps a little shiny los ghets

ich bin wirklich aufregend uber das, denn ich memory mag. ich wieB nicht warum, es ist nur kleine stucken innerhalb mehr kleine Teil sind nicht schnient weil veiliecht ein bisschen

Ich bin wirklich begeistert davon, weil ich Erinnerungen mag. Ich weiß nicht warum, es sind nur kleine Stücke in kleineren Teilen, die nicht glänzen, vielleicht sind sie ein bisschen

Object = region of storagethat has type and value

begeistert = enthusiastic
davon = of that da von that from
Erinnerungen = memories
Stucke = peices Stuck peice


reserving storage = allocation
releasing storage ( forgetting ) = deallocation


lifetime of an object is once its born via constructor and just before its destructor is called

automatic variables = local variables 

what this means: variables made inside a function only exist in that time and space. auto is not to be confused with our earlier use of auto when declaring var type, its a term used to mean just a forgettable moment.

was bedeut diese: Variables machen hin ein function nur leben in diese zeit und teil.
Was bedeutet das: Innerhalb einer Funktion erstellte Variablen existieren nur in dieser Zeit und diesem Teil.

(das /diese can be used what does this mean what does that mean, leans towards das)

innerhalb -> within
erstellte -> created
bedeutet -> means

> I like C++ so far but i feel some parts of the language and ideas awkwardly overlap each other, like the above use of auto for auto assignment of var types but also used as a term for local vars... also the whole * * situations placing where etc, it feels very much made for one persons idea of logic then something tangible, it would be cool to instead use like - when derefferencing a value or use like local var instead of automatic variables... jsut thoughts and personal opinions

Ok we also have `static` and `extern` keywords.
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

ok im a little locked here, like the i dont quite see throw the syntax which is which - its hard to spot the destructor... oh wait i see it it uses the ~ and same name as the object.

ok its been an hour time for a break we are at page 166

OK so heres some videos on this: 

[memory management](https://www.youtube.com/watch?v=Dkn4EKL2xSE) <-- this was a lil to hard for me right now lets try an easier one then come back and finish this

Characteristics of a Destructor
All the points mentioned below show the characteristics of a destructor:

Destructor has the same name as their class name preceded by a tilde (~) symbol.
It is not possible to define more than one destructor.
The destructor is only one way to destroy the object created by the constructor. Hence, destructor cannot be overloaded.
It cannot be declared static or const.
Destructor neither requires any argument nor returns any value.
It is automatically called when an object goes out of scope. 
Destructor release memory space occupied by the objects created by the constructor.
In destructor, objects are destroyed in the reverse of an object creation.