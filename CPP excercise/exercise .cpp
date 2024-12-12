#include <iostream>;
#include <cstdlib>;


int main() {
	const int vSize = 100;
	float vArrayfloat[vSize];

	std::srand(static_cast<unsigned>(std::time(0)));

	for (unsigned int i = 0; i<vSize; ++i) {
		vArrayfloat[i] = static_cast <float>(std::rand()) / RAND_MAX * 100;
	}
  std::cout<<vArrayfloat<<std::endl;

  std::cout << "The random numbers are:" << std::endl;
  for (unsigned int i = 0; i < vSize; ++i) {
	  std::cout << vArrayfloat[i] << std::endl;
  }
  return 0;
}





