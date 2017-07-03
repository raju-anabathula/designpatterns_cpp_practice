################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../observerpattern/FemaleObserver.cpp \
../observerpattern/IObserver.cpp \
../observerpattern/ISubject.cpp \
../observerpattern/MaleObserver.cpp \
../observerpattern/SuperStar.cpp 

OBJS += \
./observerpattern/FemaleObserver.o \
./observerpattern/IObserver.o \
./observerpattern/ISubject.o \
./observerpattern/MaleObserver.o \
./observerpattern/SuperStar.o 

CPP_DEPS += \
./observerpattern/FemaleObserver.d \
./observerpattern/IObserver.d \
./observerpattern/ISubject.d \
./observerpattern/MaleObserver.d \
./observerpattern/SuperStar.d 


# Each subdirectory must supply rules for building sources it contributes
observerpattern/%.o: ../observerpattern/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


