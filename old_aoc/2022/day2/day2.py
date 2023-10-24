data = open('/Users/nolanpestano/Documents/GitHub/CMP_SC1050/old_aoc/2022/day2/input.txt', 'r').read().split('\n')
print(len(data))


x_axis = 0
y_axis = 0
test = 0

for point in data:
    
    if point.split(' ')[0] == "forward": ## x axis increases by n
        x_axis += int(point.split(' ')[1])
        test += 1
    
    elif point.split(' ')[0] == "up": #y axis increases by n
        y_axis = y_axis - int(point.split(' ')[1])
        test += 1

        
    elif point.split(' ')[0] == "down":
        y_axis = y_axis + int(point.split(' ')[1])        
        test += 1

    else:
        print("error")
        break

# why is this not working?
# i just had to read the instructions more carefully... up is negative, down is positive whoops
print(f"x axis: {x_axis}, y axis: {y_axis}")
print(f"final answer = {x_axis * y_axis}")


# ----part two---- #

x_axis = 0
y_axis = 0
aim = 0

for point in data:
    
    
    if point.split(' ')[0] == "forward": ## x axis increases by n
        x_axis += int(point.split(' ')[1])
        
        y_axis += int(point.split(' ')[1]) * aim
        
        
    if point.split(' ')[0] == "up":
        aim -= int(point.split(' ')[1])
    
    if point.split(' ')[0] == "down":
        aim += int(point.split(' ')[1])
        
        
print(f"x axis: {x_axis}, y axis: {y_axis}")
print(f"final answer = {x_axis * y_axis}")
