# Deluge86
#
# Quick concept:
# - Make a version of the software x86_64 compatible 
# - Keep src/*.h/cpp identical
#   - Use #ifdef __arm__ around ASM where necessary
# - Implement an emulation of the hardware interfaces from:
#   {NE10, RTT, drivers, fatfs}
# - Produce a few targets (mostly for faster test / dev cycles):
#   - Automated tests
#   - Desktop version of the software
#     Maybe use SDL for audio I/O UI with image of Deluge
#     Maybe CLI routing of audio / MIDI
#     FatFS to real FS bridge with configurable root
#   - Eventually VSTs to bring Deluge projects into DAWs more quickly / easily?
#
# Explicit Non-goals
# - This should not become a replacement for the hardware
# - Don't make this do anything that cannot be done in hardware
#   (exception for exceeding CPU load capabilities)
# - Don't do anything to accelerate unless necessary for emulation (e.g. don't
#   use ASM on x86 unless we need the cycles to keep up, don't use threads
#   unless it's to emulate asynchronous hardware components, ...)

CPP_SRC=$(wildcard src/*.cpp)
CPP_OBJ=$(subst .cpp,.o,$(subst src/,obj/,$(CPP_SRC)))
INCLUDE=-I src/ -I src/compat/

deluge86: $(CPP_OBJ) 
	$(CC) -o $@ $^

obj:
	mkdir -p obj

obj/%.o: src/%.cpp | obj
	$(CC) -c -o $@ $(INCLUDE) $^

.PHONY: clean
clean:
	rm -rf obj/* deluge86

