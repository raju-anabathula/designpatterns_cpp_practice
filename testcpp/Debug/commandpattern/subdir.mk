################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../commandpattern/ICommand.cpp \
../commandpattern/Invoker.cpp \
../commandpattern/Reciever.cpp \
../commandpattern/RedoCommand.cpp \
../commandpattern/UndoCommand.cpp 

OBJS += \
./commandpattern/ICommand.o \
./commandpattern/Invoker.o \
./commandpattern/Reciever.o \
./commandpattern/RedoCommand.o \
./commandpattern/UndoCommand.o 

CPP_DEPS += \
./commandpattern/ICommand.d \
./commandpattern/Invoker.d \
./commandpattern/Reciever.d \
./commandpattern/RedoCommand.d \
./commandpattern/UndoCommand.d 


# Each subdirectory must supply rules for building sources it contributes
commandpattern/%.o: ../commandpattern/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


