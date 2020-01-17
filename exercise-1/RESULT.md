global shared int i = 0

main:
    spawn thread_1
    spawn thread_2
    join all threads (wait for them to finish)
    print i

thread_1:
    do 1_000_000 times:
        i++
thread_2:
    do 1_000_000 times:
        i--
       
       
       
In this code, a variable that is shared between two threads is incremented in one thread,
and decremented in the other. The threads try to update i simultaneously, and thus i is not
correctly modified.

Had we used versions of Dijkstras Sephamores wait and signal, the two threads would have had to wait for eachother
to finish decrementing/incrementing.
