data = open('/Users/nolanpestano/Documents/GitHub/CMP_SC1050/old_aoc/2022/day2/input.txt', 'r').read().split('\n')
print(data)


x_axis, y_axis = 0,0

for point in data:
    
    if point.split(' ')[0] == "forward": ## x axis increases by n
        print(f"forward by {int(point.split(' ')[1])}")
        x_axis += int(point.split(' ')[1])
    
    elif point.split(' ')[0] == "up": #y axis increases by n
        y_axis = y_axis + int(point.split(' ')[1])
        
    elif point.split(' ')[0] == "down":
        y_axis = y_axis - int(point.split(' ')[1])


print(f"x axis: {x_axis}, y axis: {y_axis}")
print(f"final answer = {x_axis * y_axis}")