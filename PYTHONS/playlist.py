from pytube import Playlist

link = input("Enter Youtube Playlist URL:")

yt_playlist = Playlist(link)

for videos in yt_playlist.videos:
videos.stream.get_lowest_resolution
