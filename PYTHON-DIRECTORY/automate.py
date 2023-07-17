import random, os

music_dir = '/home/solomon/Music'
songs = os.listdir(music_dir)

song = random.randint(0, len(songs))

print(songs[song])

os.startfile(os.path.join(musicdir, songs[0]))
