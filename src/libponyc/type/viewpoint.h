#ifndef TYPE_VIEWPOINT_H
#define TYPE_VIEWPOINT_H

#include <platform.h>
#include "../ast/ast.h"

PONY_EXTERN_C_BEGIN

ast_t* viewpoint_cap(token_id cap, token_id eph, ast_t* type);

ast_t* viewpoint_type(ast_t* l_type, ast_t* r_type);

ast_t* viewpoint_upper(ast_t* type);

/**
 * Return a new type that would be a subtype of the provided type for any
 * chain of valid arrow types.
 */
ast_t* viewpoint_lower(ast_t* type);

void replace_thistype(ast_t** astp, ast_t* type);

bool flatten_arrows(ast_t** astp, bool errors);

bool safe_to_write(ast_t* ast, ast_t* type);

bool safe_to_autorecover(ast_t* receiver, ast_t* type);

PONY_EXTERN_C_END

#endif
