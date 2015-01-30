#ifndef DALE_OPERATION_ALIGNMENTOF
#define DALE_OPERATION_ALIGNMENTOF

#include "../../ParseResult/ParseResult.h"
#include "../../Context/Context.h"
#include "../../Type/Type.h"
#include "../../Node/Node.h"
#include "../../Unit/Unit.h"

#include "../../llvm_Module.h"
#include "../../llvm_Function.h"
#include "../../llvm_IRBuilder.h"

namespace dale
{
namespace Operation
{
bool Alignmentof(Context *ctx,
                 llvm::BasicBlock *block,
                 Type *type,
                 ParseResult *pr);
}
}

#endif
