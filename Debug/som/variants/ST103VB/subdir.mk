################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../som/variants/ST103VB/variant.cpp 

OBJS += \
./som/variants/ST103VB/variant.o 

CPP_DEPS += \
./som/variants/ST103VB/variant.d 


# Each subdirectory must supply rules for building sources it contributes
som/variants/ST103VB/%.o: ../som/variants/ST103VB/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C++ Compiler'
	arm-none-eabi-g++ -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -Dprintf=iprintf -DARDUINO=10708 -DF_CPU=72000000L -DARDUINO_STM32_F103VB -DARDUINO_ARCH_STM32F10X -DARDUINO_ARCH_STM32 -I"../marlin" -I"../som/variants/ST103VB" -I"../som/cores/arduino" -I"../som/cores/arduino/avr" -I"../som/system/stm32f10x" -I"../som/system/stm32f10x/CoreSupport" -I"../som/system/stm32f10x/DeviceSupport" -I"../som/system/stm32f10x/StdPeriphDriver/inc" -fabi-version=0 -fno-exceptions -fno-rtti -fno-threadsafe-statics -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


