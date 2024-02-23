import os
import qrcode

img = qrcode.make("https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley")

img.save("qr.png", "PNG")

os.system("start qr.png")                       ##### so in Windows OS, we use the command 'start' in lieu of 'open' in UNIX