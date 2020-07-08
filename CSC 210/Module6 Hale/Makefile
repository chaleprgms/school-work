Projectile: Proj6.o Projectile.o
	g++ proj6.o Projectile.o -o Projectile

proj6.o: proj6.cpp Projectile.hpp
	g++ -c proj6.cpp

Projectile.o: Projectile.cpp  Projectile.hpp
	g++ -c Projectile.cpp 

clean:
	rm *.o Projectile