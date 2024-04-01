################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ratedplayer.cpp \
../src/tabtenn0.cpp \
../src/usett0.cpp 

CPP_DEPS += \
./src/ratedplayer.d \
./src/tabtenn0.d \
./src/usett0.d 

OBJS += \
./src/ratedplayer.o \
./src/tabtenn0.o \
./src/usett0.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ratedplayer.d ./src/ratedplayer.o ./src/tabtenn0.d ./src/tabtenn0.o ./src/usett0.d ./src/usett0.o

.PHONY: clean-src

