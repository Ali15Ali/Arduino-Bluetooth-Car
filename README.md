# Arduino-Bluetooth-Car
Bluetooth RC-Car,dass über ein Handy gesteuert wird. Für das Info Projekt am Math.-Nat. Gymnasium Mönchengladbach
By Ali,Emil und Jakub

########################

#Raspberry Pi Aufsetzen#

########################
1. den Pi über ein MicroUSB Kabel Strom geben. Jetzt sollte der Pi hochfahren.
2. Am Handy einen Hotspot mit dem Namen "(.)(.)" und dem Passwort "tittengehnimmer" einrichten. Der Raspberry sollte sich damit verbinden.
(SSID und Passwort von Jakub. Emil Distanziert sich hiermit ausdrücklich davon, wurde aber bei einer Demokratischen abstimmung gegen den Vorschlag: SSID=Pi und PW=MNG geschlagen.)
3. In der App die URL vom Rasperry eingeben(diese kann man z.B mit hilfe eines Netzwerkscanners herausfinden). Der Port ist 8081. (also z.B 192.168.188.xx:8081)
4. Auf den Knopf "URL GO" drücken. nun sollte man das Bild der Kamera sehen.

################################

#Bluetooth Verbindung Aufsetzen#

################################

1. Dem Auto Strom geben(Akku einstecken)
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
