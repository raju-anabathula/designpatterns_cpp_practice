################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../adapterpattern/ClassAdapter.cpp \
../adapterpattern/IIntegerValue.cpp \
../adapterpattern/IntegerValue.cpp \
../adapterpattern/ObjectAdapter.cpp 

OBJS += \
./adapterpattern/ClassAdapter.o \
./adapterpattern/IIntegerValue.o \
./adapterpattern/IntegerValue.o \
./adapterpattern/ObjectAdapter.o 

CPP_DEPS += \
./adapterpattern/ClassAdapter.d \
./adapterpattern/IIntegerValue.d \
./adapterpattern/IntegerValue.d \
./adapterpattern/ObjectAdapter.d 


# Each subdirectory must supply rules for building sources it contributes
adapterpattern/%.o: ../adapterpattern/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


