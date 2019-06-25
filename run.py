import os
import pyfiglet
import time
import random
import RPi.GPIO as GPIO
from pydub import AudioSegment
from pydub.playback import play
GPIO.setmode(GPIO.BCM)

GPIO.setup(23, GPIO.IN)

def randomAudio():
    zahl = random.randint(1, 4)
    if zahl == 1:
        sound = AudioSegment.from_wav("fuck.wav")
    elif zahl == 2:
        sound = AudioSegment.from_wav("marianne.wav")
    elif zahl == 3:
        sound = AudioSegment.from_wav("help.wav")
    elif zahl == 4:
        sound = AudioSegment.from_wav("wtf.wav")
    play(sound)

def welcome():
    ascii_banner = pyfiglet.figlet_format("Yallah verpiss dich, wir reden Montag oder so")
    print(ascii_banner)

def aus():
    os.system("sudo shutdown now")

def cam():
    os.system("sudo service motion start")
    os.system("sudo motion")
    print("Der Stream ist unter Port 8081 erreichbar")
    time.sleep(10)
    cls()
    wahl()

def cls():
    os.system("clear")

def audio():
    cls()
    print("Drücken Sie STRG+C zum beenden: ")
    while True:
        while GPIO.input(23) == GPIO.LOW:
            randomAudio()

def wahl():
    auswahl = input("(K)amera-Feed starten \n(A)udio-service starten \n(B)eenden?: ")
    if auswahl == "K":
        cam()
    elif auswahl == "A":
        audio()
    elif auswahl == "B":
        aus()
    elif auswahl == "k":
        cam()
    elif auswahl == "a":
        audio()
    elif auswahl == "b":
        aus()
    else:
        print("ungültige Eingabe")
        time.sleep(1)
        cls()
        wahl()

welcome()
wahl()
