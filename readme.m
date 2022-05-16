ppmc = py.importlib.import_module('pybind_matlab_issue');
ver = char(py.getattr(ppmc, "__version__"))
system(['ldd ' char(py.getattr(ppmc, "__file__"))])
AStruct = ppmc.AStruct
an_object = AStruct()
