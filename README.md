# Motortreiberplatine
# ⚡ Universelle Motortreiberplatine

Eine vielseitig einsetzbare Steuerplatine für Schrittmotoren (DRV8825), optimiert für die Integration mit einem Arduino UNO, externen Bedienelementen (Potentiometer, Taster) und einer Display-Ausgabe.

---

## 📋 Stückliste (Bill of Materials)

Hier findest du alle elektronischen Komponenten, die für den Aufbau der Platine benötigt werden.

| Status | Bauteil (Designator) | Beschreibung | Menge | Gehäuse / Footprint |
| :---: | :--- | :--- | :---: | :--- |
| 🧠 | **Arduino UNO (A1)** | Steuerzentrale (Mikrocontroller-Board) | 1 | `Arduino_UNO_R2` |
| 🔌 | **DRV8825 (A2, A3)** | Schrittmotortreiber (Pololu-Breakout) | 2 | `Breakout-16_15.2x20.3mm` |
| 🔋 | **L7805 (U1)** | 5V Linear-Spannungsregler | 1 | `TO-220-3_Vertical` |
| ⚡ | **C_Polarized (C1, C2)**| Elektrolytkondensator (Stützkondensator) | 2 | `Radial_D8.0mm_P5.00mm` |
| 📟 | **LCD-Connector (J10)**| Buchsenleiste für das I2C-Display | 1 | `PinSocket_1x04_P2.54mm_V` |
| 🌀 | **Lüfter (J11)** | Stiftleiste für den Gehäuselüfter | 1 | `PinHeader_1x02_P2.54mm_V` |
| ⚙️ | **Microstepping (J2,J3,J6,J7)**| Jumper-Stiftleisten für Schrittauflösung | 4 | `PinHeader_1x03_P2.54mm_V` |
| 🏎️ | **Motor (J1, J5)** | Stiftleiste für Schrittmotor-Anschluss | 2 | `PinHeader_1x04_P2.54mm_V` |
| 🔌 | **Power In (J4)** | Stiftleiste für die Stromversorgung | 1 | `PinHeader_1x02_P2.54mm_V` |
| 🎛️ | **Poti (J8)** | Stiftleiste für Drehzahl-Potentiometer | 1 | `PinHeader_1x03_P2.54mm_V` |
| 🔘 | **Taster (J9)** | Stiftleiste für Start/Stopp-Taster | 1 | `PinHeader_1x02_P2.54mm_V` |

---

## 🛠️ Platinen-Layout (PCB Views)

Hier sind die 2D/3D-Renderings der gefertigten Motortreiberplatine. Die Leiterbahnen wurden für die Ströme der Schrittmotoren optimiert ausgelegt.

| Ansicht Oben (Top Component Side) | Ansicht Unten (Bottom Solder Side) |
| :---: | :---: |
| ![Platine Oben](https://github.com/Linu-Tec/Motortreiberplatine/blob/main/production/PCB%20Oben.jpg) | ![Platine Unten](https://github.com/Linu-Tec/Motortreiberplatine/blob/main/production/PCB%20Unten.jpg) |

---

## ⚙️ Microstepping-Konfiguration

Der Schrittmotortreiber DRV8825 unterstützt verschiedene Schrittauflösungen. Über die Jumper-Leisten `J2, J3, J6, J7` lässt sich das Verhalten anpassen:

| Auflösung | Jumper M0 (1) | Jumper M1 (2) | Jumper M2 (3) |
| :--- | :---: | :---: | :---: |
| Vollschritt (Full step) | LOW (off) | LOW (off) | LOW (off) |
| Halbschritt (Half step) | HIGH (on) | LOW (off) | LOW (off) |
| 1/4 Schritt | LOW (off) | HIGH (on) | LOW (off) |
| 1/8 Schritt | HIGH (on) | HIGH (on) | LOW (off) |
| 1/16 Schritt | LOW (off) | LOW (off) | HIGH (on) |
| **1/32 Schritt (Empfohlen)** | **HIGH (on)** | **HIGH (on)** | **HIGH (on)** |

---

## 📂 Repository-Struktur

* `/production` - Enthält die fertigen Produktionsdaten (Gerber-Dateien, NC-Drill).
* `/code` - Quellcode-Beispiele für die Inbetriebnahme.
* `/Platine` - KiCad-Projekt- oder Bilddaten der Leiterplatte.

---


## ⚡ Kalibrierung: Motorstrom einstellen ($V_{ref}$)

Bevor du die Motoren dauerhaft betreibst, musst du den maximalen Strom am winzigen Drehpotentiometer des DRV8825-Treibers einstellen. Ein zu hoher Strom überhitzt Treiber und Motoren; ein zu niedriger Strom sorgt für Schrittverluste.

### 📐 Formel für den DRV8825:
$$\text{Maximaler Motorstrom } (I_{\text{max}}) = V_{ref} \times 2$$
$$\text{Gegenrechnung: } V_{ref} = \frac{I_{\text{max}}}{2}$$

*Beispiel:* Wenn dein Schrittmotor für **1,0 A** pro Phase ausgelegt ist, solltest du den Treiber auf eine Referenzspannung von **0,5 V** einstellen.

### 🛠️ Schritt-für-Schritt Anleitung:
1. Schließe die Logikspannung (USB am Arduino) an, aber lass die Hauptstromversorgung ($12\text{V}/24\text{V}$) noch **aus**.
2. Nimm ein Multimeter und stelle es auf **Gleichspannung (V DC)** ein.
3. Verbinde die **schwarze Messspitze (COM)** mit einem GND-Pin der Platine.
4. Setze die **rote Messspitze vorsichtig** auf das kleine Metall-Drehpotentiometer des DRV8825-Treiberbausteins.
5. Lies den Wert auf dem Multimeter ab ($V_{ref}$).
6. Drehe mit einem passenden Schraubendreher (am besten aus Keramik oder isoliert) **ganz vorsichtig** am Potentiometer, bis dein Zielwert (z.B. $0{,}5\text{ V}$) erreicht ist.

---

## 📝 Lizenz

Dieses Projekt steht unter der **MIT-Lizenz**. Genauere Informationen findest du in der Datei `LICENSE`.


