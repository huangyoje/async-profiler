/*
 * Copyright 2017 Andrei Pangin
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if defined(__arm__) || defined(__thumb__)

#include <ucontext.h>
#include "stackFrame.h"


uintptr_t& StackFrame::pc(void* ucontext) {
    return (uintptr_t&)((ucontext_t*)ucontext)->uc_mcontext.arm_pc;
}

uintptr_t& StackFrame::sp(void* ucontext) {
    return (uintptr_t&)((ucontext_t*)ucontext)->uc_mcontext.arm_sp;
}

uintptr_t& StackFrame::fp(void* ucontext) {
    return (uintptr_t&)((ucontext_t*)ucontext)->uc_mcontext.arm_fp;
}

bool StackFrame::pop() {
    return false;
}

#endif // defined(__arm__) || defined(__thumb__)
