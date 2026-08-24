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

## 📝 Lizenz

Dieses Projekt steht unter der **MIT-Lizenz**. Genauere Informationen findest du in der Datei `LICENSE`.


