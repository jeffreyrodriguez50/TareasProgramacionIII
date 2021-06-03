#include <string>
using std::string;

class apartamento: public hospedaje{
	
	int tiempo;
	
	public:
		void setTiempo(int _tiempo){
			tiempo = _tiempo;
		}
		int getTiempo(){
			return tiempo;
		}
};
