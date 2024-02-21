
refresh:
	cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B build/
build:
	make -C build
run: build
	./build/OpenGLTempl

.PHONY: build run refresh



