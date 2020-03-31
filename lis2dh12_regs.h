/**
  * @file lis2dh12_dev.h
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


/*******************************************************************************
  Default Values                                                                              
*******************************************************************************/

#define LIS_WHO_AM_I_DEFAULT                                       0x33
#define LIS_TEMP_CFG_DEFAULT                                       0x10
#define LIS_CTRL2_DEFAULT                                          0x07

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


/*******************************************************************************
  Field Setters                                                                              
*******************************************************************************/

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

/*******************************************************************************
  Configs                                                                            
*******************************************************************************/
