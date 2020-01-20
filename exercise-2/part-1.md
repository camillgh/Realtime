What is an atomic operation?

An atomic operation is one that is independent of all other activities, thus, it 
does not interact with the system from start of the action until it finishes; no information is passed
between the action and the system.



What is a semaphore?

A semaphore is used to hold or give access to global variables or other resources from a multitasking system,such as a system with multiple threads.



What is a mutex?
A mutex is similar to a semaphore, in that it allowes multiple tasks to run at the same time and for instance use the same global variables, nonsimultaneous. Tasks can "lock" a variable from other threads while it is using it.




What is the difference between a mutex and a binary semaphore?
A mutex is similar to a binary semaphore, other it could only be unlocked from the task that locked it.




What is a critical section?

The critical section of a program is where the shared resources of a multitasking system need to be protected
so that it avoids concurrent access.
A critical section could access a shared resource that wouldn't have performed correctly if it had been accessed by numerous concurrent tasks.




What is the difference between race conditions and data races?

Race conditions are the situations that occur when the result of a task depends on the
timing or sequence of other tasks that are uncontrollable; we don't know when they are finished.  

Data races are the situations that occur when two tasks are concurrently accessing a shared resource simultaneously, and at least one of the tasks try to modify the resource.




List some advantages of using message passing over lock-based synchronization primitives.

Message passing prevents other threads from modifying eachothers data.
Hasn't the concurrency issues that will happen with parallell lock-based syncronization.




List some advantages of using lock-based synchronization primitives over message passing.

message passing is useful for exchanging smaller amounts of data, because no conflicts need be avoided. It's much easier to implement than is shared memory for intercomputer communication. Also, as you've already noticed, message passing has the advantage that application developers don't need to worry about the details of protections like shared memory.

Shared memory allows m-aximum speed and convenience of communication, as it can be done at memory speeds when within a computer. Shared memory is usually faster than message passing, as message-passing are typically implemented using system calls and thus require the more time-consuming tasks of kernel intervention. In contrast, in shared-memory systems, system calls are required only to establish shared-memory regions. Once established, all access are treated as normal memory accesses w/o extra assistance from the kernel.


It's a pretty simple difference. In a shared memory model, multiple workers all operate on the same data. This opens up a lot of the concurrency issues that are common in parallel programming.

Message passing systems make workers communicate through a messaging system. Messages keep everyone seperated, so that workers cannot modify each other's data.

By analogy, lets say we are working with a team on a project together. In one model, we are all crowded around a table, with all of our papers and data layed out. We can only communicate by changing things on the table. We have to be careful not to all try to operate on the same piece of data at once, or it will get confusing and things will get mixed up.

In a message passing model, we all sit at our desks, with our own set of papers. When we want to, we can pass a paper to someone else as a "message", and that worker can now do what they want with it. We only ever have access to whatever we have in front of us, so we never have to worry that someone is going to reach over and change one of the numbers while we are in the middle of summing them up.