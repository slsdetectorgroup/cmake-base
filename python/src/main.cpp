#include <pybind11/pybind11.h>
#include "psi/Adder.h"

namespace py = pybind11;


PYBIND11_MODULE(_somepkg, m) {

    py::class_<psi::Adder> Adder(m, "Adder");
    Adder
        .def(py::init<>())
        .def("add", &psi::Adder::add);


#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}