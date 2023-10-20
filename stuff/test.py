import pandas as pd


data = open('/Users/nolanpestano/Documents/GitHub/CMP_SC1050/stuff/albums.txt', 'r').read().split('\n')

## get rid of the ranking, ie 953. The Beatles - Abbey Road -> The Beatles - Abbey Road
data = [album.split('. ')[1] for album in data]

## split the artist and album name
# data = [album.split(' - ') for album in data]


better_list = []
for i in range(len(data)):
    data[i] = data[i].split(' - ')
    # print(data[i])
    better_list.append(data[i])


# some issues in the data, find it first
counter = 0
for i in better_list:
    if len(i) != 2:
        print(i)
        counter +=1
print(counter)
print(len(better_list))
# create a dataframe
# df = pd.DataFrame(data, columns = ['artist', 'album'])