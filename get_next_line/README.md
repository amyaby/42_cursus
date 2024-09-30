The goal of the get_next_line project is to create a function called get_next_line(int fd) that reads a line from a file descriptor (fd) each time it is called. You need to manage the reading in a way that each time the function is called, it returns one line until there’s nothing left to read.
------ --------  ----- --------- ----------   -----
db ghadi n9raw 7orouf yak w ghadi n7oto dakchi li 9rina f wa7ed l buffer li allocinah flmemory 
ma 7adna ba9i ma wsalna la fin dyal file
ghadi nb9aw n9raw dakchi yak puis n concatiniw kola kelma 9rinaha 9bel m3a the next word li 9rina using a static variable 7it howa li ghadi ykeepi track puis mora kola concat ghadi n7oto the last conctinated string
------ --------  ----- --------- ----------   -----
The goal of get_next_line is to read a file descriptor (fd) line-by-line.
You need to manage the reading from the file, storing the data that isn’t yet returned, and extracting each line.
**Core Functions:**

**Buffer Allocation:** Allocate a buffer to read data.
**Read Data:** Read from fd into the buffer.
**Update Leftover:** Keep track of any "leftover" content from a previous read.
**Extract a Line:** Extract one complete line from the leftover content.
**Manage Leftover:** Update the leftover data after extracting a line.