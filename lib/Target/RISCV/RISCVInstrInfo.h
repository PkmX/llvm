//===-- RISCVInstrInfo.h - RISCV Instruction Information --------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the RISCV implementation of the TargetInstrInfo class.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCV_RISCVINSTRINFO_H
#define LLVM_LIB_TARGET_RISCV_RISCVINSTRINFO_H

#include "RISCVRegisterInfo.h"
#include "llvm/Target/TargetInstrInfo.h"

#define GET_INSTRINFO_HEADER
#include "RISCVGenInstrInfo.inc"

namespace llvm {

class RISCVInstrInfo : public RISCVGenInstrInfo {

public:
  RISCVInstrInfo();

  void copyPhysReg(MachineBasicBlock &MBB, MachineBasicBlock::iterator MBBI,
                   const DebugLoc &DL, unsigned DstReg, unsigned SrcReg,
                   bool KillSrc) const override;
};
}

#endif
