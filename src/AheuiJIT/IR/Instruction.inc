INST(add, Local*, Value*, Value*)
INST(sub, Local*, Value*, Value*)
INST(mul, Local*, Value*, Value*)
INST(div, Local*, Value*, Value*)
INST(mod, Local*, Value*, Value*)
INST(cmp, Local*, Value*, Value*)
INST(popStack, Local*, Void*)
INST(pushStack, void, Value*)
INST(popQueue, Local*, Void*)
INST(pushQueueFront, void, Value*)
INST(pushQueueBack, void, Value*)
INST(getStore, Local*, Void*)
INST(setStore, void, Value*)
INST(inputNum, Local*, Void*)
INST(inputChar, Local*, Void*)
INST(outputNum, void, Value*)
INST(outputChar, void, Value*)
