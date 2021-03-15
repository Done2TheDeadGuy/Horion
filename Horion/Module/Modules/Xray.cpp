#include "Xray.h"

Xray::Xray() : IModule(X, Category::VISUAL, "X-Ray view!") {
}

Xray::~Xray() {
}

const char* Xray::getModuleName() {
	return ("X-Ray");
}
