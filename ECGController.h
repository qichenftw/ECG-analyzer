#pragma once

#include "ECGSignal.h"
#include "ECGRs.h"
#include "ECGWaves.h"
#include "ECGHRV1.h"

/**
 * @class Class which controls executing all modules.
 */
class ECGController
{
public:
  ECGController (void);
  ~ECGController (void);
private:
  ECGSignal raw_signal;
  ECGSignal filtered_signal;
  ECGRs r_peaks;
  ECGWaves waves;
  ECGHRV1 hrv1;
};
