MyProject : blackbox.o blackbox.c
	gcc blackbox.o -o blackbox
	./a.exe
MyProject : blackbox.c
	gcc -c blackbox.c -o blackbox.o
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc blackbox.c -s WASM=1 -o project.html
	npm i http-server -g
runserver:
	  http-server
	  
