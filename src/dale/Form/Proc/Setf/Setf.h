#ifndef DALE_FORM_PROC_SETF
#define DALE_FORM_PROC_SETF

namespace dale
{
namespace Form
{
namespace Proc
{
namespace Setf
{
bool parse(Generator *gen,
           Element::Function *fn,
           llvm::BasicBlock *block,
           Node *node,
           bool get_address,
           bool prefixed_with_core,
           ParseResult *pr);
}
}
}
}

#endif
