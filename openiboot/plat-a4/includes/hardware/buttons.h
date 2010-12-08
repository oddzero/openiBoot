#ifndef HW_BUTTONS_H
#define HW_BUTTONS_H

// Device

#define BUTTONS_HOME 0x0
#define BUTTONS_HOLD 0x1
#define BUTTONS_VOLUP 0x2
#define BUTTONS_VOLDOWN 0x3
#define BUTTONS_RINGERAB 0x4

#define BUTTONS_IIC_STATE 0x4B

#define BUTTONS_HOLD_IRQ 0x2D
#define BUTTONS_VOLUP_IRQ 0x29
#define BUTTONS_VOLDOWN_IRQ 0x2A
#define BUTTONS_RINGERAB_IRQ 0x2B

#define BUTTONS_HOLD_IRQTYPE 1
#define BUTTONS_HOME_IRQTYPE 1
#define BUTTONS_VOLUP_IRQTYPE 1
#define BUTTONS_VOLDOWN_IRQTYPE 1
#define BUTTONS_RINGERAB_IRQTYPE 1

#define BUTTONS_HOLD_IRQLEVEL 1
#define BUTTONS_HOME_IRQLEVEL 1
#define BUTTONS_VOLUP_IRQLEVEL 0
#define BUTTONS_VOLDOWN_IRQLEVEL 0
#define BUTTONS_RINGERAB_IRQLEVEL 1

#define BUTTONS_HOLD_IRQAUTOFLIP 1
#define BUTTONS_HOME_IRQAUTOFLIP 1
#define BUTTONS_VOLUP_IRQAUTOFLIP 1
#define BUTTONS_VOLDOWN_IRQAUTOFLIP 1
#define BUTTONS_RINGERAB_IRQAUTOFLIP 1

#endif
