v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 54300 49400 1 180 0 capacitor-2.sym
{
T 54100 48700 5 10 0 0 180 0 1
device=POLARIZED_CAPACITOR
T 54000 48900 5 10 1 1 180 0 1
refdes=C22
T 54100 48500 5 10 0 0 180 0 1
symversion=0.1
T 54000 49600 5 10 1 1 180 0 1
value=1u
}
C 52000 49100 1 0 0 resistor-2.sym
{
T 52400 49450 5 10 0 0 0 0 1
device=RESISTOR
T 52200 49400 5 10 1 1 0 0 1
refdes=R25
T 52200 48900 5 10 1 1 0 0 1
value=3.3k
}
C 51500 49300 1 180 0 resistor-variable-2.sym
{
T 50950 48900 5 10 1 1 180 0 1
refdes=Rlow
T 50700 48400 5 10 0 1 180 0 1
device=VARIABLE_RESISTOR
T 51200 48600 5 10 1 1 90 0 1
value=100k
T 51400 49500 5 10 1 0 180 0 1
var=low
}
C 50600 50100 1 0 0 capacitor-1.sym
{
T 50800 50800 5 10 0 0 0 0 1
device=CAPACITOR
T 50800 51000 5 10 0 0 0 0 1
symversion=0.1
T 50900 50600 5 10 1 1 0 0 1
refdes=C23
T 50900 49900 5 10 1 1 0 0 1
value=100n
}
C 48500 50200 1 0 0 resistor-2.sym
{
T 48900 50550 5 10 0 0 0 0 1
device=RESISTOR
T 48700 50500 5 10 1 1 0 0 1
refdes=R31
T 48700 50000 5 10 1 1 0 0 1
value=3.3k
}
C 51200 47400 1 90 0 capacitor-1.sym
{
T 50500 47600 5 10 0 0 90 0 1
device=CAPACITOR
T 50700 47700 5 10 1 1 90 0 1
refdes=C24
T 50300 47600 5 10 0 0 90 0 1
symversion=0.1
T 51400 47700 5 10 1 1 90 0 1
value=10n
}
C 51100 46100 1 90 0 resistor-2.sym
{
T 50750 46500 5 10 0 0 90 0 1
device=RESISTOR
T 50800 46300 5 10 1 1 90 0 1
refdes=R29
T 51300 46300 5 10 1 1 90 0 1
value=100k
}
C 48700 48800 1 180 0 opamp-1.sym
{
T 48000 48000 5 10 0 0 180 0 1
device=OPAMP
T 48000 47400 5 10 0 0 180 0 1
symversion=0.1
T 48700 48800 5 10 0 1 180 0 1
value=Vcc=10,Vee=-10,A=1e5
T 48100 48800 5 10 1 1 180 0 1
refdes=U7
}
C 48000 49100 1 0 0 vcc-1.sym
{
T 48000 49100 5 10 0 0 0 0 1
device=POWER
T 48000 49100 5 10 0 0 0 0 1
refdes=Vcc6
T 48300 49100 5 10 1 1 0 0 1
value=9V
}
C 48000 47400 1 0 0 ground.sym
C 49000 48400 1 270 0 vdd-1.sym
{
T 49000 48400 5 10 0 0 270 0 1
device=POWER
T 49000 48400 5 10 0 0 270 0 1
refdes=Vdd11
T 49000 48100 5 10 1 1 270 0 1
value=4.5V
}
C 51500 45400 1 0 0 resistor-2.sym
{
T 51900 45750 5 10 0 0 0 0 1
device=RESISTOR
T 51700 45700 5 10 1 1 0 0 1
refdes=R26
T 51700 45200 5 10 1 1 0 0 1
value=1M
}
C 53000 44300 1 90 0 resistor-2.sym
{
T 52650 44700 5 10 0 0 90 0 1
device=RESISTOR
T 52700 44500 5 10 1 1 90 0 1
refdes=R27
T 53200 44500 5 10 1 1 90 0 1
value=3.3k
}
C 50500 43800 1 0 0 resistor-variable-2.sym
{
T 51050 44200 5 10 1 1 0 0 1
refdes=Rhi
T 51300 44700 5 10 0 1 0 0 1
device=VARIABLE_RESISTOR
T 50800 44500 5 10 1 1 270 0 1
value=100k
T 50600 43600 5 10 1 0 0 0 1
var=hi
}
C 50500 42600 1 0 0 capacitor-1.sym
{
T 50700 43300 5 10 0 0 0 0 1
device=CAPACITOR
T 50800 43100 5 10 1 1 0 0 1
refdes=C26
T 50700 43500 5 10 0 0 0 0 1
symversion=0.1
T 50800 42400 5 10 1 1 0 0 1
value=4.7n
}
C 48900 43800 1 0 0 resistor-2.sym
{
T 49300 44150 5 10 0 0 0 0 1
device=RESISTOR
T 49100 44100 5 10 1 1 0 0 1
refdes=R28
T 49100 43600 5 10 1 1 0 0 1
value=3.3k
}
C 48800 44900 1 0 0 capacitor-1.sym
{
T 49000 45600 5 10 0 0 0 0 1
device=CAPACITOR
T 49100 45400 5 10 1 1 0 0 1
refdes=C28
T 49000 45800 5 10 0 0 0 0 1
symversion=0.1
T 49100 44700 5 10 1 1 0 0 1
value=22n
}
C 48800 46000 1 0 0 capacitor-1.sym
{
T 49000 46700 5 10 0 0 0 0 1
device=CAPACITOR
T 49100 46500 5 10 1 1 0 0 1
refdes=C27
T 49000 46900 5 10 0 0 0 0 1
symversion=0.1
T 49100 45800 5 10 1 1 0 0 1
value=120p
}
C 48900 47000 1 0 0 resistor-2.sym
{
T 49300 47350 5 10 0 0 0 0 1
device=RESISTOR
T 49100 47300 5 10 1 1 0 0 1
refdes=R30
T 49100 46800 5 10 1 1 0 0 1
value=1M
}
C 51200 44500 1 90 0 capacitor-1.sym
{
T 50500 44700 5 10 0 0 90 0 1
device=CAPACITOR
T 50300 44700 5 10 0 0 90 0 1
symversion=0.1
T 50700 44800 5 10 1 1 90 0 1
refdes=C25
T 51400 44800 5 10 1 1 90 0 1
value=1n
}
N 51000 44500 51000 44400 4
N 52900 44300 52900 43900 4
N 52900 43900 51400 43900 4
N 50500 43900 49800 43900 4
N 50500 42800 50200 42800 4
N 50200 42800 50200 43900 4
N 51400 42800 51800 42800 4
N 51800 42800 51800 43900 4
N 49700 45100 50200 45100 4
N 50200 45100 50200 43900 4
N 48900 43900 48500 43900 4
N 48500 43900 48500 47100 4
N 48500 45100 48800 45100 4
N 48500 46200 48800 46200 4
N 49400 50300 50600 50300 4
N 50600 49200 50300 49200 4
N 50300 49200 50300 50300 4
N 51500 49200 52000 49200 4
N 51500 50300 51800 50300 4
N 51800 50300 51800 49200 4
N 48200 49100 48200 48800 4
N 48200 48000 48200 47700 4
N 52900 49200 53400 49200 4
N 51000 48700 51000 48300 4
N 51000 47400 51000 47000 4
N 51000 45400 51000 46100 4
N 51000 45500 51500 45500 4
N 52900 45200 52900 49200 4
N 52900 45500 52400 45500 4
N 48700 48200 49000 48200 4
N 47300 47100 48900 47100 4
N 49900 45500 49900 48600 4
N 49900 45500 51000 45500 4
N 49700 46200 49900 46200 4
N 49800 47100 49900 47100 4
N 49900 48600 48700 48600 4
N 47300 47100 47300 50300 4
N 47300 48400 47700 48400 4
N 47300 50300 48500 50300 4
C 46800 48500 1 180 0 output-1.sym
{
T 46700 48200 5 10 0 0 180 0 1
device=OUTPUT
T 46000 48500 5 10 1 1 180 0 1
refdes=OUT1
}
N 46800 48400 47300 48400 4
C 55400 49300 1 180 0 input-1.sym
{
T 55400 49000 5 10 0 0 180 0 1
device=INPUT
T 55700 49300 5 10 1 1 180 0 1
refdes=IN1
}
N 54300 49200 54600 49200 4
