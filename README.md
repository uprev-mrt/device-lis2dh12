
<h1>LIS2DH12 Device</h1>
<ul>
  <li> Generated with <a href="https://github.com/uprev-mrt/mrtutils/wiki/mrt-device">MrT Device Utility</a> </li>
  <li> Bus:  I2C,SPI</li>
  <li> RegMap: <a href="Regmap.html">Register Map</a>
  <li>Datasheet: <a href="http://www.st.com/content/ccc/resource/technical/document/datasheet/12/c0/5c/36/b9/58/46/f2/DM00091513.pdf/files/DM00091513.pdf/jcr:content/translations/en.DM00091513.pdf">http://www.st.com/conten...</a> </li>
  <li> DigiKey: <a href="https://www.digikey.com/products/en?KeyWords=497-14851-1-ND">497-14851-1-ND</a></li>
  <li> I2C Address: 0x52</li>
</ul>
<hr/>
<h2>Description: </h2>
<p>MEMS Digital Output Motion Sensor Ultra Low-Power High Performance 3-Axis "Femto" Accelerometer</p>

<!--*user-block-description-start*-->

  <p>The LIS2DH is an ultra low-power high performance three-axis linear accelerometer belonging to the “femto” family, with digital I²C/SPI serial interface standard output. The LIS2DH has dynamically user selectable full scales of ±2g/±4g/±8g/±16g and it is capable of measuring accelerations with output data rates from 1 Hz to 5.3 kHz. The self-test capability allows the user to check the functioning of the sensor in the final application. The device may be configured to generate interrupt signals by two independent inertial wake-up/free-fall events as well as by the position of the device itself.</p>
  <ul>
    <li>Wide supply voltage, 1.71 V to 3.6 V</li>
    <li>Independent IOs supply (1.8 V) and supply voltage compatible</li>
    <li>Ultra low-power mode consumption down to 2µA</li>
    <li>±2g/±4g/±8g/±16g dynamically selectable fullscale</li>
    <li>I²C/SPI digital output interface</li>
    <li>2 independent programmable interrupt generators for free-fall and motion * detection</li>
    <li>6D/4D orientation detection</li>
    <li>"Sleep to wake" and "return to sleep" function</li>
    <li>Freefall detection</li>
    <li>Motion detection</li>
    <li>Embedded temperature sensor</li>
    <li>Embedded FIFO</li>
    <li>ECOPACK® RoHS and "Green" compliant</li>
  </ul>
  <ul>
    <li>Motion activated functions</li>
    <li>Display orientation</li>
    <li>Shake control</li>
    <li>Pedometer</li>
    <li>Gaming and virtual reality input devices</li>
    <li>Impact recognition and logging</li>
  </ul>
<!--*user-block-description-end*-->
<br/>


<hr class="section">
<h2 class="right"> Register Map</h2>
<hr class="thick">

<table class="fields">
    <tr>
        <th>Name</th>
        <th>Address</th>
        <th>Type</th>
        <th>Access</th>
        <th>Default</th>
        <th>Description</th>
    </tr>
    <tr>
        <td><a href="#register_status_aux_detail">STATUS_AUX</a></td>
        <td>0x07</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>n/a</td>
    </tr>
    <tr>
        <td><a href="#register_out_temp_detail">OUT_TEMP</a></td>
        <td>0x0C</td>
        <td>uint16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Temperature sensor data</td>
    </tr>
    <tr>
        <td><a href="#register_who_am_i_detail">WHO_AM_I</a></td>
        <td>0x0F</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x33</td>
        <td>Device identification register</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl0_detail">CTRL0</a></td>
        <td>0x1E</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control Register 0</td>
    </tr>
    <tr>
        <td><a href="#register_temp_cfg_detail">TEMP_CFG</a></td>
        <td>0x1F</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x10</td>
        <td>n/a</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl1_detail">CTRL1</a></td>
        <td>0x20</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control Register 1</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl2_detail">CTRL2</a></td>
        <td>0x21</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x07</td>
        <td>Control Register 2</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl3_detail">CTRL3</a></td>
        <td>0x22</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control Register 3</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl4_detail">CTRL4</a></td>
        <td>0x23</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control Register 4</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl5_detail">CTRL5</a></td>
        <td>0x24</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control Register 5</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl6_detail">CTRL6</a></td>
        <td>0x25</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control Register 6</td>
    </tr>
    <tr>
        <td><a href="#register_reference_detail">REFERENCE</a></td>
        <td>0x26</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Reference value for interrupt generation</td>
    </tr>
    <tr>
        <td><a href="#register_status_detail">STATUS</a></td>
        <td>0x27</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>n/a</td>
    </tr>
    <tr>
        <td><a href="#register_out_x_detail">OUT_X</a></td>
        <td>0x28</td>
        <td>uint16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>X-axis acceleration data</td>
    </tr>
    <tr>
        <td><a href="#register_out_y_detail">OUT_Y</a></td>
        <td>0x2A</td>
        <td>uint16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Y-axis acceleration data</td>
    </tr>
    <tr>
        <td><a href="#register_out_z_detail">OUT_Z</a></td>
        <td>0x2C</td>
        <td>uint16_t</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Z-axis acceleration data</td>
    </tr>
    <tr>
        <td><a href="#register_fifo_ctrl_detail">FIFO_CTRL</a></td>
        <td>0x2E</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Fifo Control register</td>
    </tr>
    <tr>
        <td><a href="#register_fifo_src_detail">FIFO_SRC</a></td>
        <td>0x2F</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Fifo status register</td>
    </tr>
    <tr>
        <td><a href="#register_int1_cfg_detail">INT1_CFG</a></td>
        <td>0x30</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Interrupt 1 config register</td>
    </tr>
    <tr>
        <td><a href="#register_int1_src_detail">INT1_SRC</a></td>
        <td>0x31</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Interrupt 1 source register</td>
    </tr>
    <tr>
        <td><a href="#register_int1_ths_detail">INT1_THS</a></td>
        <td>0x32</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Interrupt 1 threshold register</td>
    </tr>
    <tr>
        <td><a href="#register_int1_duration_detail">INT1_DURATION</a></td>
        <td>0x33</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Interrupt 1 duration register</td>
    </tr>
    <tr>
        <td><a href="#register_int2_cfg_detail">INT2_CFG</a></td>
        <td>0x34</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Interrupt 2 config register</td>
    </tr>
    <tr>
        <td><a href="#register_int2_src_detail">INT2_SRC</a></td>
        <td>0x35</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Interrupt 2 source register</td>
    </tr>
    <tr>
        <td><a href="#register_int2_ths_detail">INT2_THS</a></td>
        <td>0x36</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Interrupt 2 threshold register</td>
    </tr>
    <tr>
        <td><a href="#register_int2_duration_detail">INT2_DURATION</a></td>
        <td>0x37</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Interrupt 2 duration register</td>
    </tr>
    <tr>
        <td><a href="#register_click_cfg_detail">CLICK_CFG</a></td>
        <td>0x38</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Click config</td>
    </tr>
    <tr>
        <td><a href="#register_click_src_detail">CLICK_SRC</a></td>
        <td>0x39</td>
        <td>uint8_t</td>
        <td>R</td>
        <td>0x00</td>
        <td>Click source</td>
    </tr>
    <tr>
        <td><a href="#register_click_ths_detail">CLICK_THS</a></td>
        <td>0x3A</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Click Threshold</td>
    </tr>
    <tr>
        <td><a href="#register_time_limit_detail">TIME_LIMIT</a></td>
        <td>0x3B</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Click time limit</td>
    </tr>
    <tr>
        <td><a href="#register_time_latency_detail">TIME_LATENCY</a></td>
        <td>0x3C</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Click time latency</td>
    </tr>
    <tr>
        <td><a href="#register_time_window_detail">TIME_WINDOW</a></td>
        <td>0x3D</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Click time window</td>
    </tr>
    <tr>
        <td><a href="#register_act_ths_detail">ACT_THS</a></td>
        <td>0x3E</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Activity threshold</td>
    </tr>
    <tr>
        <td><a href="#register_act_dur_detail">ACT_DUR</a></td>
        <td>0x3F</td>
        <td>uint8_t</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Activity duration</td>
    </tr>

</table>



<hr class="section">
<h2 class="right"> Registers</h2>
<hr class="thick">



<div id="register_status_aux_detail" class="packet">
<h2>STATUS_AUX </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x07]</b></li>
</ul>

<p>n/a</p>
<!--*user-block-status_aux-start*-->

<!--*user-block-status_aux-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_out_temp_detail" class="packet">
<h2>OUT_TEMP </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0C]</b></li>
</ul>

<p>Temperature sensor data</p>
<!--*user-block-out_temp-start*-->

<!--*user-block-out_temp-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="16"></td>

  </tr>
</table>



<div id="register_who_am_i_detail" class="packet">
<h2>WHO_AM_I </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0F]</b></li>
    <li class="note">  Default: <b>[0x33]</b></li>
</ul>

<p>Device identification register</p>
<!--*user-block-who_am_i-start*-->

<!--*user-block-who_am_i-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="8">WHO_AM_I</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>WHO_AM_I:</b> Device identification register


<div id="register_ctrl0_detail" class="packet">
<h2>CTRL0 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x1E]</b></li>
</ul>

<p>Control Register 0</p>
<!--*user-block-ctrl0-start*-->

<!--*user-block-ctrl0-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_temp_cfg_detail" class="packet">
<h2>TEMP_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x1F]</b></li>
    <li class="note">  Default: <b>[0x10]</b></li>
</ul>

<p>n/a</p>
<!--*user-block-temp_cfg-start*-->

<!--*user-block-temp_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="8">TEMP_CFG</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>TEMP_CFG:</b> n/a


<div id="register_ctrl1_detail" class="packet">
<h2>CTRL1 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x20]</b></li>
</ul>

<p>Control Register 1</p>
<!--*user-block-ctrl1-start*-->

<!--*user-block-ctrl1-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="4">ODR</td>
<td class="field" colspan="1">LOW_PWR</td>
<td class="field" colspan="1">Z_EN</td>
<td class="field" colspan="1">Y_EN</td>
<td class="field" colspan="1">X_EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>X_EN:</b> X-axis enable<br>
<b>Y_EN:</b> Y-axis enable<br>
<b>Z_EN:</b> Z-axis enable<br>
<b>LOW_PWR:</b> Low-power mode enable<br>

<h2> Fields:</h2>

<b>ODR:</b> Data rate selection
<table>
<tr><td> PWR_DWN </td><td> b0000 </td><td>  Power-down mode</td></tr>
<tr><td> 1Hz </td><td> b0001 </td><td>  HR/ Normal / Low-power mode (1 Hz)</td></tr>
<tr><td> 10Hz </td><td> b1000 </td><td>  HR/ Normal / Low-power mode (10 Hz)</td></tr>
<tr><td> 25Hz </td><td> b1001 </td><td>  HR/ Normal / Low-power mode (25 Hz)</td></tr>
<tr><td> 50Hz </td><td> b1000000 </td><td>  HR/ Normal / Low-power mode (50 Hz)</td></tr>
<tr><td> 100Hz </td><td> b1000001 </td><td>  HR/ Normal / Low-power mode (100 Hz)</td></tr>
<tr><td> 200Hz </td><td> b1001000 </td><td>  HR/ Normal / Low-power mode (200 Hz)</td></tr>
<tr><td> 400Hz </td><td> b1001001 </td><td>  HR/ Normal / Low-power mode (400 Hz)</td></tr>
<tr><td> 1620Hz </td><td> b0111 </td><td>  Low-power mode (1.620 kHz)</td></tr>
<tr><td> 5376Hz </td><td> b0111 </td><td>  HR/ Normal (1.344 kHz) / Low-power mode (5.376 kHz)</td></tr>
</table>



<div id="register_ctrl2_detail" class="packet">
<h2>CTRL2 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x21]</b></li>
    <li class="note">  Default: <b>[0x07]</b></li>
</ul>

<p>Control Register 2</p>
<!--*user-block-ctrl2-start*-->

<!--*user-block-ctrl2-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="4"></td>
<td class="field" colspan="1">FDS</td>
<td class="field" colspan="1">HPCLICK</td>
<td class="field" colspan="1">HP_IA2</td>
<td class="field" colspan="1">HP_IA1</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>

<h2> Flags:</h2>
<b>HP_IA1:</b> High-pass filter enabled for AOI function on Interrupt 1<br>
<b>HP_IA2:</b> High-pass filter enabled for AOI function on Interrupt 2<br>
<b>HPCLICK:</b> High-pass filter enabled for Click function<br>
<b>FDS:</b> Filtered data selection<br>


<div id="register_ctrl3_detail" class="packet">
<h2>CTRL3 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x22]</b></li>
</ul>

<p>Control Register 3</p>
<!--*user-block-ctrl3-start*-->

<!--*user-block-ctrl3-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_ctrl4_detail" class="packet">
<h2>CTRL4 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x23]</b></li>
</ul>

<p>Control Register 4</p>
<!--*user-block-ctrl4-start*-->

<!--*user-block-ctrl4-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_ctrl5_detail" class="packet">
<h2>CTRL5 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x24]</b></li>
</ul>

<p>Control Register 5</p>
<!--*user-block-ctrl5-start*-->

<!--*user-block-ctrl5-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_ctrl6_detail" class="packet">
<h2>CTRL6 </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x25]</b></li>
</ul>

<p>Control Register 6</p>
<!--*user-block-ctrl6-start*-->

<!--*user-block-ctrl6-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_reference_detail" class="packet">
<h2>REFERENCE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x26]</b></li>
</ul>

<p>Reference value for interrupt generation</p>
<!--*user-block-reference-start*-->

<!--*user-block-reference-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_status_detail" class="packet">
<h2>STATUS </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x27]</b></li>
</ul>

<p>n/a</p>
<!--*user-block-status-start*-->

<!--*user-block-status-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_out_x_detail" class="packet">
<h2>OUT_X </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x28]</b></li>
</ul>

<p>X-axis acceleration data</p>
<!--*user-block-out_x-start*-->

<!--*user-block-out_x-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="16"></td>

  </tr>
</table>



<div id="register_out_y_detail" class="packet">
<h2>OUT_Y </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x2A]</b></li>
</ul>

<p>Y-axis acceleration data</p>
<!--*user-block-out_y-start*-->

<!--*user-block-out_y-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="16"></td>

  </tr>
</table>



<div id="register_out_z_detail" class="packet">
<h2>OUT_Z </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x2C]</b></li>
</ul>

<p>Z-axis acceleration data</p>
<!--*user-block-out_z-start*-->

<!--*user-block-out_z-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="16"></td>

  </tr>
</table>



<div id="register_fifo_ctrl_detail" class="packet">
<h2>FIFO_CTRL </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x2E]</b></li>
</ul>

<p>Fifo Control register</p>
<!--*user-block-fifo_ctrl-start*-->

<!--*user-block-fifo_ctrl-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_fifo_src_detail" class="packet">
<h2>FIFO_SRC </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x2F]</b></li>
</ul>

<p>Fifo status register</p>
<!--*user-block-fifo_src-start*-->

<!--*user-block-fifo_src-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int1_cfg_detail" class="packet">
<h2>INT1_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x30]</b></li>
</ul>

<p>Interrupt 1 config register</p>
<!--*user-block-int1_cfg-start*-->

<!--*user-block-int1_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int1_src_detail" class="packet">
<h2>INT1_SRC </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x31]</b></li>
</ul>

<p>Interrupt 1 source register</p>
<!--*user-block-int1_src-start*-->

<!--*user-block-int1_src-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int1_ths_detail" class="packet">
<h2>INT1_THS </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x32]</b></li>
</ul>

<p>Interrupt 1 threshold register</p>
<!--*user-block-int1_ths-start*-->

<!--*user-block-int1_ths-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int1_duration_detail" class="packet">
<h2>INT1_DURATION </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x33]</b></li>
</ul>

<p>Interrupt 1 duration register</p>
<!--*user-block-int1_duration-start*-->

<!--*user-block-int1_duration-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int2_cfg_detail" class="packet">
<h2>INT2_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x34]</b></li>
</ul>

<p>Interrupt 2 config register</p>
<!--*user-block-int2_cfg-start*-->

<!--*user-block-int2_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int2_src_detail" class="packet">
<h2>INT2_SRC </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x35]</b></li>
</ul>

<p>Interrupt 2 source register</p>
<!--*user-block-int2_src-start*-->

<!--*user-block-int2_src-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int2_ths_detail" class="packet">
<h2>INT2_THS </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x36]</b></li>
</ul>

<p>Interrupt 2 threshold register</p>
<!--*user-block-int2_ths-start*-->

<!--*user-block-int2_ths-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_int2_duration_detail" class="packet">
<h2>INT2_DURATION </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x37]</b></li>
</ul>

<p>Interrupt 2 duration register</p>
<!--*user-block-int2_duration-start*-->

<!--*user-block-int2_duration-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_click_cfg_detail" class="packet">
<h2>CLICK_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x38]</b></li>
</ul>

<p>Click config</p>
<!--*user-block-click_cfg-start*-->

<!--*user-block-click_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_click_src_detail" class="packet">
<h2>CLICK_SRC </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x39]</b></li>
</ul>

<p>Click source</p>
<!--*user-block-click_src-start*-->

<!--*user-block-click_src-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_click_ths_detail" class="packet">
<h2>CLICK_THS </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3A]</b></li>
</ul>

<p>Click Threshold</p>
<!--*user-block-click_ths-start*-->

<!--*user-block-click_ths-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_time_limit_detail" class="packet">
<h2>TIME_LIMIT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3B]</b></li>
</ul>

<p>Click time limit</p>
<!--*user-block-time_limit-start*-->

<!--*user-block-time_limit-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_time_latency_detail" class="packet">
<h2>TIME_LATENCY </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3C]</b></li>
</ul>

<p>Click time latency</p>
<!--*user-block-time_latency-start*-->

<!--*user-block-time_latency-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_time_window_detail" class="packet">
<h2>TIME_WINDOW </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3D]</b></li>
</ul>

<p>Click time window</p>
<!--*user-block-time_window-start*-->

<!--*user-block-time_window-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_act_ths_detail" class="packet">
<h2>ACT_THS </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3E]</b></li>
</ul>

<p>Activity threshold</p>
<!--*user-block-act_ths-start*-->

<!--*user-block-act_ths-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>



<div id="register_act_dur_detail" class="packet">
<h2>ACT_DUR </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x3F]</b></li>
</ul>

<p>Activity duration</p>
<!--*user-block-act_dur-start*-->

<!--*user-block-act_dur-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>


