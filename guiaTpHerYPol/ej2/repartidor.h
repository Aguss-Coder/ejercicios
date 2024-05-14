#include "empleados.h"

class Repartidor : public Empleado {
  private:
    int zona;
  public:
    Repartidor();
    void setZona(int);
    int getZona();
    void toString() override;
    void plus() override;
};