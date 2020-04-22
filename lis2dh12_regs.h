/**
  * @file lis2dh12_regs.h
  * @author generated by mrt-device utility 
  * @link [https://github.com/uprev-mrt/mrtutils/wiki/mrt-device]
  * @brief values and constants for the LIS2DH12 device registers
  * 
  */

#define LIS2DH12_I2C_ADDRESS 0x52
#define LIS2DH12_REG_ADDR_SIZE 1


/*******************************************************************************
  Register Addresses                                                                              
*******************************************************************************/

#define LIS_REG_STATUS_AUX_ADDR                                    0x07 /* n/a */
#define LIS_REG_OUT_TEMP_ADDR                                      0x0C /* Temperature sensor data */
#define LIS_REG_WHO_AM_I_ADDR                                      0x0F /* Device identification register */
#define LIS_REG_CTRL0_ADDR                                         0x1E /* Control Register 0 */
#define LIS_REG_TEMP_CFG_ADDR                                      0x1F /* n/a */
#define LIS_REG_CTRL1_ADDR                                         0x20 /* Control Register 1 */
#define LIS_REG_CTRL2_ADDR                                         0x21 /* Control Register 2 */
#define LIS_REG_CTRL3_ADDR                                         0x22 /* Control Register 3 */
#define LIS_REG_CTRL4_ADDR                                         0x23 /* Control Register 4 */
#define LIS_REG_CTRL5_ADDR                                         0x24 /* Control Register 5 */
#define LIS_REG_CTRL6_ADDR                                         0x25 /* Control Register 6 */
#define LIS_REG_REFERENCE_ADDR                                     0x26 /* Reference value for interrupt generation */
#define LIS_REG_STATUS_ADDR                                        0x27 /* n/a */
#define LIS_REG_OUT_X_ADDR                                         0x28 /* X-axis acceleration data */
#define LIS_REG_OUT_Y_ADDR                                         0x2A /* Y-axis acceleration data */
#define LIS_REG_OUT_Z_ADDR                                         0x2C /* Z-axis acceleration data */
#define LIS_REG_FIFO_CTRL_ADDR                                     0x2E /* Fifo Control register */
#define LIS_REG_FIFO_SRC_ADDR                                      0x2F /* Fifo status register */
#define LIS_REG_INT1_CFG_ADDR                                      0x30 /* Interrupt 1 config register */
#define LIS_REG_INT1_SRC_ADDR                                      0x31 /* Interrupt 1 source register */
#define LIS_REG_INT1_THS_ADDR                                      0x32 /* Interrupt 1 threshold register */
#define LIS_REG_INT1_DURATION_ADDR                                 0x33 /* Interrupt 1 duration register */
#define LIS_REG_INT2_CFG_ADDR                                      0x34 /* Interrupt 2 config register */
#define LIS_REG_INT2_SRC_ADDR                                      0x35 /* Interrupt 2 source register */
#define LIS_REG_INT2_THS_ADDR                                      0x36 /* Interrupt 2 threshold register */
#define LIS_REG_INT2_DURATION_ADDR                                 0x37 /* Interrupt 2 duration register */
#define LIS_REG_CLICK_CFG_ADDR                                     0x38 /* Click config */
#define LIS_REG_CLICK_SRC_ADDR                                     0x39 /* Click source */
#define LIS_REG_CLICK_THS_ADDR                                     0x3A /* Click Threshold */
#define LIS_REG_TIME_LIMIT_ADDR                                    0x3B /* Click time limit */
#define LIS_REG_TIME_LATENCY_ADDR                                  0x3C /* Click time latency */
#define LIS_REG_TIME_WINDOW_ADDR                                   0x3D /* Click time window */
#define LIS_REG_ACT_THS_ADDR                                       0x3E /* Activity threshold */
#define LIS_REG_ACT_DUR_ADDR                                       0x3F /* Activity duration */


/*******************************************************************************
  Fields                                                                              
*******************************************************************************/

/* WHO_AM_I Register Fields */
    /* WHO_AM_I -> WHO_AM_I */
    #define LIS_WHO_AM_I_WHO_AM_I_FIELD_MASK                       0xFF /* Device identification register */
    #define LIS_WHO_AM_I_WHO_AM_I_FIELD_OFFSET                     0x00

/* CTRL0 Register Fields */
    /* CTRL0 -> CTRL0 */
    #define LIS_CTRL0_CTRL0_FIELD_MASK                             0xFF /* Control Register 0 */
    #define LIS_CTRL0_CTRL0_FIELD_OFFSET                           0x00

/* TEMP_CFG Register Fields */
    /* TEMP_CFG -> TEMP_CFG */
    #define LIS_TEMP_CFG_TEMP_CFG_FIELD_MASK                       0xFF /* n/a */
    #define LIS_TEMP_CFG_TEMP_CFG_FIELD_OFFSET                     0x00

/* CTRL1 Register Fields */
    /* CTRL1 -> Flags */
    #define LIS_CTRL1_X_EN                                         0x01 /* X-axis enable */
    #define LIS_CTRL1_Y_EN                                         0x02 /* Y-axis enable */
    #define LIS_CTRL1_Z_EN                                         0x04 /* Z-axis enable */
    #define LIS_CTRL1_LOW_PWR                                      0x08 /* Low-power mode enable */
    /* CTRL1 -> ODR */
    #define LIS_CTRL1_ODR_FIELD_MASK                               0xF0 /* Data rate selection */
    #define LIS_CTRL1_ODR_FIELD_OFFSET                             0x04
      #define LIS_CTRL1_ODR_PWR_DWN                                0x00 /* Power-down mode */
      #define LIS_CTRL1_ODR_1HZ                                    0x01 /* HR/ Normal / Low-power mode (1 Hz) */
      #define LIS_CTRL1_ODR_10HZ                                   0x08 /* HR/ Normal / Low-power mode (10 Hz) */
      #define LIS_CTRL1_ODR_25HZ                                   0x09 /* HR/ Normal / Low-power mode (25 Hz) */
      #define LIS_CTRL1_ODR_50HZ                                   0x40 /* HR/ Normal / Low-power mode (50 Hz) */
      #define LIS_CTRL1_ODR_100HZ                                  0x41 /* HR/ Normal / Low-power mode (100 Hz) */
      #define LIS_CTRL1_ODR_200HZ                                  0x48 /* HR/ Normal / Low-power mode (200 Hz) */
      #define LIS_CTRL1_ODR_400HZ                                  0x49 /* HR/ Normal / Low-power mode (400 Hz) */
      #define LIS_CTRL1_ODR_1620HZ                                 0x07 /* Low-power mode (1.620 kHz) */
      #define LIS_CTRL1_ODR_5376HZ                                 0x07 /* HR/ Normal (1.344 kHz) / Low-power mode (5.376 kHz) */

/* CTRL2 Register Fields */
    /* CTRL2 -> Flags */
    #define LIS_CTRL2_HP_IA1                                       0x01 /* High-pass filter enabled for AOI function on Interrupt 1 */
    #define LIS_CTRL2_HP_IA2                                       0x02 /* High-pass filter enabled for AOI function on Interrupt 2 */
    #define LIS_CTRL2_HPCLICK                                      0x04 /* High-pass filter enabled for Click function */
    #define LIS_CTRL2_FDS                                          0x08 /* Filtered data selection */

/* CTRL3 Register Fields */
    /* CTRL3 -> CTRL3 */
    #define LIS_CTRL3_CTRL3_FIELD_MASK                             0xFF /* Control Register 3 */
    #define LIS_CTRL3_CTRL3_FIELD_OFFSET                           0x00

/* CTRL4 Register Fields */
    /* CTRL4 -> CTRL4 */
    #define LIS_CTRL4_CTRL4_FIELD_MASK                             0xFF /* Control Register 4 */
    #define LIS_CTRL4_CTRL4_FIELD_OFFSET                           0x00

/* CTRL5 Register Fields */
    /* CTRL5 -> CTRL5 */
    #define LIS_CTRL5_CTRL5_FIELD_MASK                             0xFF /* Control Register 5 */
    #define LIS_CTRL5_CTRL5_FIELD_OFFSET                           0x00

/* CTRL6 Register Fields */
    /* CTRL6 -> CTRL6 */
    #define LIS_CTRL6_CTRL6_FIELD_MASK                             0xFF /* Control Register 6 */
    #define LIS_CTRL6_CTRL6_FIELD_OFFSET                           0x00

/* REFERENCE Register Fields */
    /* REFERENCE -> REFERENCE */
    #define LIS_REFERENCE_REFERENCE_FIELD_MASK                     0xFF /* Reference value for interrupt generation */
    #define LIS_REFERENCE_REFERENCE_FIELD_OFFSET                   0x00

/* FIFO_CTRL Register Fields */
    /* FIFO_CTRL -> FIFO_CTRL */
    #define LIS_FIFO_CTRL_FIFO_CTRL_FIELD_MASK                     0xFF /* Fifo Control register */
    #define LIS_FIFO_CTRL_FIFO_CTRL_FIELD_OFFSET                   0x00

/* INT1_CFG Register Fields */
    /* INT1_CFG -> INT1_CFG */
    #define LIS_INT1_CFG_INT1_CFG_FIELD_MASK                       0xFF /* Interrupt 1 config register */
    #define LIS_INT1_CFG_INT1_CFG_FIELD_OFFSET                     0x00

/* INT1_THS Register Fields */
    /* INT1_THS -> INT1_THS */
    #define LIS_INT1_THS_INT1_THS_FIELD_MASK                       0xFF /* Interrupt 1 threshold register */
    #define LIS_INT1_THS_INT1_THS_FIELD_OFFSET                     0x00

/* INT1_DURATION Register Fields */
    /* INT1_DURATION -> INT1_DURATION */
    #define LIS_INT1_DURATION_INT1_DURATION_FIELD_MASK             0xFF /* Interrupt 1 duration register */
    #define LIS_INT1_DURATION_INT1_DURATION_FIELD_OFFSET           0x00

/* INT2_CFG Register Fields */
    /* INT2_CFG -> INT2_CFG */
    #define LIS_INT2_CFG_INT2_CFG_FIELD_MASK                       0xFF /* Interrupt 2 config register */
    #define LIS_INT2_CFG_INT2_CFG_FIELD_OFFSET                     0x00

/* INT2_THS Register Fields */
    /* INT2_THS -> INT2_THS */
    #define LIS_INT2_THS_INT2_THS_FIELD_MASK                       0xFF /* Interrupt 2 threshold register */
    #define LIS_INT2_THS_INT2_THS_FIELD_OFFSET                     0x00

/* INT2_DURATION Register Fields */
    /* INT2_DURATION -> INT2_DURATION */
    #define LIS_INT2_DURATION_INT2_DURATION_FIELD_MASK             0xFF /* Interrupt 2 duration register */
    #define LIS_INT2_DURATION_INT2_DURATION_FIELD_OFFSET           0x00

/* CLICK_CFG Register Fields */
    /* CLICK_CFG -> CLICK_CFG */
    #define LIS_CLICK_CFG_CLICK_CFG_FIELD_MASK                     0xFF /* Click config */
    #define LIS_CLICK_CFG_CLICK_CFG_FIELD_OFFSET                   0x00

/* CLICK_THS Register Fields */
    /* CLICK_THS -> CLICK_THS */
    #define LIS_CLICK_THS_CLICK_THS_FIELD_MASK                     0xFF /* Click Threshold */
    #define LIS_CLICK_THS_CLICK_THS_FIELD_OFFSET                   0x00

/* TIME_LIMIT Register Fields */
    /* TIME_LIMIT -> TIME_LIMIT */
    #define LIS_TIME_LIMIT_TIME_LIMIT_FIELD_MASK                   0xFF /* Click time limit */
    #define LIS_TIME_LIMIT_TIME_LIMIT_FIELD_OFFSET                 0x00

/* TIME_LATENCY Register Fields */
    /* TIME_LATENCY -> TIME_LATENCY */
    #define LIS_TIME_LATENCY_TIME_LATENCY_FIELD_MASK               0xFF /* Click time latency */
    #define LIS_TIME_LATENCY_TIME_LATENCY_FIELD_OFFSET             0x00

/* TIME_WINDOW Register Fields */
    /* TIME_WINDOW -> TIME_WINDOW */
    #define LIS_TIME_WINDOW_TIME_WINDOW_FIELD_MASK                 0xFF /* Click time window */
    #define LIS_TIME_WINDOW_TIME_WINDOW_FIELD_OFFSET               0x00

/* ACT_THS Register Fields */
    /* ACT_THS -> ACT_THS */
    #define LIS_ACT_THS_ACT_THS_FIELD_MASK                         0xFF /* Activity threshold */
    #define LIS_ACT_THS_ACT_THS_FIELD_OFFSET                       0x00

/* ACT_DUR Register Fields */
    /* ACT_DUR -> ACT_DUR */
    #define LIS_ACT_DUR_ACT_DUR_FIELD_MASK                         0xFF /* Activity duration */
    #define LIS_ACT_DUR_ACT_DUR_FIELD_OFFSET                       0x00


/*******************************************************************************
  Default Values                                                                              
*******************************************************************************/

#define LIS_WHO_AM_I_DEFAULT                                       0x33
#define LIS_CTRL0_DEFAULT                                          0x10
#define LIS_TEMP_CFG_DEFAULT                                       0x07
#define LIS_CTRL1_DEFAULT                                          0x07
#define LIS_CTRL2_DEFAULT                                          0x00
#define LIS_CTRL3_DEFAULT                                          0x00
#define LIS_CTRL4_DEFAULT                                          0x00
#define LIS_CTRL5_DEFAULT                                          0x00
#define LIS_CTRL6_DEFAULT                                          0x00
#define LIS_REFERENCE_DEFAULT                                      0x00
#define LIS_FIFO_CTRL_DEFAULT                                      0x00
#define LIS_INT1_CFG_DEFAULT                                       0x00
#define LIS_INT1_THS_DEFAULT                                       0x00
#define LIS_INT1_DURATION_DEFAULT                                  0x00
#define LIS_INT2_CFG_DEFAULT                                       0x00
#define LIS_INT2_THS_DEFAULT                                       0x00
#define LIS_INT2_DURATION_DEFAULT                                  0x00
#define LIS_CLICK_CFG_DEFAULT                                      0x00
#define LIS_CLICK_THS_DEFAULT                                      0x00
#define LIS_TIME_LIMIT_DEFAULT                                     0x00
#define LIS_TIME_LATENCY_DEFAULT                                   0x00
#define LIS_TIME_WINDOW_DEFAULT                                    0x00
#define LIS_ACT_THS_DEFAULT                                        0x00
#define LIS_ACT_DUR_DEFAULT                                        0x00

/*******************************************************************************
  Flag Set/Clear/Check                                                                             
*******************************************************************************/

/**
  *@brief sets flags on device
  *@param dev ptr to LIS2DH12 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  */
#define lis_set_flag(dev, reg, mask) regdev_set_flags(&(dev)->mRegDev,(reg), (mask))

/**
  *@brief clears flags on device
  *@param dev ptr to LIS2DH12 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  */
#define lis_clear_flag(dev, reg, mask) regdev_clear_flags(&(dev)->mRegDev,(reg), (mask))

/**
  *@brief checks flags on device
  *@param dev ptr to LIS2DH12 device
  *@param reg ptr to register definition
  *@param mask mask of flags to set
  *@return true if all flags in mask are set 
  *@return false if any flags in mask are not set
  */
#define lis_check_flag(dev, reg, mask) regdev_check_flags(&(dev)->mRegDev,(reg), (mask))

/*******************************************************************************
  Field Getters                                                                              
*******************************************************************************/

/**
 * @brief reads the WHO_AM_I field from the WHO_AM_I register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_who_am_i(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mWhoAmI, LIS_WHO_AM_I_WHO_AM_I_FIELD_MASK )
/**
 * @brief reads the CTRL0 field from the CTRL0 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_ctrl0(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCtrl0, LIS_CTRL0_CTRL0_FIELD_MASK )
/**
 * @brief reads the TEMP_CFG field from the TEMP_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_temp_cfg(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mTempCfg, LIS_TEMP_CFG_TEMP_CFG_FIELD_MASK )
/**
 * @brief reads the ODR field from the CTRL1 register 
 * @param dev ptr to LIS2DH12 device
 * @return LIS_CTRL1_ODR_PWR_DWN Power-down mode
 * @return LIS_CTRL1_ODR_1HZ HR/ Normal / Low-power mode (1 Hz)
 * @return LIS_CTRL1_ODR_10HZ HR/ Normal / Low-power mode (10 Hz)
 * @return LIS_CTRL1_ODR_25HZ HR/ Normal / Low-power mode (25 Hz)
 * @return LIS_CTRL1_ODR_50HZ HR/ Normal / Low-power mode (50 Hz)
 * @return LIS_CTRL1_ODR_100HZ HR/ Normal / Low-power mode (100 Hz)
 * @return LIS_CTRL1_ODR_200HZ HR/ Normal / Low-power mode (200 Hz)
 * @return LIS_CTRL1_ODR_400HZ HR/ Normal / Low-power mode (400 Hz)
 * @return LIS_CTRL1_ODR_1620HZ Low-power mode (1.620 kHz)
 * @return LIS_CTRL1_ODR_5376HZ HR/ Normal (1.344 kHz) / Low-power mode (5.376 kHz)
 */
#define lis_get_ctrl1_odr(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCtrl1, LIS_CTRL1_ODR_FIELD_MASK )
/**
 * @brief reads the CTRL3 field from the CTRL3 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_ctrl3(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCtrl3, LIS_CTRL3_CTRL3_FIELD_MASK )
/**
 * @brief reads the CTRL4 field from the CTRL4 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_ctrl4(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCtrl4, LIS_CTRL4_CTRL4_FIELD_MASK )
/**
 * @brief reads the CTRL5 field from the CTRL5 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_ctrl5(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCtrl5, LIS_CTRL5_CTRL5_FIELD_MASK )
/**
 * @brief reads the CTRL6 field from the CTRL6 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_ctrl6(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mCtrl6, LIS_CTRL6_CTRL6_FIELD_MASK )
/**
 * @brief reads the REFERENCE field from the REFERENCE register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_reference(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mReference, LIS_REFERENCE_REFERENCE_FIELD_MASK )
/**
 * @brief reads the FIFO_CTRL field from the FIFO_CTRL register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_fifo_ctrl(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mFifoCtrl, LIS_FIFO_CTRL_FIFO_CTRL_FIELD_MASK )
/**
 * @brief reads the INT1_CFG field from the INT1_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_int1_cfg(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mInt1Cfg, LIS_INT1_CFG_INT1_CFG_FIELD_MASK )
/**
 * @brief reads the INT1_THS field from the INT1_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_int1_ths(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mInt1Ths, LIS_INT1_THS_INT1_THS_FIELD_MASK )
/**
 * @brief reads the INT1_DURATION field from the INT1_DURATION register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_int1_duration(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mInt1Duration, LIS_INT1_DURATION_INT1_DURATION_FIELD_MASK )
/**
 * @brief reads the INT2_CFG field from the INT2_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_int2_cfg(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mInt2Cfg, LIS_INT2_CFG_INT2_CFG_FIELD_MASK )
/**
 * @brief reads the INT2_THS field from the INT2_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_int2_ths(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mInt2Ths, LIS_INT2_THS_INT2_THS_FIELD_MASK )
/**
 * @brief reads the INT2_DURATION field from the INT2_DURATION register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_int2_duration(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mInt2Duration, LIS_INT2_DURATION_INT2_DURATION_FIELD_MASK )
/**
 * @brief reads the CLICK_CFG field from the CLICK_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_click_cfg(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mClickCfg, LIS_CLICK_CFG_CLICK_CFG_FIELD_MASK )
/**
 * @brief reads the CLICK_THS field from the CLICK_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_click_ths(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mClickThs, LIS_CLICK_THS_CLICK_THS_FIELD_MASK )
/**
 * @brief reads the TIME_LIMIT field from the TIME_LIMIT register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_time_limit(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mTimeLimit, LIS_TIME_LIMIT_TIME_LIMIT_FIELD_MASK )
/**
 * @brief reads the TIME_LATENCY field from the TIME_LATENCY register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_time_latency(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mTimeLatency, LIS_TIME_LATENCY_TIME_LATENCY_FIELD_MASK )
/**
 * @brief reads the TIME_WINDOW field from the TIME_WINDOW register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_time_window(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mTimeWindow, LIS_TIME_WINDOW_TIME_WINDOW_FIELD_MASK )
/**
 * @brief reads the ACT_THS field from the ACT_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_act_ths(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mActThs, LIS_ACT_THS_ACT_THS_FIELD_MASK )
/**
 * @brief reads the ACT_DUR field from the ACT_DUR register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_get_act_dur(dev) regdev_read_field(&(dev)->mRegDev, &(dev)->mActDur, LIS_ACT_DUR_ACT_DUR_FIELD_MASK )


/*******************************************************************************
  Field Setters                                                                              
*******************************************************************************/

/**
 * @brief writes the CTRL0 field to the CTRL0 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_ctrl0(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCtrl0, LIS_CTRL0_CTRL0_FIELD_MASK , (val) )
/**
 * @brief writes the TEMP_CFG field to the TEMP_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_temp_cfg(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mTempCfg, LIS_TEMP_CFG_TEMP_CFG_FIELD_MASK , (val) )
/**
 * @brief writes the ODR field to the CTRL1 register 
 * @param dev ptr to LIS2DH12 device
 * @option LIS_CTRL1_ODR_PWR_DWN Power-down mode
 * @option LIS_CTRL1_ODR_1HZ HR/ Normal / Low-power mode (1 Hz)
 * @option LIS_CTRL1_ODR_10HZ HR/ Normal / Low-power mode (10 Hz)
 * @option LIS_CTRL1_ODR_25HZ HR/ Normal / Low-power mode (25 Hz)
 * @option LIS_CTRL1_ODR_50HZ HR/ Normal / Low-power mode (50 Hz)
 * @option LIS_CTRL1_ODR_100HZ HR/ Normal / Low-power mode (100 Hz)
 * @option LIS_CTRL1_ODR_200HZ HR/ Normal / Low-power mode (200 Hz)
 * @option LIS_CTRL1_ODR_400HZ HR/ Normal / Low-power mode (400 Hz)
 * @option LIS_CTRL1_ODR_1620HZ Low-power mode (1.620 kHz)
 * @option LIS_CTRL1_ODR_5376HZ HR/ Normal (1.344 kHz) / Low-power mode (5.376 kHz)
 */
#define lis_set_ctrl1_odr(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCtrl1, LIS_CTRL1_ODR_FIELD_MASK , (val) )
/**
 * @brief writes the CTRL3 field to the CTRL3 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_ctrl3(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCtrl3, LIS_CTRL3_CTRL3_FIELD_MASK , (val) )
/**
 * @brief writes the CTRL4 field to the CTRL4 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_ctrl4(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCtrl4, LIS_CTRL4_CTRL4_FIELD_MASK , (val) )
/**
 * @brief writes the CTRL5 field to the CTRL5 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_ctrl5(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCtrl5, LIS_CTRL5_CTRL5_FIELD_MASK , (val) )
/**
 * @brief writes the CTRL6 field to the CTRL6 register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_ctrl6(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mCtrl6, LIS_CTRL6_CTRL6_FIELD_MASK , (val) )
/**
 * @brief writes the REFERENCE field to the REFERENCE register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_reference(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mReference, LIS_REFERENCE_REFERENCE_FIELD_MASK , (val) )
/**
 * @brief writes the FIFO_CTRL field to the FIFO_CTRL register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_fifo_ctrl(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mFifoCtrl, LIS_FIFO_CTRL_FIFO_CTRL_FIELD_MASK , (val) )
/**
 * @brief writes the INT1_CFG field to the INT1_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_int1_cfg(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mInt1Cfg, LIS_INT1_CFG_INT1_CFG_FIELD_MASK , (val) )
/**
 * @brief writes the INT1_THS field to the INT1_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_int1_ths(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mInt1Ths, LIS_INT1_THS_INT1_THS_FIELD_MASK , (val) )
/**
 * @brief writes the INT1_DURATION field to the INT1_DURATION register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_int1_duration(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mInt1Duration, LIS_INT1_DURATION_INT1_DURATION_FIELD_MASK , (val) )
/**
 * @brief writes the INT2_CFG field to the INT2_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_int2_cfg(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mInt2Cfg, LIS_INT2_CFG_INT2_CFG_FIELD_MASK , (val) )
/**
 * @brief writes the INT2_THS field to the INT2_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_int2_ths(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mInt2Ths, LIS_INT2_THS_INT2_THS_FIELD_MASK , (val) )
/**
 * @brief writes the INT2_DURATION field to the INT2_DURATION register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_int2_duration(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mInt2Duration, LIS_INT2_DURATION_INT2_DURATION_FIELD_MASK , (val) )
/**
 * @brief writes the CLICK_CFG field to the CLICK_CFG register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_click_cfg(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mClickCfg, LIS_CLICK_CFG_CLICK_CFG_FIELD_MASK , (val) )
/**
 * @brief writes the CLICK_THS field to the CLICK_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_click_ths(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mClickThs, LIS_CLICK_THS_CLICK_THS_FIELD_MASK , (val) )
/**
 * @brief writes the TIME_LIMIT field to the TIME_LIMIT register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_time_limit(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mTimeLimit, LIS_TIME_LIMIT_TIME_LIMIT_FIELD_MASK , (val) )
/**
 * @brief writes the TIME_LATENCY field to the TIME_LATENCY register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_time_latency(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mTimeLatency, LIS_TIME_LATENCY_TIME_LATENCY_FIELD_MASK , (val) )
/**
 * @brief writes the TIME_WINDOW field to the TIME_WINDOW register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_time_window(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mTimeWindow, LIS_TIME_WINDOW_TIME_WINDOW_FIELD_MASK , (val) )
/**
 * @brief writes the ACT_THS field to the ACT_THS register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_act_ths(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mActThs, LIS_ACT_THS_ACT_THS_FIELD_MASK , (val) )
/**
 * @brief writes the ACT_DUR field to the ACT_DUR register 
 * @param dev ptr to LIS2DH12 device
 */
#define lis_set_act_dur(dev, val) regdev_write_field(&(dev)->mRegDev, &(dev)->mActDur, LIS_ACT_DUR_ACT_DUR_FIELD_MASK , (val) )

/*******************************************************************************
  Configs                                                                            
*******************************************************************************/

