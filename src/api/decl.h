/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/declaration.h"
#include "api/expr.h"
#include "api/lean_decl.h"
namespace lean {
inline declaration * to_decl(lean_decl n) { return reinterpret_cast<declaration *>(n); }
inline declaration const & to_decl_ref(lean_decl n) { return *reinterpret_cast<declaration *>(n); }
inline lean_decl of_decl(declaration * n) { return reinterpret_cast<lean_decl>(n); }

inline environment * to_env(lean_env n) { return reinterpret_cast<environment *>(n); }
inline environment const & to_env_ref(lean_env n) { return *reinterpret_cast<environment *>(n); }
inline lean_env of_env(environment * n) { return reinterpret_cast<lean_env>(n); }
}
