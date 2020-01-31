/**
  * @file lis2dh12_dev.h
  * @author generated by mrt-device.py
  * @brief register defintions for LIS2DH12 device
  * 
  */

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "Devices/RegDevice/register_device.h"

/*user-block-top*/
/*user-block-top*/

#define LIS_I2C_ADDRESS obj.i2c_addr

/*******************************************************************************
  Registers
*******************************************************************************/

extern mrt_reg_t* lis_STATUS_AUX;
extern mrt_reg_t* lis_OUT_TEMP;
extern mrt_reg_t* lis_WHO_AM_I;
extern mrt_reg_t* lis_CTRL0;
extern mrt_reg_t* lis_TEMP_CFG;
extern mrt_reg_t* lis_CTRL1;
extern mrt_reg_t* lis_CTRL2;
extern mrt_reg_t* lis_CTRL3;
extern mrt_reg_t* lis_CTRL4;
extern mrt_reg_t* lis_CTRL5;
extern mrt_reg_t* lis_CTRL6;
extern mrt_reg_t* lis_REFERENCE;
extern mrt_reg_t* lis_STATUS;
extern mrt_reg_t* lis_OUT_X;
extern mrt_reg_t* lis_OUT_Y;
extern mrt_reg_t* lis_OUT_Z;
extern mrt_reg_t* lis_FIFO_CTRL;
extern mrt_reg_t* lis_FIFO_SRC;
extern mrt_reg_t* lis_INT1_CFG;
extern mrt_reg_t* lis_INT1_SRC;
extern mrt_reg_t* lis_INT1_THS;
extern mrt_reg_t* lis_INT1_DURATION;
extern mrt_reg_t* lis_INT2_CFG;
extern mrt_reg_t* lis_INT2_SRC;
extern mrt_reg_t* lis_INT2_THS;
extern mrt_reg_t* lis_INT2_DURATION;
extern mrt_reg_t* lis_CLICK_CFG;
extern mrt_reg_t* lis_CLICK_SRC;
extern mrt_reg_t* lis_CLICK_THS;
extern mrt_reg_t* lis_TIME_LIMIT;
extern mrt_reg_t* lis_TIME_LATENCY;
extern mrt_reg_t* lis_TIME_WINDOW;
extern mrt_reg_t* lis_ACT_THS;
extern mrt_reg_t* lis_ACT_DUR;


/*******************************************************************************
  Flags and Values                                                                                 
*******************************************************************************/

/* CTRL1 */
#define lis_CTRL1_X_EN                       0x01
#define lis_CTRL1_Y_EN                       0x02
#define lis_CTRL1_Z_EN                       0x04
#define lis_CTRL1_LOW_PWR                       0x08
/* CTRL2 */
#define lis_CTRL2_HP_IA1                       0x01
#define lis_CTRL2_HP_IA2                       0x02
#define lis_CTRL2_HPCLICK                       0x04
#define lis_CTRL2_FDS                       0x08

/*******************************************************************************
  Functions                                                                                
*******************************************************************************/

typedef struct{
    mrt_regdev_t mRegDev; //ptr to register base device 
    mrt_reg_t* mStatusAux;  //n/a
    mrt_reg_t* mOutTemp;  //Temperature sensor data
    mrt_reg_t* mWhoAmI;  //Device identification register
    mrt_reg_t* mCtrl0;  //Control Register 0
    mrt_reg_t* mTempCfg;  //n/a
    mrt_reg_t* mCtrl1;  //Control Register 1
    mrt_reg_t* mCtrl2;  //Control Register 2
    mrt_reg_t* mCtrl3;  //Control Register 3
    mrt_reg_t* mCtrl4;  //Control Register 4
    mrt_reg_t* mCtrl5;  //Control Register 5
    mrt_reg_t* mCtrl6;  //Control Register 6
    mrt_reg_t* mReference;  //Reference value for interrupt generation
    mrt_reg_t* mStatus;  //n/a
    mrt_reg_t* mOutX;  //X-axis acceleration data
    mrt_reg_t* mOutY;  //Y-axis acceleration data
    mrt_reg_t* mOutZ;  //Z-axis acceleration data
    mrt_reg_t* mFifoCtrl;  //Fifo Control register
    mrt_reg_t* mFifoSrc;  //Fifo status register
    mrt_reg_t* mInt1Cfg;  //Interrupt 1 config register
    mrt_reg_t* mInt1Src;  //Interrupt 1 source register
    mrt_reg_t* mInt1Ths;  //Interrupt 1 threshold register
    mrt_reg_t* mInt1Duration;  //Interrupt 1 duration register
    mrt_reg_t* mInt2Cfg;  //Interrupt 2 config register
    mrt_reg_t* mInt2Src;  //Interrupt 2 source register
    mrt_reg_t* mInt2Ths;  //Interrupt 2 threshold register
    mrt_reg_t* mInt2Duration;  //Interrupt 2 duration register
    mrt_reg_t* mClickCfg;  //Click config
    mrt_reg_t* mClickSrc;  //Click source
    mrt_reg_t* mClickThs;  //Click Threshold
    mrt_reg_t* mTimeLimit;  //Click time limit
    mrt_reg_t* mTimeLatency;  //Click time latency
    mrt_reg_t* mTimeWindow;  //Click time window
    mrt_reg_t* mActThs;  //Activity threshold
    mrt_reg_t* mActDur;  //Activity duration
/*user-block-struct*/
/*user-block-struct*/
}LIS2DH12_t;

/**
 * @brief initializes LIS2DH12 device for i2c bus
 * @param dev ptr to LIS2DH12 device
 * @param i2c handle for i2c bus
 */
mrt_status_t LIS2DH12_init_i2c(LIS2DH12_t* dev, mrt_i2c_handle_t i2c);
/**
 * @brief initializes LIS2DH12 device for i2c bus
 * @param dev ptr to LIS2DH12 device
 * @param spi handle for i2c bus
 */
mrt_status_t lis_init_spi(LIS2DH12_t* dev, mrt_spi_handle_t spi);


/**
  *@brief writes register of device
  *@param dev ptr to LIS2DH12 device
  *@param reg ptr to register definition
  *@param data ptr to data to be written
  *@return status (type defined by platform)
  */
#define lis_write_reg(dev, reg, data) regdev_write_reg(&dev->mRegDev, reg, data);

/**
  *@brief reads register of device
  *@param dev ptr to LIS2DH12 device
  *@param reg ptr to register definition
  *@param data ptr to store data
  *@return bytes read
  */
#define lis_read_reg(dev, reg, data) regdev_read_reg(&dev->mRegDev, reg, data);


/*user-block-functions*/
/*user-block-function*/

#ifdef __cplusplus
}
#endif