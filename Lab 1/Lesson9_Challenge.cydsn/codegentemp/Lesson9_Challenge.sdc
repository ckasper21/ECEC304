# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\cdc75\Desktop\Labs\Lesson9_Challenge.cydsn\Lesson9_Challenge.cyprj
# Date: Tue, 11 Jul 2017 16:19:06 GMT
#set_units -time ns
create_clock -name {Clock_1(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_8}]]
create_clock -name {Clock_2(FFB)} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ff_div_9}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list]
create_generated_clock -name {Clock_3} -source [get_pins {ClockBlock/hfclk}] -edges {1 24001 48001} [list [get_pins {ClockBlock/udb_div_0}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/hfclk}] -edges {1 24001 48001} [list]


# Component constraints for C:\Users\cdc75\Desktop\Labs\Lesson9_Challenge.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\cdc75\Desktop\Labs\Lesson9_Challenge.cydsn\Lesson9_Challenge.cyprj
# Date: Tue, 11 Jul 2017 16:19:05 GMT
