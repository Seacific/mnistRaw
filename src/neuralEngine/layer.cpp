#include "include/layer.h"
#include <vector>

namespace neuralEngine {

class Layer {
  Layer* previous;
  Layer* next;
  unsigned int size;

  float* weights;
  float* biases;

  Layer() {}

  ~Layer() {}
};

} // namespace neuralEngine
