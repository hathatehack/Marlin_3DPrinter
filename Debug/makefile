################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include som/variants/ST103VB/subdir.mk
-include som/system/stm32f10x/StdPeriphDriver/src/subdir.mk
-include som/system/stm32f10x/DeviceSupport/subdir.mk
-include som/system/stm32f10x/CoreSupport/subdir.mk
-include som/cores/arduino/avr/subdir.mk
-include som/cores/arduino/subdir.mk
-include marlin/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
Marlin_3DPrinter.hex \

SECONDARY_SIZE += \
Marlin_3DPrinter.siz \


# All Target
all: Marlin_3DPrinter.elf secondary-outputs

# Tool invocations
Marlin_3DPrinter.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -T "../ldscripts/libs.ld" -T "../ldscripts/mem.ld" -T "../ldscripts/sections.ld" -Xlinker --gc-sections -Xlinker --cref -Xlinker --check-sections -Xlinker --unresolved-symbols=report-all -Xlinker --warn-common -Xlinker --warn-section-align -Xlinker --warn-unresolved-symbols -Wl,-Map,"Marlin_3DPrinter.map" -v -o "Marlin_3DPrinter.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Marlin_3DPrinter.hex: Marlin_3DPrinter.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O ihex "Marlin_3DPrinter.elf"  "Marlin_3DPrinter.hex"
	@echo 'Finished building: $@'
	@echo ' '

Marlin_3DPrinter.siz: Marlin_3DPrinter.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "Marlin_3DPrinter.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS)$(CPP_DEPS) Marlin_3DPrinter.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
