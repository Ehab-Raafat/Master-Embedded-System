#@copyright : Michael
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I . 
LIBS=
SRC =$(wildcard *.c)
OBJ= $(SRC:.c=.o)
As =$(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_name=Unit_3_lab4_cortexM4
all:$(Project_name).bin
	@echo ======Build is Done======

%.o:%.c
		 $(CC)gcc.exe -c $(INCS)   $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $(Project_name).elf -Map=Map_file.map
	cp $(Project_name).elf  $(Project_name).axf

$(Project_name).bin: $(Project_name).elf
	 $(CC)objcopy.exe -O binary $< $@




