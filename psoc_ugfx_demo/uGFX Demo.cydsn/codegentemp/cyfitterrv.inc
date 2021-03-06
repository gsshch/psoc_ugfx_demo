    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; LCD_CS
LCD_CS__0__INTTYPE EQU CYREG_PICU2_INTTYPE7
LCD_CS__0__MASK EQU 0x80
LCD_CS__0__PC EQU CYREG_PRT2_PC7
LCD_CS__0__PORT EQU 2
LCD_CS__0__SHIFT EQU 7
LCD_CS__AG EQU CYREG_PRT2_AG
LCD_CS__AMUX EQU CYREG_PRT2_AMUX
LCD_CS__BIE EQU CYREG_PRT2_BIE
LCD_CS__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_CS__BYP EQU CYREG_PRT2_BYP
LCD_CS__CTL EQU CYREG_PRT2_CTL
LCD_CS__DM0 EQU CYREG_PRT2_DM0
LCD_CS__DM1 EQU CYREG_PRT2_DM1
LCD_CS__DM2 EQU CYREG_PRT2_DM2
LCD_CS__DR EQU CYREG_PRT2_DR
LCD_CS__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_CS__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_CS__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_CS__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_CS__MASK EQU 0x80
LCD_CS__PORT EQU 2
LCD_CS__PRT EQU CYREG_PRT2_PRT
LCD_CS__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_CS__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_CS__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_CS__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_CS__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_CS__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_CS__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_CS__PS EQU CYREG_PRT2_PS
LCD_CS__SHIFT EQU 7
LCD_CS__SLW EQU CYREG_PRT2_SLW

; LCD_DC
LCD_DC__0__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_DC__0__MASK EQU 0x08
LCD_DC__0__PC EQU CYREG_PRT2_PC3
LCD_DC__0__PORT EQU 2
LCD_DC__0__SHIFT EQU 3
LCD_DC__AG EQU CYREG_PRT2_AG
LCD_DC__AMUX EQU CYREG_PRT2_AMUX
LCD_DC__BIE EQU CYREG_PRT2_BIE
LCD_DC__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_DC__BYP EQU CYREG_PRT2_BYP
LCD_DC__CTL EQU CYREG_PRT2_CTL
LCD_DC__DM0 EQU CYREG_PRT2_DM0
LCD_DC__DM1 EQU CYREG_PRT2_DM1
LCD_DC__DM2 EQU CYREG_PRT2_DM2
LCD_DC__DR EQU CYREG_PRT2_DR
LCD_DC__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_DC__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_DC__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_DC__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_DC__MASK EQU 0x08
LCD_DC__PORT EQU 2
LCD_DC__PRT EQU CYREG_PRT2_PRT
LCD_DC__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_DC__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_DC__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_DC__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_DC__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_DC__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_DC__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_DC__PS EQU CYREG_PRT2_PS
LCD_DC__SHIFT EQU 3
LCD_DC__SLW EQU CYREG_PRT2_SLW

; LCD_RST
LCD_RST__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_RST__0__MASK EQU 0x01
LCD_RST__0__PC EQU CYREG_PRT2_PC0
LCD_RST__0__PORT EQU 2
LCD_RST__0__SHIFT EQU 0
LCD_RST__AG EQU CYREG_PRT2_AG
LCD_RST__AMUX EQU CYREG_PRT2_AMUX
LCD_RST__BIE EQU CYREG_PRT2_BIE
LCD_RST__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_RST__BYP EQU CYREG_PRT2_BYP
LCD_RST__CTL EQU CYREG_PRT2_CTL
LCD_RST__DM0 EQU CYREG_PRT2_DM0
LCD_RST__DM1 EQU CYREG_PRT2_DM1
LCD_RST__DM2 EQU CYREG_PRT2_DM2
LCD_RST__DR EQU CYREG_PRT2_DR
LCD_RST__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_RST__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_RST__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_RST__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_RST__MASK EQU 0x01
LCD_RST__PORT EQU 2
LCD_RST__PRT EQU CYREG_PRT2_PRT
LCD_RST__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_RST__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_RST__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_RST__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_RST__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_RST__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_RST__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_RST__PS EQU CYREG_PRT2_PS
LCD_RST__SHIFT EQU 0
LCD_RST__SLW EQU CYREG_PRT2_SLW

; LCD_SCK
LCD_SCK__0__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_SCK__0__MASK EQU 0x40
LCD_SCK__0__PC EQU CYREG_PRT2_PC6
LCD_SCK__0__PORT EQU 2
LCD_SCK__0__SHIFT EQU 6
LCD_SCK__AG EQU CYREG_PRT2_AG
LCD_SCK__AMUX EQU CYREG_PRT2_AMUX
LCD_SCK__BIE EQU CYREG_PRT2_BIE
LCD_SCK__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_SCK__BYP EQU CYREG_PRT2_BYP
LCD_SCK__CTL EQU CYREG_PRT2_CTL
LCD_SCK__DM0 EQU CYREG_PRT2_DM0
LCD_SCK__DM1 EQU CYREG_PRT2_DM1
LCD_SCK__DM2 EQU CYREG_PRT2_DM2
LCD_SCK__DR EQU CYREG_PRT2_DR
LCD_SCK__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_SCK__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_SCK__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_SCK__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_SCK__MASK EQU 0x40
LCD_SCK__PORT EQU 2
LCD_SCK__PRT EQU CYREG_PRT2_PRT
LCD_SCK__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_SCK__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_SCK__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_SCK__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_SCK__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_SCK__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_SCK__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_SCK__PS EQU CYREG_PRT2_PS
LCD_SCK__SHIFT EQU 6
LCD_SCK__SLW EQU CYREG_PRT2_SLW

; LCD_SPI_BSPIM
LCD_SPI_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
LCD_SPI_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB12_13_CTL
LCD_SPI_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB12_13_CTL
LCD_SPI_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB12_13_CTL
LCD_SPI_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB12_13_CTL
LCD_SPI_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB12_13_MSK
LCD_SPI_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB12_13_MSK
LCD_SPI_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB12_13_MSK
LCD_SPI_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB12_13_MSK
LCD_SPI_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
LCD_SPI_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B0_UDB12_CTL
LCD_SPI_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB12_ST_CTL
LCD_SPI_BSPIM_BitCounter__COUNT_REG EQU CYREG_B0_UDB12_CTL
LCD_SPI_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B0_UDB12_ST_CTL
LCD_SPI_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB12_MSK_ACTL
LCD_SPI_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB12_MSK_ACTL
LCD_SPI_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B0_UDB12_MSK
LCD_SPI_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
LCD_SPI_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB12_13_ST
LCD_SPI_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B0_UDB12_MSK
LCD_SPI_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB12_MSK_ACTL
LCD_SPI_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB12_MSK_ACTL
LCD_SPI_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
LCD_SPI_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB12_ST_CTL
LCD_SPI_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB12_ST_CTL
LCD_SPI_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B0_UDB12_ST
LCD_SPI_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
LCD_SPI_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
LCD_SPI_BSPIM_RxStsReg__4__MASK EQU 0x10
LCD_SPI_BSPIM_RxStsReg__4__POS EQU 4
LCD_SPI_BSPIM_RxStsReg__5__MASK EQU 0x20
LCD_SPI_BSPIM_RxStsReg__5__POS EQU 5
LCD_SPI_BSPIM_RxStsReg__6__MASK EQU 0x40
LCD_SPI_BSPIM_RxStsReg__6__POS EQU 6
LCD_SPI_BSPIM_RxStsReg__MASK EQU 0x70
LCD_SPI_BSPIM_RxStsReg__MASK_REG EQU CYREG_B0_UDB11_MSK
LCD_SPI_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
LCD_SPI_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B0_UDB11_ST
LCD_SPI_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B0_UDB10_11_A0
LCD_SPI_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B0_UDB10_11_A1
LCD_SPI_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B0_UDB10_11_D0
LCD_SPI_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B0_UDB10_11_D1
LCD_SPI_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
LCD_SPI_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B0_UDB10_11_F0
LCD_SPI_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B0_UDB10_11_F1
LCD_SPI_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B0_UDB10_A0_A1
LCD_SPI_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B0_UDB10_A0
LCD_SPI_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B0_UDB10_A1
LCD_SPI_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B0_UDB10_D0_D1
LCD_SPI_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B0_UDB10_D0
LCD_SPI_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B0_UDB10_D1
LCD_SPI_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
LCD_SPI_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B0_UDB10_F0_F1
LCD_SPI_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B0_UDB10_F0
LCD_SPI_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B0_UDB10_F1
LCD_SPI_BSPIM_TxStsReg__0__MASK EQU 0x01
LCD_SPI_BSPIM_TxStsReg__0__POS EQU 0
LCD_SPI_BSPIM_TxStsReg__1__MASK EQU 0x02
LCD_SPI_BSPIM_TxStsReg__1__POS EQU 1
LCD_SPI_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
LCD_SPI_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB10_11_ST
LCD_SPI_BSPIM_TxStsReg__2__MASK EQU 0x04
LCD_SPI_BSPIM_TxStsReg__2__POS EQU 2
LCD_SPI_BSPIM_TxStsReg__3__MASK EQU 0x08
LCD_SPI_BSPIM_TxStsReg__3__POS EQU 3
LCD_SPI_BSPIM_TxStsReg__4__MASK EQU 0x10
LCD_SPI_BSPIM_TxStsReg__4__POS EQU 4
LCD_SPI_BSPIM_TxStsReg__MASK EQU 0x1F
LCD_SPI_BSPIM_TxStsReg__MASK_REG EQU CYREG_B0_UDB10_MSK
LCD_SPI_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
LCD_SPI_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B0_UDB10_ST

; LCD_SPI_IntClock
LCD_SPI_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
LCD_SPI_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
LCD_SPI_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
LCD_SPI_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
LCD_SPI_IntClock__INDEX EQU 0x00
LCD_SPI_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
LCD_SPI_IntClock__PM_ACT_MSK EQU 0x01
LCD_SPI_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
LCD_SPI_IntClock__PM_STBY_MSK EQU 0x01

; LCD_SPI_RxInternalInterrupt
LCD_SPI_RxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
LCD_SPI_RxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
LCD_SPI_RxInternalInterrupt__INTC_MASK EQU 0x01
LCD_SPI_RxInternalInterrupt__INTC_NUMBER EQU 0
LCD_SPI_RxInternalInterrupt__INTC_PRIOR_NUM EQU 7
LCD_SPI_RxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
LCD_SPI_RxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
LCD_SPI_RxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; LCD_SPI_TxInternalInterrupt
LCD_SPI_TxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
LCD_SPI_TxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
LCD_SPI_TxInternalInterrupt__INTC_MASK EQU 0x02
LCD_SPI_TxInternalInterrupt__INTC_NUMBER EQU 1
LCD_SPI_TxInternalInterrupt__INTC_PRIOR_NUM EQU 7
LCD_SPI_TxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
LCD_SPI_TxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
LCD_SPI_TxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; LCD_MISO
LCD_MISO__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_MISO__0__MASK EQU 0x10
LCD_MISO__0__PC EQU CYREG_PRT2_PC4
LCD_MISO__0__PORT EQU 2
LCD_MISO__0__SHIFT EQU 4
LCD_MISO__AG EQU CYREG_PRT2_AG
LCD_MISO__AMUX EQU CYREG_PRT2_AMUX
LCD_MISO__BIE EQU CYREG_PRT2_BIE
LCD_MISO__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_MISO__BYP EQU CYREG_PRT2_BYP
LCD_MISO__CTL EQU CYREG_PRT2_CTL
LCD_MISO__DM0 EQU CYREG_PRT2_DM0
LCD_MISO__DM1 EQU CYREG_PRT2_DM1
LCD_MISO__DM2 EQU CYREG_PRT2_DM2
LCD_MISO__DR EQU CYREG_PRT2_DR
LCD_MISO__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_MISO__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_MISO__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_MISO__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_MISO__MASK EQU 0x10
LCD_MISO__PORT EQU 2
LCD_MISO__PRT EQU CYREG_PRT2_PRT
LCD_MISO__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_MISO__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_MISO__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_MISO__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_MISO__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_MISO__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_MISO__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_MISO__PS EQU CYREG_PRT2_PS
LCD_MISO__SHIFT EQU 4
LCD_MISO__SLW EQU CYREG_PRT2_SLW

; LCD_MOSI
LCD_MOSI__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_MOSI__0__MASK EQU 0x20
LCD_MOSI__0__PC EQU CYREG_PRT2_PC5
LCD_MOSI__0__PORT EQU 2
LCD_MOSI__0__SHIFT EQU 5
LCD_MOSI__AG EQU CYREG_PRT2_AG
LCD_MOSI__AMUX EQU CYREG_PRT2_AMUX
LCD_MOSI__BIE EQU CYREG_PRT2_BIE
LCD_MOSI__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_MOSI__BYP EQU CYREG_PRT2_BYP
LCD_MOSI__CTL EQU CYREG_PRT2_CTL
LCD_MOSI__DM0 EQU CYREG_PRT2_DM0
LCD_MOSI__DM1 EQU CYREG_PRT2_DM1
LCD_MOSI__DM2 EQU CYREG_PRT2_DM2
LCD_MOSI__DR EQU CYREG_PRT2_DR
LCD_MOSI__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_MOSI__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_MOSI__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_MOSI__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_MOSI__MASK EQU 0x20
LCD_MOSI__PORT EQU 2
LCD_MOSI__PRT EQU CYREG_PRT2_PRT
LCD_MOSI__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_MOSI__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_MOSI__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_MOSI__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_MOSI__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_MOSI__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_MOSI__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_MOSI__PS EQU CYREG_PRT2_PS
LCD_MOSI__SHIFT EQU 5
LCD_MOSI__SLW EQU CYREG_PRT2_SLW

; Systick_Timer_TimerHW
Systick_Timer_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
Systick_Timer_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
Systick_Timer_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
Systick_Timer_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
Systick_Timer_TimerHW__CFG2 EQU CYREG_TMR0_CFG2
Systick_Timer_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Systick_Timer_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Systick_Timer_TimerHW__PER0 EQU CYREG_TMR0_PER0
Systick_Timer_TimerHW__PER1 EQU CYREG_TMR0_PER1
Systick_Timer_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Systick_Timer_TimerHW__PM_ACT_MSK EQU 0x01
Systick_Timer_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Systick_Timer_TimerHW__PM_STBY_MSK EQU 0x01
Systick_Timer_TimerHW__RT0 EQU CYREG_TMR0_RT0
Systick_Timer_TimerHW__RT1 EQU CYREG_TMR0_RT1
Systick_Timer_TimerHW__SR0 EQU CYREG_TMR0_SR0

; Systick_Counter_CounterUDB
Systick_Counter_CounterUDB_sC32_counterdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB04_05_A0
Systick_Counter_CounterUDB_sC32_counterdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB04_05_A1
Systick_Counter_CounterUDB_sC32_counterdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB04_05_D0
Systick_Counter_CounterUDB_sC32_counterdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB04_05_D1
Systick_Counter_CounterUDB_sC32_counterdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB04_05_F0
Systick_Counter_CounterUDB_sC32_counterdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB04_05_F1
Systick_Counter_CounterUDB_sC32_counterdp_u0__A0_A1_REG EQU CYREG_B1_UDB04_A0_A1
Systick_Counter_CounterUDB_sC32_counterdp_u0__A0_REG EQU CYREG_B1_UDB04_A0
Systick_Counter_CounterUDB_sC32_counterdp_u0__A1_REG EQU CYREG_B1_UDB04_A1
Systick_Counter_CounterUDB_sC32_counterdp_u0__D0_D1_REG EQU CYREG_B1_UDB04_D0_D1
Systick_Counter_CounterUDB_sC32_counterdp_u0__D0_REG EQU CYREG_B1_UDB04_D0
Systick_Counter_CounterUDB_sC32_counterdp_u0__D1_REG EQU CYREG_B1_UDB04_D1
Systick_Counter_CounterUDB_sC32_counterdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u0__F0_F1_REG EQU CYREG_B1_UDB04_F0_F1
Systick_Counter_CounterUDB_sC32_counterdp_u0__F0_REG EQU CYREG_B1_UDB04_F0
Systick_Counter_CounterUDB_sC32_counterdp_u0__F1_REG EQU CYREG_B1_UDB04_F1
Systick_Counter_CounterUDB_sC32_counterdp_u1__16BIT_A0_REG EQU CYREG_B1_UDB05_06_A0
Systick_Counter_CounterUDB_sC32_counterdp_u1__16BIT_A1_REG EQU CYREG_B1_UDB05_06_A1
Systick_Counter_CounterUDB_sC32_counterdp_u1__16BIT_D0_REG EQU CYREG_B1_UDB05_06_D0
Systick_Counter_CounterUDB_sC32_counterdp_u1__16BIT_D1_REG EQU CYREG_B1_UDB05_06_D1
Systick_Counter_CounterUDB_sC32_counterdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u1__16BIT_F0_REG EQU CYREG_B1_UDB05_06_F0
Systick_Counter_CounterUDB_sC32_counterdp_u1__16BIT_F1_REG EQU CYREG_B1_UDB05_06_F1
Systick_Counter_CounterUDB_sC32_counterdp_u1__A0_A1_REG EQU CYREG_B1_UDB05_A0_A1
Systick_Counter_CounterUDB_sC32_counterdp_u1__A0_REG EQU CYREG_B1_UDB05_A0
Systick_Counter_CounterUDB_sC32_counterdp_u1__A1_REG EQU CYREG_B1_UDB05_A1
Systick_Counter_CounterUDB_sC32_counterdp_u1__D0_D1_REG EQU CYREG_B1_UDB05_D0_D1
Systick_Counter_CounterUDB_sC32_counterdp_u1__D0_REG EQU CYREG_B1_UDB05_D0
Systick_Counter_CounterUDB_sC32_counterdp_u1__D1_REG EQU CYREG_B1_UDB05_D1
Systick_Counter_CounterUDB_sC32_counterdp_u1__DP_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u1__F0_F1_REG EQU CYREG_B1_UDB05_F0_F1
Systick_Counter_CounterUDB_sC32_counterdp_u1__F0_REG EQU CYREG_B1_UDB05_F0
Systick_Counter_CounterUDB_sC32_counterdp_u1__F1_REG EQU CYREG_B1_UDB05_F1
Systick_Counter_CounterUDB_sC32_counterdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u2__16BIT_A0_REG EQU CYREG_B1_UDB06_07_A0
Systick_Counter_CounterUDB_sC32_counterdp_u2__16BIT_A1_REG EQU CYREG_B1_UDB06_07_A1
Systick_Counter_CounterUDB_sC32_counterdp_u2__16BIT_D0_REG EQU CYREG_B1_UDB06_07_D0
Systick_Counter_CounterUDB_sC32_counterdp_u2__16BIT_D1_REG EQU CYREG_B1_UDB06_07_D1
Systick_Counter_CounterUDB_sC32_counterdp_u2__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u2__16BIT_F0_REG EQU CYREG_B1_UDB06_07_F0
Systick_Counter_CounterUDB_sC32_counterdp_u2__16BIT_F1_REG EQU CYREG_B1_UDB06_07_F1
Systick_Counter_CounterUDB_sC32_counterdp_u2__A0_A1_REG EQU CYREG_B1_UDB06_A0_A1
Systick_Counter_CounterUDB_sC32_counterdp_u2__A0_REG EQU CYREG_B1_UDB06_A0
Systick_Counter_CounterUDB_sC32_counterdp_u2__A1_REG EQU CYREG_B1_UDB06_A1
Systick_Counter_CounterUDB_sC32_counterdp_u2__D0_D1_REG EQU CYREG_B1_UDB06_D0_D1
Systick_Counter_CounterUDB_sC32_counterdp_u2__D0_REG EQU CYREG_B1_UDB06_D0
Systick_Counter_CounterUDB_sC32_counterdp_u2__D1_REG EQU CYREG_B1_UDB06_D1
Systick_Counter_CounterUDB_sC32_counterdp_u2__DP_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u2__F0_F1_REG EQU CYREG_B1_UDB06_F0_F1
Systick_Counter_CounterUDB_sC32_counterdp_u2__F0_REG EQU CYREG_B1_UDB06_F0
Systick_Counter_CounterUDB_sC32_counterdp_u2__F1_REG EQU CYREG_B1_UDB06_F1
Systick_Counter_CounterUDB_sC32_counterdp_u3__16BIT_A0_REG EQU CYREG_B1_UDB07_08_A0
Systick_Counter_CounterUDB_sC32_counterdp_u3__16BIT_A1_REG EQU CYREG_B1_UDB07_08_A1
Systick_Counter_CounterUDB_sC32_counterdp_u3__16BIT_D0_REG EQU CYREG_B1_UDB07_08_D0
Systick_Counter_CounterUDB_sC32_counterdp_u3__16BIT_D1_REG EQU CYREG_B1_UDB07_08_D1
Systick_Counter_CounterUDB_sC32_counterdp_u3__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u3__16BIT_F0_REG EQU CYREG_B1_UDB07_08_F0
Systick_Counter_CounterUDB_sC32_counterdp_u3__16BIT_F1_REG EQU CYREG_B1_UDB07_08_F1
Systick_Counter_CounterUDB_sC32_counterdp_u3__A0_A1_REG EQU CYREG_B1_UDB07_A0_A1
Systick_Counter_CounterUDB_sC32_counterdp_u3__A0_REG EQU CYREG_B1_UDB07_A0
Systick_Counter_CounterUDB_sC32_counterdp_u3__A1_REG EQU CYREG_B1_UDB07_A1
Systick_Counter_CounterUDB_sC32_counterdp_u3__D0_D1_REG EQU CYREG_B1_UDB07_D0_D1
Systick_Counter_CounterUDB_sC32_counterdp_u3__D0_REG EQU CYREG_B1_UDB07_D0
Systick_Counter_CounterUDB_sC32_counterdp_u3__D1_REG EQU CYREG_B1_UDB07_D1
Systick_Counter_CounterUDB_sC32_counterdp_u3__DP_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
Systick_Counter_CounterUDB_sC32_counterdp_u3__F0_F1_REG EQU CYREG_B1_UDB07_F0_F1
Systick_Counter_CounterUDB_sC32_counterdp_u3__F0_REG EQU CYREG_B1_UDB07_F0
Systick_Counter_CounterUDB_sC32_counterdp_u3__F1_REG EQU CYREG_B1_UDB07_F1
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB05_06_MSK
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB05_06_MSK
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__7__MASK EQU 0x80
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__7__POS EQU 7
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB05_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB05_ST_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__COUNT_REG EQU CYREG_B1_UDB05_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB05_ST_CTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__MASK EQU 0x80
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Systick_Counter_CounterUDB_sCTRLReg_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB05_MSK
Systick_Counter_CounterUDB_sSTSReg_stsreg__0__MASK EQU 0x01
Systick_Counter_CounterUDB_sSTSReg_stsreg__0__POS EQU 0
Systick_Counter_CounterUDB_sSTSReg_stsreg__1__MASK EQU 0x02
Systick_Counter_CounterUDB_sSTSReg_stsreg__1__POS EQU 1
Systick_Counter_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
Systick_Counter_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB07_08_ST
Systick_Counter_CounterUDB_sSTSReg_stsreg__2__MASK EQU 0x04
Systick_Counter_CounterUDB_sSTSReg_stsreg__2__POS EQU 2
Systick_Counter_CounterUDB_sSTSReg_stsreg__5__MASK EQU 0x20
Systick_Counter_CounterUDB_sSTSReg_stsreg__5__POS EQU 5
Systick_Counter_CounterUDB_sSTSReg_stsreg__6__MASK EQU 0x40
Systick_Counter_CounterUDB_sSTSReg_stsreg__6__POS EQU 6
Systick_Counter_CounterUDB_sSTSReg_stsreg__MASK EQU 0x67
Systick_Counter_CounterUDB_sSTSReg_stsreg__MASK_REG EQU CYREG_B1_UDB07_MSK
Systick_Counter_CounterUDB_sSTSReg_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
Systick_Counter_CounterUDB_sSTSReg_stsreg__STATUS_REG EQU CYREG_B1_UDB07_ST

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 19
CYDEV_CHIP_DIE_PSOC4A EQU 11
CYDEV_CHIP_DIE_PSOC5LP EQU 18
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 11
CYDEV_CHIP_MEMBER_4C EQU 16
CYDEV_CHIP_MEMBER_4D EQU 7
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 12
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 10
CYDEV_CHIP_MEMBER_4I EQU 15
CYDEV_CHIP_MEMBER_4J EQU 8
CYDEV_CHIP_MEMBER_4K EQU 9
CYDEV_CHIP_MEMBER_4L EQU 14
CYDEV_CHIP_MEMBER_4M EQU 13
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 18
CYDEV_CHIP_MEMBER_5B EQU 17
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 0
CYDEV_INTR_RISING EQU 0x00000003
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
