#ifndef _MODES_ULTIMATEUSB_HPP
#define _MODES_ULTIMATEUSB_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class UltimateUSB : public ControllerMode {
  public:
    UltimateUSB(socd::SocdType socd_type);

  private:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif
