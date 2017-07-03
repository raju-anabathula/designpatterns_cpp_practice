################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../iteratorpattern/ArtsStream.cpp \
../iteratorpattern/IIterator.cpp \
../iteratorpattern/IStream.cpp \
../iteratorpattern/ScienceStream.cpp 

OBJS += \
./iteratorpattern/ArtsStream.o \
./iteratorpattern/IIterator.o \
./iteratorpattern/IStream.o \
./iteratorpattern/ScienceStream.o 

CPP_DEPS += \
./iteratorpattern/ArtsStream.d \
./iteratorpattern/IIterator.d \
./iteratorpattern/IStream.d \
./iteratorpattern/ScienceStream.d 


# Each subdirectory must supply rules for building sources it contributes
iteratorpattern/%.o: ../iteratorpattern/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


