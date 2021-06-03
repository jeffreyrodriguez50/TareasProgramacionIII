#include <string>
using std::string;

class airbnb: public hospedaje{
	
	int cantidad;
	
	public:
		void setGente(int _cantidad){
			cantidad = _cantidad;
		}
		int getGente(){
			return cantidad;
		}
};
