name = 'ic-tester'

src = ['ic-tester/*.c', 'ic-tester/lib/glcd/*.c', 'ic-tester/lib/glcd/controllers/*.c', 'ic-tester/lib/glcd/devices/*.c' ]

mcu = 'atmega32'

defines = ['GLCD_DEVICE_AVR8', 'GLCD_CONTROLLER_PCD8544', 'GLCD_USE_AVR_DELAY', '__DELAY_BACKWARD_COMPATIBLE__', 'F_CPU=11059200']


frequency = 11059200

configurations = {}

for c in range(10, 100, 2):
	sc = str(c)
	cfg = {'name': 'ic-tester-c' + sc, 'defines': ['DISPLAY_CONTRAST=' + sc]}
	configurations['contrast-' + sc] = cfg
