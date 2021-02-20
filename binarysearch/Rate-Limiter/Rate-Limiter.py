# https://helloacm.com/design-a-rate-limiter-in-python/
# https://binarysearch.com/problems/Rate-Limiter
# EASY, QUEUE

class RateLimiter:
    def __init__(self, expire):
        self.w = expire
        self.d = defaultdict(deque)

    def limit(self, uid, timestamp):
        while len(self.d[uid]) > 0 and timestamp - self.d[uid][0] >= self.w:
            self.d[uid].popleft()
        ans = len(self.d[uid]) > 0
        if not ans:
            self.d[uid].append(timestamp)
        return ans
