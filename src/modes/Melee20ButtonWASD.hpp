#ifndef _MODES_MELEE20BUTTONWASD_HPP
#define _MODES_MELEE20BUTTONWASD_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

typedef struct {
    bool crouch_walk_os = false;
} Melee20ButtonWASDOptions;

class Melee20ButtonWASD : public ControllerMode {
  public:
    Melee20ButtonWASD(socd::SocdType socd_type, Melee20ButtonWASDOptions options = {});

  protected:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);

  private:
    Melee20ButtonWASDOptions _options;
    bool _horizontal_socd;

    void HandleSocd(InputState &inputs);
};

#endif
