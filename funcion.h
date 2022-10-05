#ifndef FUNCION_H
#define FUNCION_H

class Function {
private:
	int x , y;
public:
	Function (int _x, int _y ): x(_x), y(_y) {}
	void setX(int _x){
		x = _x;
	}
	int getX() const{
		return x;
	}
	void setY(int _y){
		y = y;
	}
	int getY() const{
		return y;
	}
	
};

#endif
