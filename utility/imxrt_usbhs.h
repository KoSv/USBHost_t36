#ifndef IMXRT_USBHS_H_
#define IMXRT_USBHS_H_

#if defined(__IMXRT1052__) || defined(__IMXRT1062__)
 
// Allow USB host code written for "USBHS" on Teensy 3.6 to compile for "USB2" on Teensy 4.0

#define IRQ_USBHS		IRQ_USB2

#define USBPHY_CTRL		USBPHY2_CTRL
#define USBPHY_CTRL_CLR		USBPHY2_CTRL_CLR
#define USBPHY_CTRL_SET		USBPHY2_CTRL_SET

#define USBHS_USBCMD		USB2_USBCMD
#define USBHS_USBSTS		USB2_USBSTS
#define USBHS_USBINTR		USB2_USBINTR
#define USBHS_FRINDEX		USB2_FRINDEX
#define USBHS_PERIODICLISTBASE	USB2_PERIODICLISTBASE
#define USBHS_ASYNCLISTADDR	USB2_ASYNCLISTADDR
#define USBHS_PORTSC1		USB2_PORTSC1
#define USBHS_USBMODE		USB2_USBMODE
#define USBHS_GPTIMER0CTL	USB2_GPTIMER0CTRL
#define USBHS_GPTIMER0LD	USB2_GPTIMER0LD
#define USBHS_GPTIMER1CTL	USB2_GPTIMER1CTRL
#define USBHS_GPTIMER1LD	USB2_GPTIMER1LD

#define USBHS_USBCMD_ASE	USB_USBCMD_ASE
#define USBHS_USBCMD_IAA	USB_USBCMD_IAA
#define USBHS_USBCMD_RST	USB_USBCMD_RST
#define USBHS_USBCMD_ITC(n)	USB_USBCMD_ITC(n)
#define USBHS_USBCMD_RS		USB_USBCMD_RS
#define USBHS_USBCMD_ASP(n)	USB_USBCMD_ASP(n)
#define USBHS_USBCMD_ASPE	USB_USBCMD_ASPE
#define USBHS_USBCMD_PSE	USB_USBCMD_PSE
#define USBHS_USBCMD_FS2	USB_USBCMD_FS_2
#define USBHS_USBCMD_FS(n)	USB_USBCMD_FS_1(n)		

#define USBHS_USBSTS_AAI	USB_USBSTS_AAI
#define USBHS_USBSTS_AS		USB_USBSTS_AS
// UAI & UPI bits are undocumented in IMXRT, K66 pg 1602, RT1050 pg 2374
#define USBHS_USBSTS_UAI	((uint32_t)(1<<18))
#define USBHS_USBSTS_UPI	((uint32_t)(1<<19))
#define USBHS_USBSTS_UEI	USB_USBSTS_UEI
#define USBHS_USBSTS_PCI	USB_USBSTS_PCI
#define USBHS_USBSTS_TI0	USB_USBSTS_TI0
#define USBHS_USBSTS_TI1	USB_USBSTS_TI1
#define USBHS_USBSTS_SEI	USB_USBSTS_SEI
#define USBHS_USBSTS_URI	USB_USBSTS_URI
#define USBHS_USBSTS_SLI	USB_USBSTS_SLI
#define USBHS_USBSTS_HCH	USB_USBSTS_HCH
#define USBHS_USBSTS_NAKI	USB_USBSTS_NAKI

#define USBHS_USBINTR_PCE	USB_USBINTR_PCE
#define USBHS_USBINTR_TIE0	USB_USBINTR_TIE0
#define USBHS_USBINTR_TIE1	USB_USBINTR_TIE1
#define USBHS_USBINTR_UEE	USB_USBINTR_UEE
#define USBHS_USBINTR_SEE	USB_USBINTR_SEE
#define USBHS_USBINTR_UPIE	USB_USBINTR_UPIE
#define USBHS_USBINTR_UAIE	USB_USBINTR_UAIE

#define USBHS_PORTSC_PP		USB_PORTSC1_PP
#define USBHS_PORTSC_OCC	USB_PORTSC1_OCC
#define USBHS_PORTSC_PEC	USB_PORTSC1_PEC
#define USBHS_PORTSC_CSC	USB_PORTSC1_CSC
#define USBHS_PORTSC_CCS	USB_PORTSC1_CCS
#define USBHS_PORTSC_PE		USB_PORTSC1_PE
#define USBHS_PORTSC_HSP	USB_PORTSC1_HSP
#define USBHS_PORTSC_FPR	USB_PORTSC1_FPR
#define USBHS_PORTSC_PR		USB_PORTSC1_PR

#define USBHS_GPTIMERCTL_RST	USB_GPTIMERCTRL_GPTRST
#define USBHS_GPTIMERCTL_RUN	USB_GPTIMERCTRL_GPTRUN

#define USBHS_USBMODE_CM(n)	USB_USBMODE_CM(n)

// TODO: what is the best setting for this register on IMXRT ???
#define USBHS_USB_SBUSCFG	USB2_SBUSCFG


#endif // __IMXRT1052__ or __IMXRT1062__
#endif // IMXRT_USBHS_H_
