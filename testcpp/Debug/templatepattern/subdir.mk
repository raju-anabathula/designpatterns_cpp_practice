################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../templatepattern/CSE.cpp \
../templatepattern/ECE.cpp \
../templatepattern/IBasicEngg.cpp 

OBJS += \
./templatepattern/CSE.o \
./templatepattern/ECE.o \
./templatepattern/IBasicEngg.o 

CPP_DEPS += \
./templatepattern/CSE.d \
./templatepattern/ECE.d \
./templatepattern/IBasicEngg.d 


# Each subdirectory must supply rules for building sources it contributes
templatepattern/%.o: ../templatepattern/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


