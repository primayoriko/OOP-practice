@echo off

g++ driver.cpp Kendaraan.cpp Mobil.cpp Minibus.cpp Bus.cpp KoleksiKendaraan.cpp -o main.exe
main.exe
del main.exe
