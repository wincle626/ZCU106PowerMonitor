# This is simple app for monitoring power consumption on Xilinx Ultrascale+ ZCU106
## Based on Linux Kernel 4.19 and QT 6.4.0
## Runs on ARM with X11 forward to the host through ssh by just simply execute "./PowerMonitor"
![Alt text](https://github.com/wincle626/ZCU106PowerMonitor/blob/main/figures/Screenshot%202024-03-26%20171243.png)
### Save Figure
Save curretly visiable figure to sd card
### Save Data
Save currently visualized data to sd card
### Open Binary
Select a FPGA configuration binary and configure it
### Power Rail
Select corresponding power rail and restart the visulization
### Voltage Scaling Range 0.65 ~ 0.95
Change the voltage value for a specific power rail or enter a voltage value for it
### Frquency Scaling Factor 0.01 ~ 10
Change the ratio of input clock rate to the FPGA, e.g. if the FPGA is running at 250MHz, factor=0.5 means 125Mhz

## Note that: Due to the fact that ZCU106 and ZCU102 has the same power rail sequence and PS ARM processor, this app can be also used for ZCU102. 
