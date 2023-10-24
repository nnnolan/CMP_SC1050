data = open('/Users/nolanpestano/Documents/GitHub/CMP_SC1050/old_aoc/2022/day1/input.txt', 'r').read().split('\n')
print(data)

count = 0  

for point in range(len(data)):
    
    if data[point] == "149": # first iteration
        pass 
    
    if int(data[point - 1]) < int(data[point]):
        count += 1

print(count)


# ---day 2--- #

count = 0
for point in range(len(data)):
    
    if data[point] == "149" or "163": # first times, we cant get three in a row
        pass 
    
    first_window = int(data[point - 1]) + int(data[point - 2]) + int(data[point - 3]) # first windwo, the previous
    second_window = int(data[point]) + int(data[point - 1]) + int(data[point - 2]) # second window, the current
    
    if first_window < second_window:
        count+=1

print(count)