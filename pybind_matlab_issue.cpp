#include "pybind11/pybind11.h"

struct AStruct {
    AStruct() {
    }
};

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace py = pybind11;

PYBIND11_MODULE(pybind_matlab_issue, m) {
    py::class_<AStruct>(m, "AStruct") .def(py::init<>());
    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
}
