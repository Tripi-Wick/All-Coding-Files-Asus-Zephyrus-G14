def getMinTime(n, cache):
    from collections import Counter
    
    service_count = Counter(cache)
    min_time = 0
    
    for count in service_count.values():
        if count == 1:
            min_time += 2
        else:
            min_time += 2 + (count - 1)
    
    return min_time