//
// Created by hamster on 8/2/18.
//

#ifndef DC26_BADGE_ADC_H
#define DC26_BADGE_ADC_H

void adc_configure(void);
void adc_start(void);

uint8_t getBatteryPercent(void);

#endif //DC26_BADGE_ADC_H
