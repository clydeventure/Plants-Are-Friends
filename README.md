# Plants-Are-Friends
An Arduino-based planter that lets your plant express their emotions

The program runs using a hygrometer. The hygrometer give a value for the amount of water content in the soil.

Hygrometer is at pin A0

max7219 LED array is connected as follows:

CLK (clock): 10
CS (load pulse): 11
DIN (data in): 12

Refresh rate for hygrometer is 10 seconds (recommended longer delay for better battery life... water doesn't get absorbed that quickly)