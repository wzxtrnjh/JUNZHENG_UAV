/* Based on CPU DB MC9S12XS256_112, version 3.00.011 (RegistersPrg V2.28) */
/* DataSheet : MC9S12XS256RMV1 Rev. 1.03 06/2008 */

#include <mc9s12xs128.h>

/*lint -save -esym(765, *) */


/* * * * *  8-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile PORTESTR _PORTE;                                  /* Port E Data Register; 0x00000008 */
volatile DDRESTR _DDRE;                                    /* Port E Data Direction Register; 0x00000009 */
volatile MODESTR _MODE;                                    /* Mode Register; 0x0000000B */
volatile PUCRSTR _PUCR;                                    /* Pull-Up Control Register; 0x0000000C */
volatile RDRIVSTR _RDRIV;                                  /* Reduced Drive Register; 0x0000000D */
volatile GPAGESTR _GPAGE;                                  /* Global Page Index Register; 0x00000010 */
volatile DIRECTSTR _DIRECT;                                /* Direct Page Register; 0x00000011 */
volatile MMCCTL1STR _MMCCTL1;                              /* MMC Control Register; 0x00000013 */
volatile PPAGESTR _PPAGE;                                  /* Program Page Index Register; 0x00000015 */
volatile RPAGESTR _RPAGE;                                  /* RAM Page Index Register; 0x00000016 */
volatile EPAGESTR _EPAGE;                                  /* Data FLASH Page Index Register; 0x00000017 */
volatile ECLKCTLSTR _ECLKCTL;                              /* ECLK Control Register; 0x0000001C */
volatile IRQCRSTR _IRQCR;                                  /* Interrupt Control Register; 0x0000001E */
volatile DBGC1STR _DBGC1;                                  /* Debug Control Register 1; 0x00000020 */
volatile DBGSRSTR _DBGSR;                                  /* Debug Status Register; 0x00000021 */
volatile DBGTCRSTR _DBGTCR;                                /* Debug Trace Control Register; 0x00000022 */
volatile DBGC2STR _DBGC2;                                  /* Debug Control Register 2; 0x00000023 */
volatile DBGCNTSTR _DBGCNT;                                /* Debug Count Register; 0x00000026 */
volatile DBGSCRXSTR _DBGSCRX;                              /* Debug State Control Register; 0x00000027 */
volatile DBGXCTLSTR _DBGXCTL;                              /* Debug Comparator Control Register; 0x00000028 */
volatile DBGXAHSTR _DBGXAH;                                /* Debug Comparator Address High Register; 0x00000029 */
volatile DBGXAMSTR _DBGXAM;                                /* Debug Comparator Address Mid Register; 0x0000002A */
volatile DBGXALSTR _DBGXAL;                                /* Debug Comparator Address Low Register; 0x0000002B */
volatile DBGXDHSTR _DBGXDH;                                /* Debug Comparator Data High Register; 0x0000002C */
volatile DBGXDLSTR _DBGXDL;                                /* Debug Comparator Data Low Register; 0x0000002D */
volatile DBGXDHMSTR _DBGXDHM;                              /* Debug Comparator Data High Mask Register; 0x0000002E */
volatile DBGXDLMSTR _DBGXDLM;                              /* Debug Comparator Data Low Mask Register; 0x0000002F */
volatile PORTKSTR _PORTK;                                  /* Port K Data Register; 0x00000032 */
volatile DDRKSTR _DDRK;                                    /* Port K Data Direction Register; 0x00000033 */
volatile SYNRSTR _SYNR;                                    /* S12XECRG Synthesizer Register; 0x00000034 */
volatile REFDVSTR _REFDV;                                  /* S12XECRG Reference Divider Register; 0x00000035 */
volatile POSTDIVSTR _POSTDIV;                              /* S12XECRG Post Divider Register; 0x00000036 */
volatile CRGFLGSTR _CRGFLG;                                /* S12XECRG Flags Register; 0x00000037 */
volatile CRGINTSTR _CRGINT;                                /* S12XECRG Interrupt Enable Register; 0x00000038 */
volatile CLKSELSTR _CLKSEL;                                /* S12XECRG Clock Select Register; 0x00000039 */
volatile PLLCTLSTR _PLLCTL;                                /* S12XECRG IPLL Control Register; 0x0000003A */
volatile RTICTLSTR _RTICTL;                                /* ECRG RTI Control Register; 0x0000003B */
volatile COPCTLSTR _COPCTL;                                /* CRG COP Control Register; 0x0000003C */
volatile ARMCOPSTR _ARMCOP;                                /* CRG COP Timer Arm/Reset Register; 0x0000003F */
volatile TIOSSTR _TIOS;                                    /* Timer Input Capture/Output Compare Select; 0x00000040 */
volatile CFORCSTR _CFORC;                                  /* Timer Compare Force Register; 0x00000041 */
volatile OC7MSTR _OC7M;                                    /* Output Compare 7 Mask Register; 0x00000042 */
volatile OC7DSTR _OC7D;                                    /* Output Compare 7 Data Register; 0x00000043 */
volatile TSCR1STR _TSCR1;                                  /* Timer System Control Register1; 0x00000046 */
volatile TTOVSTR _TTOV;                                    /* Timer Toggle On Overflow Register; 0x00000047 */
volatile TCTL1STR _TCTL1;                                  /* Timer Control Register 1; 0x00000048 */
volatile TCTL2STR _TCTL2;                                  /* Timer Control Register 2; 0x00000049 */
volatile TCTL3STR _TCTL3;                                  /* Timer Control Register 3; 0x0000004A */
volatile TCTL4STR _TCTL4;                                  /* Timer Control Register 4; 0x0000004B */
volatile TIESTR _TIE;                                      /* Timer Interrupt Enable Register; 0x0000004C */
volatile TSCR2STR _TSCR2;                                  /* Timer System Control Register 2; 0x0000004D */
volatile TFLG1STR _TFLG1;                                  /* Main Timer Interrupt Flag 1; 0x0000004E */
volatile TFLG2STR _TFLG2;                                  /* Main Timer Interrupt Flag 2; 0x0000004F */
volatile PACTLSTR _PACTL;                                  /* 16-Bit Pulse Accumulator A Control Register; 0x00000060 */
volatile PAFLGSTR _PAFLG;                                  /* Pulse Accumulator A Flag Register; 0x00000061 */
volatile OCPDSTR _OCPD;                                    /* Output Compare Pin Disconnect Register; 0x0000006C */
volatile PTPSRSTR _PTPSR;                                  /* Precision Timer Prescaler Select Register; 0x0000006E */
volatile SCI0ACR2STR _SCI0ACR2;                            /* SCI 0 Alternative Control Register 2; 0x000000CA */
volatile SCI0CR2STR _SCI0CR2;                              /* SCI 0 Control Register 2; 0x000000CB */
volatile SCI0SR1STR _SCI0SR1;                              /* SCI 0 Status Register 1; 0x000000CC */
volatile SCI0SR2STR _SCI0SR2;                              /* SCI 0 Status Register 2; 0x000000CD */
volatile SCI0DRHSTR _SCI0DRH;                              /* SCI 0 Data Register High; 0x000000CE */
volatile SCI0DRLSTR _SCI0DRL;                              /* SCI 0 Data Register Low; 0x000000CF */
volatile SCI1ACR2STR _SCI1ACR2;                            /* SCI 1 Alternative Control Register 2; 0x000000D2 */
volatile SCI1CR2STR _SCI1CR2;                              /* SCI 1 Control Register 2; 0x000000D3 */
volatile SCI1SR1STR _SCI1SR1;                              /* SCI 1 Status Register 1; 0x000000D4 */
volatile SCI1SR2STR _SCI1SR2;                              /* SCI 1 Status Register 2; 0x000000D5 */
volatile SCI1DRHSTR _SCI1DRH;                              /* SCI 1 Data Register High; 0x000000D6 */
volatile SCI1DRLSTR _SCI1DRL;                              /* SCI 1 Data Register Low; 0x000000D7 */
volatile SPI0CR1STR _SPI0CR1;                              /* SPI 0 Control Register 1; 0x000000D8 */
volatile SPI0CR2STR _SPI0CR2;                              /* SPI 0 Control Register 2; 0x000000D9 */
volatile SPI0BRSTR _SPI0BR;                                /* SPI 0 Baud Rate Register; 0x000000DA */
volatile SPI0SRSTR _SPI0SR;                                /* SPI 0 Status Register; 0x000000DB */
volatile FCLKDIVSTR _FCLKDIV;                              /* Flash Clock Divider Register; 0x00000100 */
volatile FSECSTR _FSEC;                                    /* Flash Security Register; 0x00000101 */
volatile FCCOBIXSTR _FCCOBIX;                              /* Flash CCOB Index Register; 0x00000102 */
volatile FECCRIXSTR _FECCRIX;                              /* Flash ECCR Index Register; 0x00000103 */
volatile FCNFGSTR _FCNFG;                                  /* Flash Configuration Register; 0x00000104 */
volatile FERCNFGSTR _FERCNFG;                              /* Flash Error Configuration Register; 0x00000105 */
volatile FSTATSTR _FSTAT;                                  /* Flash Status Register; 0x00000106 */
volatile FERSTATSTR _FERSTAT;                              /* Flash Error Status Register; 0x00000107 */
volatile FPROTSTR _FPROT;                                  /* P-Flash Protection Register; 0x00000108 */
volatile DFPROTSTR _DFPROT;                                /* D-Flash Protection Register; 0x00000109 */
volatile FOPTSTR _FOPT;                                    /* Flash Option Register; 0x00000110 */
volatile IVBRSTR _IVBR;                                    /* Interrupt Vector Base Register; 0x00000121 */
volatile INT_XGPRIOSTR _INT_XGPRIO;                        /* XGATE Interrupt Priority Configuration Register; 0x00000126 */
volatile INT_CFADDRSTR _INT_CFADDR;                        /* Interrupt Request Configuration Address Register; 0x00000127 */
volatile INT_CFDATA0STR _INT_CFDATA0;                      /* Interrupt Request Configuration Data Register 0; 0x00000128 */
volatile INT_CFDATA1STR _INT_CFDATA1;                      /* Interrupt Request Configuration Data Register 1; 0x00000129 */
volatile INT_CFDATA2STR _INT_CFDATA2;                      /* Interrupt Request Configuration Data Register 2; 0x0000012A */
volatile INT_CFDATA3STR _INT_CFDATA3;                      /* Interrupt Request Configuration Data Register 3; 0x0000012B */
volatile INT_CFDATA4STR _INT_CFDATA4;                      /* Interrupt Request Configuration Data Register 4; 0x0000012C */
volatile INT_CFDATA5STR _INT_CFDATA5;                      /* Interrupt Request Configuration Data Register 5; 0x0000012D */
volatile INT_CFDATA6STR _INT_CFDATA6;                      /* Interrupt Request Configuration Data Register 6; 0x0000012E */
volatile INT_CFDATA7STR _INT_CFDATA7;                      /* Interrupt Request Configuration Data Register 7; 0x0000012F */
volatile CAN0CTL0STR _CAN0CTL0;                            /* MSCAN0 Control 0 Register; 0x00000140 */
volatile CAN0CTL1STR _CAN0CTL1;                            /* MSCAN0 Control 1 Register; 0x00000141 */
volatile CAN0BTR0STR _CAN0BTR0;                            /* MSCAN0 Bus Timing Register 0; 0x00000142 */
volatile CAN0BTR1STR _CAN0BTR1;                            /* MSCAN0 Bus Timing Register 1; 0x00000143 */
volatile CAN0RFLGSTR _CAN0RFLG;                            /* MSCAN0 Receiver Flag Register; 0x00000144 */
volatile CAN0RIERSTR _CAN0RIER;                            /* MSCAN0 Receiver Interrupt Enable Register; 0x00000145 */
volatile CAN0TFLGSTR _CAN0TFLG;                            /* MSCAN0 Transmitter Flag Register; 0x00000146 */
volatile CAN0TIERSTR _CAN0TIER;                            /* MSCAN0 Transmitter Interrupt Enable Register; 0x00000147 */
volatile CAN0TARQSTR _CAN0TARQ;                            /* MSCAN0 Transmitter Message Abort Request; 0x00000148 */
volatile CAN0TAAKSTR _CAN0TAAK;                            /* MSCAN0 Transmitter Message Abort Acknowledge; 0x00000149 */
volatile CAN0TBSELSTR _CAN0TBSEL;                          /* MSCAN0 Transmit Buffer Selection; 0x0000014A */
volatile CAN0IDACSTR _CAN0IDAC;                            /* MSCAN0 Identifier Acceptance Control Register; 0x0000014B */
volatile CAN0MISCSTR _CAN0MISC;                            /* MSCAN0 Miscellaneous Register; 0x0000014D */
volatile CAN0RXERRSTR _CAN0RXERR;                          /* MSCAN0 Receive Error Counter Register; 0x0000014E */
volatile CAN0TXERRSTR _CAN0TXERR;                          /* MSCAN0 Transmit Error Counter Register; 0x0000014F */
volatile CAN0IDAR0STR _CAN0IDAR0;                          /* MSCAN0 Identifier Acceptance Register 0; 0x00000150 */
volatile CAN0IDAR1STR _CAN0IDAR1;                          /* MSCAN0 Identifier Acceptance Register 1; 0x00000151 */
volatile CAN0IDAR2STR _CAN0IDAR2;                          /* MSCAN0 Identifier Acceptance Register 2; 0x00000152 */
volatile CAN0IDAR3STR _CAN0IDAR3;                          /* MSCAN0 Identifier Acceptance Register 3; 0x00000153 */
volatile CAN0IDMR0STR _CAN0IDMR0;                          /* MSCAN0 Identifier Mask Register 0; 0x00000154 */
volatile CAN0IDMR1STR _CAN0IDMR1;                          /* MSCAN0 Identifier Mask Register 1; 0x00000155 */
volatile CAN0IDMR2STR _CAN0IDMR2;                          /* MSCAN0 Identifier Mask Register 2; 0x00000156 */
volatile CAN0IDMR3STR _CAN0IDMR3;                          /* MSCAN0 Identifier Mask Register 3; 0x00000157 */
volatile CAN0IDAR4STR _CAN0IDAR4;                          /* MSCAN0 Identifier Acceptance Register 4; 0x00000158 */
volatile CAN0IDAR5STR _CAN0IDAR5;                          /* MSCAN0 Identifier Acceptance Register 5; 0x00000159 */
volatile CAN0IDAR6STR _CAN0IDAR6;                          /* MSCAN0 Identifier Acceptance Register 6; 0x0000015A */
volatile CAN0IDAR7STR _CAN0IDAR7;                          /* MSCAN0 Identifier Acceptance Register 7; 0x0000015B */
volatile CAN0IDMR4STR _CAN0IDMR4;                          /* MSCAN0 Identifier Mask Register 4; 0x0000015C */
volatile CAN0IDMR5STR _CAN0IDMR5;                          /* MSCAN0 Identifier Mask Register 5; 0x0000015D */
volatile CAN0IDMR6STR _CAN0IDMR6;                          /* MSCAN0 Identifier Mask Register 6; 0x0000015E */
volatile CAN0IDMR7STR _CAN0IDMR7;                          /* MSCAN0 Identifier Mask Register 7; 0x0000015F */
volatile CAN0RXIDR0STR _CAN0RXIDR0;                        /* MSCAN0 Receive Identifier Register 0; 0x00000160 */
volatile CAN0RXIDR1STR _CAN0RXIDR1;                        /* MSCAN0 Receive Identifier Register 1; 0x00000161 */
volatile CAN0RXIDR2STR _CAN0RXIDR2;                        /* MSCAN0 Receive Identifier Register 2; 0x00000162 */
volatile CAN0RXIDR3STR _CAN0RXIDR3;                        /* MSCAN0 Receive Identifier Register 3; 0x00000163 */
volatile CAN0RXDSR0STR _CAN0RXDSR0;                        /* MSCAN0 Receive Data Segment Register 0; 0x00000164 */
volatile CAN0RXDSR1STR _CAN0RXDSR1;                        /* MSCAN0 Receive Data Segment Register 1; 0x00000165 */
volatile CAN0RXDSR2STR _CAN0RXDSR2;                        /* MSCAN0 Receive Data Segment Register 2; 0x00000166 */
volatile CAN0RXDSR3STR _CAN0RXDSR3;                        /* MSCAN0 Receive Data Segment Register 3; 0x00000167 */
volatile CAN0RXDSR4STR _CAN0RXDSR4;                        /* MSCAN0 Receive Data Segment Register 4; 0x00000168 */
volatile CAN0RXDSR5STR _CAN0RXDSR5;                        /* MSCAN0 Receive Data Segment Register 5; 0x00000169 */
volatile CAN0RXDSR6STR _CAN0RXDSR6;                        /* MSCAN0 Receive Data Segment Register 6; 0x0000016A */
volatile CAN0RXDSR7STR _CAN0RXDSR7;                        /* MSCAN0 Receive Data Segment Register 7; 0x0000016B */
volatile CAN0RXDLRSTR _CAN0RXDLR;                          /* MSCAN0 Receive Data Length Register; 0x0000016C */
volatile CAN0TXIDR0STR _CAN0TXIDR0;                        /* MSCAN0 Transmit Identifier Register 0; 0x00000170 */
volatile CAN0TXIDR1STR _CAN0TXIDR1;                        /* MSCAN0 Transmit Identifier Register 1; 0x00000171 */
volatile CAN0TXIDR2STR _CAN0TXIDR2;                        /* MSCAN0 Transmit Identifier Register 2; 0x00000172 */
volatile CAN0TXIDR3STR _CAN0TXIDR3;                        /* MSCAN0 Transmit Identifier Register 3; 0x00000173 */
volatile CAN0TXDSR0STR _CAN0TXDSR0;                        /* MSCAN0 Transmit Data Segment Register 0; 0x00000174 */
volatile CAN0TXDSR1STR _CAN0TXDSR1;                        /* MSCAN0 Transmit Data Segment Register 1; 0x00000175 */
volatile CAN0TXDSR2STR _CAN0TXDSR2;                        /* MSCAN0 Transmit Data Segment Register 2; 0x00000176 */
volatile CAN0TXDSR3STR _CAN0TXDSR3;                        /* MSCAN0 Transmit Data Segment Register 3; 0x00000177 */
volatile CAN0TXDSR4STR _CAN0TXDSR4;                        /* MSCAN0 Transmit Data Segment Register 4; 0x00000178 */
volatile CAN0TXDSR5STR _CAN0TXDSR5;                        /* MSCAN0 Transmit Data Segment Register 5; 0x00000179 */
volatile CAN0TXDSR6STR _CAN0TXDSR6;                        /* MSCAN0 Transmit Data Segment Register 6; 0x0000017A */
volatile CAN0TXDSR7STR _CAN0TXDSR7;                        /* MSCAN0 Transmit Data Segment Register 7; 0x0000017B */
volatile CAN0TXDLRSTR _CAN0TXDLR;                          /* MSCAN0 Transmit Data Length Register; 0x0000017C */
volatile CAN0TXTBPRSTR _CAN0TXTBPR;                        /* MSCAN0 Transmit Buffer Priority; 0x0000017D */
volatile PTTSTR _PTT;                                      /* Port T Data Register; 0x00000240 */
volatile PTITSTR _PTIT;                                    /* Port T Input Register; 0x00000241 */
volatile DDRTSTR _DDRT;                                    /* Port T Data Direction Register; 0x00000242 */
volatile RDRTSTR _RDRT;                                    /* Port T Reduced Drive Register; 0x00000243 */
volatile PERTSTR _PERT;                                    /* Port T Pull Device Enable Register; 0x00000244 */
volatile PPSTSTR _PPST;                                    /* Port T Polarity Select Register; 0x00000245 */
volatile PTTRRSTR _PTTRR;                                  /* Port T Routing Register; 0x00000247 */
volatile PTSSTR _PTS;                                      /* Port S Data Register; 0x00000248 */
volatile PTISSTR _PTIS;                                    /* Port S Input Register; 0x00000249 */
volatile DDRSSTR _DDRS;                                    /* Port S Data Direction Register; 0x0000024A */
volatile RDRSSTR _RDRS;                                    /* Port S Reduced Drive Register; 0x0000024B */
volatile PERSSTR _PERS;                                    /* Port S Pull Device Enable Register; 0x0000024C */
volatile PPSSSTR _PPSS;                                    /* Port S Polarity Select Register; 0x0000024D */
volatile WOMSSTR _WOMS;                                    /* Port S Wired-Or Mode Register; 0x0000024E */
volatile PTMSTR _PTM;                                      /* Port M Data Register; 0x00000250 */
volatile PTIMSTR _PTIM;                                    /* Port M Input Register; 0x00000251 */
volatile DDRMSTR _DDRM;                                    /* Port M Data Direction Register; 0x00000252 */
volatile RDRMSTR _RDRM;                                    /* Port M Reduced Drive Register; 0x00000253 */
volatile PERMSTR _PERM;                                    /* Port M Pull Device Enable Register; 0x00000254 */
volatile PPSMSTR _PPSM;                                    /* Port M Polarity Select Register; 0x00000255 */
volatile WOMMSTR _WOMM;                                    /* Port M Wired-Or Mode Register; 0x00000256 */
volatile MODRRSTR _MODRR;                                  /* Module Routing Register; 0x00000257 */
volatile PTPSTR _PTP;                                      /* Port P Data Register; 0x00000258 */
volatile PTIPSTR _PTIP;                                    /* Port P Input Register; 0x00000259 */
volatile DDRPSTR _DDRP;                                    /* Port P Data Direction Register; 0x0000025A */
volatile RDRPSTR _RDRP;                                    /* Port P Reduced Drive Register; 0x0000025B */
volatile PERPSTR _PERP;                                    /* Port P Pull Device Enable Register; 0x0000025C */
volatile PPSPSTR _PPSP;                                    /* Port P Polarity Select Register; 0x0000025D */
volatile PIEPSTR _PIEP;                                    /* Port P Interrupt Enable Register; 0x0000025E */
volatile PIFPSTR _PIFP;                                    /* Port P Interrupt Flag Register; 0x0000025F */
volatile PTHSTR _PTH;                                      /* Port H Data Register; 0x00000260 */
volatile PTIHSTR _PTIH;                                    /* Port H Input Register; 0x00000261 */
volatile DDRHSTR _DDRH;                                    /* Port H Data Direction Register; 0x00000262 */
volatile RDRHSTR _RDRH;                                    /* Port H Reduced Drive Register; 0x00000263 */
volatile PERHSTR _PERH;                                    /* Port H Pull Device Enable Register; 0x00000264 */
volatile PPSHSTR _PPSH;                                    /* Port H Polarity Select Register; 0x00000265 */
volatile PIEHSTR _PIEH;                                    /* Port H Interrupt Enable Register; 0x00000266 */
volatile PIFHSTR _PIFH;                                    /* Port H Interrupt Flag Register; 0x00000267 */
volatile PTJSTR _PTJ;                                      /* Port J Data Register; 0x00000268 */
volatile PTIJSTR _PTIJ;                                    /* Port J Input Register; 0x00000269 */
volatile DDRJSTR _DDRJ;                                    /* Port J Data Direction Register; 0x0000026A */
volatile RDRJSTR _RDRJ;                                    /* Port J Reduced Drive Register; 0x0000026B */
volatile PERJSTR _PERJ;                                    /* Port J Pull Device Enable Register; 0x0000026C */
volatile PPSJSTR _PPSJ;                                    /* Port J Polarity Select Register; 0x0000026D */
volatile PIEJSTR _PIEJ;                                    /* Port J Interrupt Enable Register; 0x0000026E */
volatile PIFJSTR _PIFJ;                                    /* Port J Interrupt Flag Register; 0x0000026F */
volatile ATD0STAT0STR _ATD0STAT0;                          /* ATD 0 Status Register 0; 0x000002C6 */
volatile VREGHTCLSTR _VREGHTCL;                            /* HT Control Register; 0x000002F0 */
volatile VREGCTRLSTR _VREGCTRL;                            /* Control Register; 0x000002F1 */
volatile VREGAPICLSTR _VREGAPICL;                          /* Autonomous Periodical Interrupt Control Register; 0x000002F2 */
volatile VREGAPITRSTR _VREGAPITR;                          /* Autonomous Periodical Interrupt Trimming Register; 0x000002F3 */
volatile VREGHTTRSTR _VREGHTTR;                            /* HTTrimming Register; 0x000002F7 */
volatile PWMESTR _PWME;                                    /* PWM Enable Register; 0x00000300 */
volatile PWMPOLSTR _PWMPOL;                                /* PWM Polarity Register; 0x00000301 */
volatile PWMCLKSTR _PWMCLK;                                /* PWM Clock Select Register; 0x00000302 */
volatile PWMPRCLKSTR _PWMPRCLK;                            /* PWM Prescale Clock Select Register; 0x00000303 */
volatile PWMCAESTR _PWMCAE;                                /* PWM Center Align Enable Register; 0x00000304 */
volatile PWMCTLSTR _PWMCTL;                                /* PWM Control Register; 0x00000305 */
volatile PWMSCLASTR _PWMSCLA;                              /* PWM Scale A Register; 0x00000308 */
volatile PWMSCLBSTR _PWMSCLB;                              /* PWM Scale B Register; 0x00000309 */
volatile PWMSDNSTR _PWMSDN;                                /* PWM Shutdown Register; 0x00000324 */
volatile PITCFLMTSTR _PITCFLMT;                            /* PIT Control and Force Load Micro Timer Register; 0x00000340 */
volatile PITFLTSTR _PITFLT;                                /* PIT Force Load Timer Register; 0x00000341 */
volatile PITCESTR _PITCE;                                  /* PIT Channel Enable Register; 0x00000342 */
volatile PITMUXSTR _PITMUX;                                /* PIT Multiplex Register; 0x00000343 */
volatile PITINTESTR _PITINTE;                              /* PIT Interrupt Enable Register; 0x00000344 */
volatile PITTFSTR _PITTF;                                  /* PIT Time-out Flag Register; 0x00000345 */
volatile PITMTLD0STR _PITMTLD0;                            /* PIT Micro Timer Load Register 0; 0x00000346 */
volatile PITMTLD1STR _PITMTLD1;                            /* PIT Micro Timer Load Register 1; 0x00000347 */
/* NVFPROT - macro for reading non volatile register       Non Volatile P-Flash Protection Register; 0x0000FF0C */
/* NVDFPROT - macro for reading non volatile register      Non Volatile D-Flash Protection Register; 0x0000FF0D */
/* NVFOPT - macro for reading non volatile register        Non Volatile Flash Option Register; 0x0000FF0E */
/* NVFSEC - macro for reading non volatile register        Non Volatile Flash Security Register; 0x0000FF0F */


/* * * * *  16-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile PORTABSTR _PORTAB;                                /* Port AB Data Register; 0x00000000 */
volatile DDRABSTR _DDRAB;                                  /* Port AB Data Direction Register; 0x00000002 */
volatile PARTIDSTR _PARTID;                                /* Part ID Register; 0x0000001A */
volatile DBGTBSTR _DBGTB;                                  /* Debug Trace Buffer Register; 0x00000024 */
volatile TCNTSTR _TCNT;                                    /* Timer Count Register; 0x00000044 */
volatile TC0STR _TC0;                                      /* Timer Input Capture/Output Compare Register 0; 0x00000050 */
volatile TC1STR _TC1;                                      /* Timer Input Capture/Output Compare Register 1; 0x00000052 */
volatile TC2STR _TC2;                                      /* Timer Input Capture/Output Compare Register 2; 0x00000054 */
volatile TC3STR _TC3;                                      /* Timer Input Capture/Output Compare Register 3; 0x00000056 */
volatile TC4STR _TC4;                                      /* Timer Input Capture/Output Compare Register 4; 0x00000058 */
volatile TC5STR _TC5;                                      /* Timer Input Capture/Output Compare Register 5; 0x0000005A */
volatile TC6STR _TC6;                                      /* Timer Input Capture/Output Compare Register 6; 0x0000005C */
volatile TC7STR _TC7;                                      /* Timer Input Capture/Output Compare Register 7; 0x0000005E */
volatile PACNTSTR _PACNT;                                  /* Pulse Accumulators Count Register; 0x00000062 */
volatile SCI0BDSTR _SCI0BD;                                /* SCI 0 Baud Rate Register; 0x000000C8 */
volatile SCI1BDSTR _SCI1BD;                                /* SCI 1 Baud Rate Register; 0x000000D0 */
volatile SPI0DRSTR _SPI0DR;                                /* SPI 0 Data Register; 0x000000DC */
volatile FCCOBSTR _FCCOB;                                  /* Flash Common Command Object Register; 0x0000010A */
volatile FECCRSTR _FECCR;                                  /* Flash ECC Error Results Register; 0x0000010E */
volatile CAN0RXTSRSTR _CAN0RXTSR;                          /* MSCAN0 Receive Time Stamp Register; 0x0000016E */
volatile CAN0TXTSRSTR _CAN0TXTSR;                          /* MSCAN0 Transmit Time Stamp Register; 0x0000017E */
volatile PT01AD0STR _PT01AD0;                              /* Port AD0 Data Register; 0x00000270 */
volatile DDR01AD0STR _DDR01AD0;                            /* Port AD0 Data Direction Register; 0x00000272 */
volatile RDR01AD0STR _RDR01AD0;                            /* Port AD0 Reduced Drive Register; 0x00000274 */
volatile PER01AD0STR _PER01AD0;                            /* Port AD0 Pull Up Enable Register; 0x00000276 */
volatile ATD0CTL01STR _ATD0CTL01;                          /* ATD 0 Control Register 01; 0x000002C0 */
volatile ATD0CTL23STR _ATD0CTL23;                          /* ATD 0 Control Register 23; 0x000002C2 */
volatile ATD0CTL45STR _ATD0CTL45;                          /* ATD 0 Control Register 45; 0x000002C4 */
volatile ATD0CMPESTR _ATD0CMPE;                            /* ATD 0 Compare Enable Register; 0x000002C8 */
volatile ATD0STAT2STR _ATD0STAT2;                          /* ATD 0 Status Register 2; 0x000002CA */
volatile ATD0DIENSTR _ATD0DIEN;                            /* ATD 0 Input Enable Register; 0x000002CC */
volatile ATD0CMPHTSTR _ATD0CMPHT;                          /* ATD 0 Compare Higher Than Register; 0x000002CE */
volatile ATD0DR0STR _ATD0DR0;                              /* ATD 0 Conversion Result Register 0; 0x000002D0 */
volatile ATD0DR1STR _ATD0DR1;                              /* ATD 0 Conversion Result Register 1; 0x000002D2 */
volatile ATD0DR2STR _ATD0DR2;                              /* ATD 0 Conversion Result Register 2; 0x000002D4 */
volatile ATD0DR3STR _ATD0DR3;                              /* ATD 0 Conversion Result Register 3; 0x000002D6 */
volatile ATD0DR4STR _ATD0DR4;                              /* ATD 0 Conversion Result Register 4; 0x000002D8 */
volatile ATD0DR5STR _ATD0DR5;                              /* ATD 0 Conversion Result Register 5; 0x000002DA */
volatile ATD0DR6STR _ATD0DR6;                              /* ATD 0 Conversion Result Register 6; 0x000002DC */
volatile ATD0DR7STR _ATD0DR7;                              /* ATD 0 Conversion Result Register 7; 0x000002DE */
volatile ATD0DR8STR _ATD0DR8;                              /* ATD 0 Conversion Result Register 8; 0x000002E0 */
volatile ATD0DR9STR _ATD0DR9;                              /* ATD 0 Conversion Result Register 9; 0x000002E2 */
volatile ATD0DR10STR _ATD0DR10;                            /* ATD 0 Conversion Result Register 10; 0x000002E4 */
volatile ATD0DR11STR _ATD0DR11;                            /* ATD 0 Conversion Result Register 11; 0x000002E6 */
volatile ATD0DR12STR _ATD0DR12;                            /* ATD 0 Conversion Result Register 12; 0x000002E8 */
volatile ATD0DR13STR _ATD0DR13;                            /* ATD 0 Conversion Result Register 13; 0x000002EA */
volatile ATD0DR14STR _ATD0DR14;                            /* ATD 0 Conversion Result Register 14; 0x000002EC */
volatile ATD0DR15STR _ATD0DR15;                            /* ATD 0 Conversion Result Register 15; 0x000002EE */
volatile VREGAPIRSTR _VREGAPIR;                            /* Autonomous Periodical Interrupt Rate Register; 0x000002F4 */
volatile PWMCNT01STR _PWMCNT01;                            /* PWM Channel Counter 01 Register; 0x0000030C */
volatile PWMCNT23STR _PWMCNT23;                            /* PWM Channel Counter 23 Register; 0x0000030E */
volatile PWMCNT45STR _PWMCNT45;                            /* PWM Channel Counter 45 Register; 0x00000310 */
volatile PWMCNT67STR _PWMCNT67;                            /* PWM Channel Counter 67 Register; 0x00000312 */
volatile PWMPER01STR _PWMPER01;                            /* PWM Channel Period 01 Register; 0x00000314 */
volatile PWMPER23STR _PWMPER23;                            /* PWM Channel Period 23 Register; 0x00000316 */
volatile PWMPER45STR _PWMPER45;                            /* PWM Channel Period 45 Register; 0x00000318 */
volatile PWMPER67STR _PWMPER67;                            /* PWM Channel Period 67 Register; 0x0000031A */
volatile PWMDTY01STR _PWMDTY01;                            /* PWM Channel Duty 01 Register; 0x0000031C */
volatile PWMDTY23STR _PWMDTY23;                            /* PWM Channel Duty 23 Register; 0x0000031E */
volatile PWMDTY45STR _PWMDTY45;                            /* PWM Channel Duty 45 Register; 0x00000320 */
volatile PWMDTY67STR _PWMDTY67;                            /* PWM Channel Duty 67 Register; 0x00000322 */
volatile PITLD0STR _PITLD0;                                /* PIT Load Register 0; 0x00000348 */
volatile PITCNT0STR _PITCNT0;                              /* PIT Count Register 0; 0x0000034A */
volatile PITLD1STR _PITLD1;                                /* PIT Load Register 1; 0x0000034C */
volatile PITCNT1STR _PITCNT1;                              /* PIT Count Register 1; 0x0000034E */
volatile PITLD2STR _PITLD2;                                /* PIT Load Register 2; 0x00000350 */
volatile PITCNT2STR _PITCNT2;                              /* PIT Count Register 2; 0x00000352 */
volatile PITLD3STR _PITLD3;                                /* PIT Load Register 3; 0x00000354 */
volatile PITCNT3STR _PITCNT3;                              /* PIT Count Register 3; 0x00000356 */
/* BAKEY0 - macro for reading non volatile register        Backdoor Comparison Key 0; 0x0000FF00 */
/* BAKEY1 - macro for reading non volatile register        Backdoor Comparison Key 1; 0x0000FF02 */
/* BAKEY2 - macro for reading non volatile register        Backdoor Comparison Key 2; 0x0000FF04 */
/* BAKEY3 - macro for reading non volatile register        Backdoor Comparison Key 3; 0x0000FF06 */

/*lint -restore */

/* EOF */
