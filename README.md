# Arduino-Bluetooth-Car
Bluetooth RC-Car,dass über ein Handy gesteuert wird. Für das Informatik-Projekt am Math.-Nat. Gymnasium Mönchengladbach
By Ali,Emil und Jakub

########################

#Raspberry Pi Aufsetzen#

########################
1. Dem Auto Strom geben(Schalter)
2. Am Handy einen Hotspot mit dem Namen "(.)(.)" und dem Passwort "tittengehnimmer" einrichten. Der Raspberry sollte sich damit verbinden.
(SSID und Passwort von Jakub. Emil Distanziert sich hiermit ausdrücklich davon, wurde aber bei einer Demokratischen abstimmung gegen den Vorschlag: SSID=Pi und PW=MNG geschlagen.)
3. Per ssh mit dem Raspberry verbinden (Nutzername: "pi" Passwort:"raspberry")
4. auf dem Raspberry in den Ordner "Informatik" wechseln (cd Informatik/) und die Datei run.py in Python3 starten (python3 run.py (!!! Nicht von dem ASCII-Banner erschrecken lassen, dies ist der Projektname, welcher mir von Ali an einem Samstag Abend vorgeschlagen wurde))
5. Nun zuerst Kamera-Feed starten (k + ENTER oder K + ENTER) und danach Audio-Service starten (a + ENTER oder A + ENTER)
6. In der App die IP-Adresse des Raspberry eingeben(diese kann man z.B mit hilfe eines Netzwerkscanners herausfinden). Der Port ist 8081. (also z.B 192.168.178.xx:8081)
7. Auf den Knopf "URL GO" drücken. nun sollte man das Bild der Kamera sehen.

################################

#Bluetooth Verbindung Aufsetzen#

################################

1. Dem Auto Strom geben(Schalter) (!!! Nicht erforderlich falls Readme von Anfang an befolgt wurde(Siehe "Raspberry Pi Aufsetzen", Schritt 1))
2. Bluetooth auf dem Handy Aktivieren, und mit dem Gerät "HC-05" verbinden. Das Passwort ist "0000" oder "1234"
3. In der App auf das Bluetooth Bild drücken.
4. Nun Sollte sich ein Menü öffnen, bei dem man wieder das Gerät HC-05 auswählt.
5. Nun sollte neben dem Bild ein Grünes "Verbunden" stehen.
6. Nun kann das Auto Fahren. einfach auf die Pfeile drücken.
(Wenn das Gerät schon einmal verbunden war mit dem Handy, muss man nicht mehr den 2. Schritt machen)

#######################

#Diese Repo Beinhaltet#

#######################

1. Diese Readme
2. Einen Arduino Sketch
3. Die APK der App
4. Eine .aia Datei, um auf der MIT Appinventor Seite den Code anzuschauen. (umd dies zu tun muss man sich anmelden und oben bei "Projects", "Import project (.aia) from my computer..." auswählen.
5. Die Python file für den Rasperry Pi
