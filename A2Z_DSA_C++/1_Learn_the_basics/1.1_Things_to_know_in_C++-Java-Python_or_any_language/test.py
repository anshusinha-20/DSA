import time

start = time.time()

for _ in range(1000000000):
    pass

end = time.time()

print(f'{end - start}s') # 27.341826915740967s