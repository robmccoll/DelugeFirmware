
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

