v 20130925 2
C 40000 40000 0 0 0 title-B.sym
T 50000 40700 9 10 1 0 0 0 1
Mercury Switch Sensor
T 53900 40100 9 10 1 0 0 0 1
Glenn Bell
T 53900 40400 9 10 1 0 0 0 1
1
T 50700 40100 9 10 1 0 0 0 1
1
T 51700 40100 9 10 1 0 0 0 1
1
C 44900 48600 1 270 0 connector3-1.sym
{
T 45800 46800 5 10 0 0 270 0 1
device=CONNECTOR_3
T 46000 48600 5 10 0 1 270 0 1
refdes=CONN?
}
B 44900 48600 1000 1500 3 0 0 0 -1 -1 0 -1 -1 -1 -1 -1
T 45600 48900 9 10 1 0 270 0 1
S
T 45000 48900 9 10 1 0 270 0 1
-
T 45300 48900 9 10 1 0 270 0 1
+
C 50900 43600 1 90 0 header40-2.sym
{
T 42400 43850 5 10 0 1 90 0 1
device=HEADER40
T 42800 44100 5 10 1 1 90 0 1
refdes=GPIO
}
N 43500 46100 45400 46100 4
N 45400 46100 45400 46900 4
N 43500 46100 43500 45000 4
N 45700 46900 45700 46300 4
N 45700 46300 49900 46300 4
N 49900 46300 49900 45000 4
C 50400 49000 1 90 0 led-2.sym
{
T 50100 49800 5 10 1 1 90 0 1
refdes=D1
T 49800 49100 5 10 0 0 90 0 1
device=LED
}
C 52300 48900 1 90 0 led-2.sym
{
T 52000 49700 5 10 1 1 90 0 1
refdes=D2
T 51700 49000 5 10 0 0 90 0 1
device=LED
}
C 50400 48100 1 90 0 resistor-1.sym
{
T 50000 48400 5 10 0 0 90 0 1
device=RESISTOR
T 50100 48400 5 10 1 1 90 0 1
refdes=R1
T 50700 48300 5 10 1 1 90 0 1
value=1K Ω
}
C 52300 48000 1 90 0 resistor-1.sym
{
T 51900 48300 5 10 0 0 90 0 1
device=RESISTOR
T 52000 48300 5 10 1 1 90 0 1
refdes=R2
T 52600 48200 5 10 1 1 90 0 1
value=1K Ω
}
N 52200 49800 52200 50400 4
N 52200 50400 43900 50400 4
N 43900 50400 43900 45000 4
N 45100 46900 43900 46900 4
N 50300 49900 50300 50400 4
N 50300 48100 50300 45000 4
N 52200 48000 52200 45000 4
N 52200 45000 50700 45000 4
