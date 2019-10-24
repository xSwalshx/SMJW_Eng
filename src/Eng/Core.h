#include <memory>
#include <vector>

class Entity;

//Header
class Core
{
public:
  static std::shared_ptr<Core> initialize();
  
  std::shared_ptr<Entity> addEntity();

  void start();

private:
  std::vector<std::shared_ptr<Entity>> entities;
};