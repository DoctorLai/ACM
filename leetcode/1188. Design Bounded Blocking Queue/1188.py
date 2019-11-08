# https://helloacm.com/how-to-design-a-design-bounded-blocking-queue-in-python-using-threading-library/
# https://leetcode.com/problems/design-bounded-blocking-queue/
# MEDIUM, THREADING

import threading
import collections
 
class BoundedBlockingQueue(object):
    def __init__(self, capacity: int):
        self.pushing = threading.Semaphore(capacity)
        self.pulling = threading.Semaphore(0)
        self.data = collections.deque()
 
    def enqueue(self, element: int) -> None:
        self.pushing.acquire()
        self.data.append(element)
        self.pulling.release()
 
    def dequeue(self) -> int:
        self.pulling.acquire()
        self.pushing.release()
        return self.data.popleft()
        
    def size(self) -> int:
        return len(self.data)
