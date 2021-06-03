#include <string>
using std::string;

class hotel: public hospedaje{
	
	int comida;
	
	public:
		void setPrecioComida(int precio){
			comida = precio;
		}
		int getPrecioComida(){
			return comida;
		}
};
