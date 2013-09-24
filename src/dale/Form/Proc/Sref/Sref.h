#ifndef DALE_FORM_PROC_SREF
#define DALE_FORM_PROC_SREF

namespace dale
{
namespace Form
{
namespace Proc
{
namespace Sref
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
