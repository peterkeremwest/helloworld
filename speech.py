import pyttsx3

engine = pyttsx3.init()
name = input("Name: ")
engine.say(f"hello, dear {name}")
engine.runAndWait()