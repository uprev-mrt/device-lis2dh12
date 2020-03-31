/**
  * @file lis2dh12.c
  * @author generated by mrt-device.py
  * @brief register defintions for LIS2DH12 device
  * 
  */

#include "lis2dh12.h"



/**
 * @brief initializes device
 * @param dev ptr to LIS2DH12 device
 * @return status 
 */
static mrt_status_t lis_init(lis2dh12_t* dev)
{   
    /* Initialize Register Descriptors */
    REG_INIT( dev->mStatusAux , LIS_REG_STATUS_AUX_ADDR , uint8_t, REG_PERM_R , 0x00  );
    REG_INIT( dev->mOutTemp , LIS_REG_OUT_TEMP_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mWhoAmI , LIS_REG_WHO_AM_I_ADDR , uint8_t, REG_PERM_R , 0x33  );
    REG_INIT( dev->mCtrl0 , LIS_REG_CTRL0_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mTempCfg , LIS_REG_TEMP_CFG_ADDR , uint8_t, REG_PERM_RW , 0x10  );
    REG_INIT( dev->mCtrl1 , LIS_REG_CTRL1_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mCtrl2 , LIS_REG_CTRL2_ADDR , uint8_t, REG_PERM_RW , 0x07  );
    REG_INIT( dev->mCtrl3 , LIS_REG_CTRL3_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mCtrl4 , LIS_REG_CTRL4_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mCtrl5 , LIS_REG_CTRL5_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mCtrl6 , LIS_REG_CTRL6_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mReference , LIS_REG_REFERENCE_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mStatus , LIS_REG_STATUS_ADDR , uint8_t, REG_PERM_R , 0x00  );
    REG_INIT( dev->mOutX , LIS_REG_OUT_X_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mOutY , LIS_REG_OUT_Y_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mOutZ , LIS_REG_OUT_Z_ADDR , uint16_t, REG_PERM_R , 0x0000  );
    REG_INIT( dev->mFifoCtrl , LIS_REG_FIFO_CTRL_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mFifoSrc , LIS_REG_FIFO_SRC_ADDR , uint8_t, REG_PERM_R , 0x00  );
    REG_INIT( dev->mInt1Cfg , LIS_REG_INT1_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mInt1Src , LIS_REG_INT1_SRC_ADDR , uint8_t, REG_PERM_R , 0x00  );
    REG_INIT( dev->mInt1Ths , LIS_REG_INT1_THS_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mInt1Duration , LIS_REG_INT1_DURATION_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mInt2Cfg , LIS_REG_INT2_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mInt2Src , LIS_REG_INT2_SRC_ADDR , uint8_t, REG_PERM_R , 0x00  );
    REG_INIT( dev->mInt2Ths , LIS_REG_INT2_THS_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mInt2Duration , LIS_REG_INT2_DURATION_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mClickCfg , LIS_REG_CLICK_CFG_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mClickSrc , LIS_REG_CLICK_SRC_ADDR , uint8_t, REG_PERM_R , 0x00  );
    REG_INIT( dev->mClickThs , LIS_REG_CLICK_THS_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mTimeLimit , LIS_REG_TIME_LIMIT_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mTimeLatency , LIS_REG_TIME_LATENCY_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mTimeWindow , LIS_REG_TIME_WINDOW_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mActThs , LIS_REG_ACT_THS_ADDR , uint8_t, REG_PERM_RW , 0x00  );
    REG_INIT( dev->mActDur , LIS_REG_ACT_DUR_ADDR , uint8_t, REG_PERM_RW , 0x00  );


    /*user-block-init-start*/
    /*user-block-init-end*/

    return MRT_STATUS_OK;
}


mrt_status_t lis_init_i2c(lis2dh12_t* dev, mrt_i2c_handle_t i2c)
{
    mrt_status_t status;

    status = init_i2c_register_device(&dev->mRegDev, i2c, LIS2DH12_I2C_ADDRESS, LIS2DH12_REG_ADDR_SIZE );

    lis_init(dev);


    /*user-block-init-i2c-start*/
    /*user-block-init-i2c-end*/
    
    return status;
}
mrt_status_t lis_init_spi(lis2dh12_t* dev, mrt_spi_handle_t spi, mrt_gpio_t chipSelect)
{
    mrt_status_t status;

    status = init_spi_register_device(&dev->mRegDev, spi, chipSelect, LIS2DH12_REG_ADDR_SIZE );

    lis_init(dev);

    /*user-block-spi-start*/
    /*user-block-spi-end*/

    return status;
}

mrt_status_t lis_test(lis2dh12_t* dev)
{
    mrt_status_t status = MRT_STATUS_ERROR;
    /*user-block-test-start*/

    /*user-block-test-end*/
    return status;
}


/*user-block-bottom-start*/
/*user-block-bottom-end*/
