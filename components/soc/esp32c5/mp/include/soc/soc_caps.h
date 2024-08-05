/*
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * These defines are parsed and imported as kconfig variables via the script
 * `tools/gen_soc_caps_kconfig/gen_soc_caps_kconfig.py`
 *
 * If this file is changed the script will automatically run the script
 * and generate the kconfig variables as part of the pre-commit hooks.
 *
 * It can also be run manually. For more information, see `${IDF_PATH}/tools/gen_soc_caps_kconfig/README.md`
 */

#pragma once

/*-------------------------- COMMON CAPS ---------------------------------------*/
// #define SOC_ADC_SUPPORTED               1  // TODO: [ESP32C5] IDF-8701
// #define SOC_DEDICATED_GPIO_SUPPORTED    1  // TODO: [ESP32C5] IDF-8725
#define SOC_UART_SUPPORTED              1
#define SOC_GDMA_SUPPORTED              1
#define SOC_AHB_GDMA_SUPPORTED          1
#define SOC_GPTIMER_SUPPORTED           1
// #define SOC_PCNT_SUPPORTED              1  // TODO: [ESP32C5] IDF-8683
// #define SOC_MCPWM_SUPPORTED             1  // TODO: [ESP32C5] IDF-8709
// #define SOC_TWAI_SUPPORTED              1  // TODO: [ESP32C5] IDF-8691
// #define SOC_ETM_SUPPORTED               1  // TODO: [ESP32C5] IDF-8693
// #define SOC_PARLIO_SUPPORTED            1  // TODO: [ESP32C5] IDF-8685, IDF-8686
#define SOC_ASYNC_MEMCPY_SUPPORTED      1
// #define SOC_USB_SERIAL_JTAG_SUPPORTED   1  // TODO: [ESP32C5] IDF-8721
// #define SOC_TEMP_SENSOR_SUPPORTED       1  // TODO: [ESP32C5] IDF-8727
// #define SOC_WIFI_SUPPORTED              1  // TODO: [ESP32C5] IDF-8851
#define SOC_SUPPORTS_SECURE_DL_MODE     1
// #define SOC_LP_CORE_SUPPORTED           1  // TODO: [ESP32C5] IDF-8637
#define SOC_EFUSE_KEY_PURPOSE_FIELD     1
#define SOC_EFUSE_SUPPORTED             1
#define SOC_RTC_FAST_MEM_SUPPORTED      1
#define SOC_RTC_MEM_SUPPORTED           1
// #define SOC_I2S_SUPPORTED               1  // TODO: [ESP32C5] IDF-8713, IDF-8714
// #define SOC_RMT_SUPPORTED               1  // TODO: [ESP32C5] IDF-8726
// #define SOC_SDM_SUPPORTED               1  // TODO: [ESP32C5] IDF-8687
// #define SOC_GPSPI_SUPPORTED             1  // TODO: [ESP32C5] IDF-8698, IDF-8699
// #define SOC_LEDC_SUPPORTED              1  // TODO: [ESP32C5] IDF-8684
// #define SOC_I2C_SUPPORTED               1  // TODO: [ESP32C5] IDF-8694, IDF-8696
#define SOC_SYSTIMER_SUPPORTED          1     // TODO: [ESP32C5] IDF-8707
// #define SOC_AES_SUPPORTED               1  // TODO: [ESP32C5] IDF-8627
// #define SOC_MPI_SUPPORTED               1
// #define SOC_SHA_SUPPORTED               1  // TODO: [ESP32C5] IDF-8624
// #define SOC_RSA_SUPPORTED               1  // TODO: [ESP32C5] IDF-8620
// #define SOC_HMAC_SUPPORTED              1  // TODO: [ESP32C5] IDF-8616
// #define SOC_DIG_SIGN_SUPPORTED          1  // TODO: [ESP32C5] IDF-8619
// #define SOC_ECC_SUPPORTED               1  // TODO: [ESP32C5] IDF-8625
#define SOC_FLASH_ENC_SUPPORTED         1     // TODO: [ESP32C5] IDF-8622
// #define SOC_SECURE_BOOT_SUPPORTED       1  // TODO: [ESP32C5] IDF-8623
// #define SOC_BOD_SUPPORTED               1  // TODO: [ESP32C5] IDF-8647
// #define SOC_APM_SUPPORTED               1  // TODO: [ESP32C5] IDF-8614, IDF-8615
// #define SOC_PMU_SUPPORTED               1  // TODO: [ESP32C5] IDF-8667
// #define SOC_PAU_SUPPORTED               1  // TODO: [ESP32C5] IDF-8638
// #define SOC_LP_TIMER_SUPPORTED          1  // TODO: [ESP32C5] IDF-8636
// #define SOC_LP_AON_SUPPORTED            1  // TODO: [ESP32C5] IDF-8638
#define SOC_LP_PERIPHERALS_SUPPORTED    1
// #define SOC_LP_I2C_SUPPORTED            1  // TODO: [ESP32C5] IDF-8634
// #define SOC_ULP_LP_UART_SUPPORTED       1  // TODO: [ESP32C5] IDF-8633
// #define SOC_CLK_TREE_SUPPORTED          1  // TODO: [ESP32C5] IDF-8642
// #define SOC_ASSIST_DEBUG_SUPPORTED      1  // TODO: [ESP32C5] IDF-8663
// #define SOC_WDT_SUPPORTED               1  // TODO: [ESP32C5] IDF-8650
#define SOC_SPI_FLASH_SUPPORTED         1     // TODO: [ESP32C5] IDF-8715
// #define SOC_BITSCRAMBLER_SUPPORTED      1  // TODO: [ESP32C5] IDF-8711
// #define SOC_ECDSA_SUPPORTED             1  // TODO: [ESP32C5] IDF-8618
// #define SOC_KEY_MANAGER_SUPPORTED       1  // TODO: [ESP32C5] IDF-8621
// #define SOC_HUK_SUPPORTED               1  // TODO: [ESP32C5] IDF-8617
// #define SOC_MODEM_CLOCK_SUPPORTED       1  // TODO: [ESP32C5] IDF-8845
// #define SOC_PM_SUPPORTED                1  // TODO: [ESP32C5] IDF-8643

/*-------------------------- XTAL CAPS ---------------------------------------*/
#define SOC_XTAL_SUPPORT_40M            1
#define SOC_XTAL_SUPPORT_48M            1

/*-------------------------- AES CAPS -----------------------------------------*/
// #define SOC_AES_SUPPORT_DMA     (1)

/* Has a centralized DMA, which is shared with all peripherals */
// #define SOC_AES_GDMA            (1)

// #define SOC_AES_SUPPORT_AES_128 (1)
// #define SOC_AES_SUPPORT_AES_256 (1)

/*-------------------------- ADC CAPS -------------------------------*/
/*!< SAR ADC Module*/
// #define SOC_ADC_DIG_CTRL_SUPPORTED              1
// #define SOC_ADC_DIG_IIR_FILTER_SUPPORTED        1
// #define SOC_ADC_MONITOR_SUPPORTED               1
// #define SOC_ADC_DIG_SUPPORTED_UNIT(UNIT)        1    //Digital controller supported ADC unit
// #define SOC_ADC_DMA_SUPPORTED                   1
#define SOC_ADC_PERIPH_NUM                      (1U)
// #define SOC_ADC_CHANNEL_NUM(PERIPH_NUM)         (7)
#define SOC_ADC_MAX_CHANNEL_NUM                 (7)
// #define SOC_ADC_ATTEN_NUM                       (4)

/*!< Digital */
// #define SOC_ADC_DIGI_CONTROLLER_NUM             (1U)
// #define SOC_ADC_PATT_LEN_MAX                    (8) /*!< Two pattern tables, each contains 4 items. Each item takes 1 byte */
// #define SOC_ADC_DIGI_MAX_BITWIDTH               (12)
// #define SOC_ADC_DIGI_MIN_BITWIDTH               (12)
// #define SOC_ADC_DIGI_IIR_FILTER_NUM             (2)
// #define SOC_ADC_DIGI_MONITOR_NUM                (2)
// #define SOC_ADC_DIGI_RESULT_BYTES               (4)
// #define SOC_ADC_DIGI_DATA_BYTES_PER_CONV        (4)
/*!< F_sample = F_digi_con / 2 / interval. F_digi_con = 5M for now. 30 <= interval <= 4095 */
// #define SOC_ADC_SAMPLE_FREQ_THRES_HIGH          83333
// #define SOC_ADC_SAMPLE_FREQ_THRES_LOW           611

/*!< RTC */
// #define SOC_ADC_RTC_MIN_BITWIDTH                (12)
// #define SOC_ADC_RTC_MAX_BITWIDTH                (12)

/*!< Calibration */
// #define SOC_ADC_CALIBRATION_V1_SUPPORTED        (1) /*!< support HW offset calibration version 1*/
// #define SOC_ADC_SELF_HW_CALI_SUPPORTED          (1) /*!< support HW offset self calibration */
// #define SOC_ADC_CALIB_CHAN_COMPENS_SUPPORTED (1) /*!< support channel compensation to the HW offset calibration */

/*!< Interrupt */
// #define SOC_ADC_TEMPERATURE_SHARE_INTR          (1)

/*!< ADC power control is shared by PWDET */
// #define SOC_ADC_SHARED_POWER                    1

// ESP32C5-TODO: Copy from esp32C5, need check
/*-------------------------- APB BACKUP DMA CAPS -------------------------------*/
// #define SOC_APB_BACKUP_DMA              (0)

/*-------------------------- BROWNOUT CAPS -----------------------------------*/
// #define SOC_BROWNOUT_RESET_SUPPORTED 1

/*-------------------------- CACHE CAPS --------------------------------------*/
#define SOC_SHARED_IDCACHE_SUPPORTED            1   //Shared Cache for both instructions and data
#define SOC_CACHE_FREEZE_SUPPORTED              1

/*-------------------------- CPU CAPS ----------------------------------------*/
#define SOC_CPU_CORES_NUM               (1U)
#define SOC_CPU_INTR_NUM                32
#define SOC_CPU_HAS_FLEXIBLE_INTC       1
#define SOC_INT_CLIC_SUPPORTED          1
#define SOC_INT_HW_NESTED_SUPPORTED     1       // Support for hardware interrupts nesting
#define SOC_BRANCH_PREDICTOR_SUPPORTED  1

#define SOC_CPU_BREAKPOINTS_NUM         4
#define SOC_CPU_WATCHPOINTS_NUM         4
#define SOC_CPU_WATCHPOINT_MAX_REGION_SIZE         0x100 // bytes

#define SOC_CPU_HAS_PMA                 1
#define SOC_CPU_IDRAM_SPLIT_USING_PMP   1

/*-------------------------- DIGITAL SIGNATURE CAPS ----------------------------------------*/
/** The maximum length of a Digital Signature in bits. */
// #define SOC_DS_SIGNATURE_MAX_BIT_LEN (3072)

/** Initialization vector (IV) length for the RSA key parameter message digest (MD) in bytes. */
// #define SOC_DS_KEY_PARAM_MD_IV_LENGTH (16)

/** Maximum wait time for DS parameter decryption key. If overdue, then key error.
    See TRM DS chapter for more details */
// #define SOC_DS_KEY_CHECK_MAX_WAIT_US (1100)

/*-------------------------- DMA Common CAPS ----------------------------------------*/
#define SOC_DMA_CAN_ACCESS_FLASH 1 /*!< DMA can access Flash memory */

/*-------------------------- GDMA CAPS -------------------------------------*/
#define SOC_AHB_GDMA_VERSION            2
#define SOC_GDMA_NUM_GROUPS_MAX         1U
#define SOC_GDMA_PAIRS_PER_GROUP_MAX    3
// #define SOC_GDMA_SUPPORT_ETM            1  // Support ETM submodule TODO: IDF-9224
// #define SOC_GDMA_SUPPORT_SLEEP_RETENTION    1  // TODO: IDF-9225

/*-------------------------- ETM CAPS --------------------------------------*/
// #define SOC_ETM_GROUPS                  1U  // Number of ETM groups
// #define SOC_ETM_CHANNELS_PER_GROUP      50  // Number of ETM channels in the group

/*-------------------------- GPIO CAPS ---------------------------------------*/
// ESP32-C5 has 1 GPIO peripheral
#define SOC_GPIO_PORT                      1U
#define SOC_GPIO_PIN_COUNT                 29
// #define SOC_GPIO_SUPPORT_PIN_GLITCH_FILTER 1
// #define SOC_GPIO_FLEX_GLITCH_FILTER_NUM    8
#define SOC_GPIO_SUPPORT_PIN_HYS_FILTER      1

// GPIO peripheral has the ETM extension
// #define SOC_GPIO_SUPPORT_ETM          1

// Target has the full LP IO subsystem
// On ESP32-C5, Digital IOs have their own registers to control pullup/down capability, independent of LP registers.
#define SOC_GPIO_SUPPORT_RTC_INDEPENDENT    (1)
// GPIO0~7 on ESP32C5 can support chip deep sleep wakeup
// #define SOC_GPIO_SUPPORT_DEEPSLEEP_WAKEUP   (1)  // TODO: [ESP32C5] IDF-8719

#define SOC_GPIO_VALID_GPIO_MASK        ((1U<<SOC_GPIO_PIN_COUNT) - 1)
#define SOC_GPIO_VALID_OUTPUT_GPIO_MASK SOC_GPIO_VALID_GPIO_MASK

#define SOC_GPIO_IN_RANGE_MAX           28
#define SOC_GPIO_OUT_RANGE_MAX          28

#define SOC_GPIO_DEEP_SLEEP_WAKE_VALID_GPIO_MASK        (0ULL | BIT0 | BIT1 | BIT2 | BIT3 | BIT4 | BIT5 | BIT6 | BIT7)

// digital I/O pad powered by VDD3P3_CPU or VDD_SPI(GPIO_NUM_8~GPIO_NUM_28)
#define SOC_GPIO_VALID_DIGITAL_IO_PAD_MASK 0x0000000001FFFF00ULL

// Support to force hold all IOs
#define SOC_GPIO_SUPPORT_FORCE_HOLD              (1)
// LP_IOs and DIG_IOs can be hold during deep sleep and after waking up
#define SOC_GPIO_SUPPORT_HOLD_IO_IN_DSLP (1)
// Support to hold a single digital I/O when the digital domain is powered off
#define SOC_GPIO_SUPPORT_HOLD_SINGLE_IO_IN_DSLP  (1)

// The Clock Out signal is route to the pin by GPIO matrix
// #define SOC_GPIO_CLOCKOUT_BY_GPIO_MATRIX    (1)
#define SOC_GPIO_CLOCKOUT_CHANNEL_NUM           (3)

/*-------------------------- RTCIO CAPS --------------------------------------*/
#define SOC_RTCIO_PIN_COUNT                 0UL
// #define SOC_RTCIO_INPUT_OUTPUT_SUPPORTED 1  /* This macro indicates that the target has separate RTC IOMUX hardware feature,
                                            //  * so it supports unique IOMUX configuration (including IE, OE, PU, PD, DRV etc.)
                                            //  * when the pins are switched to RTC function.
                                            //  */
// #define SOC_RTCIO_HOLD_SUPPORTED            1
// #define SOC_RTCIO_WAKE_SUPPORTED            1

/*-------------------------- Dedicated GPIO CAPS -----------------------------*/
// #define SOC_DEDIC_GPIO_OUT_CHANNELS_NUM (8) /*!< 8 outward channels on each CPU core */
// #define SOC_DEDIC_GPIO_IN_CHANNELS_NUM  (8) /*!< 8 inward channels on each CPU core */
// #define SOC_DEDIC_PERIPH_ALWAYS_ENABLE  (1) /*!< The dedicated GPIO (a.k.a. fast GPIO) is featured by some customized CPU instructions, which is always enabled */

/*-------------------------- I2C CAPS ----------------------------------------*/
// ESP32-C5 has 1 I2C
#define SOC_I2C_NUM                 (1U)
#define SOC_HP_I2C_NUM              (1U)

// #define SOC_I2C_FIFO_LEN            (32) /*!< I2C hardware FIFO depth */
// #define SOC_I2C_CMD_REG_NUM         (8)  /*!< Number of I2C command registers */
// #define SOC_I2C_SUPPORT_SLAVE       (1)

// FSM_RST only resets the FSM, not using it. So SOC_I2C_SUPPORT_HW_FSM_RST not defined.
// #define SOC_I2C_SUPPORT_HW_CLR_BUS  (1)

// #define SOC_I2C_SUPPORT_XTAL        (1)
// #define SOC_I2C_SUPPORT_RTC         (1)
// #define SOC_I2C_SUPPORT_10BIT_ADDR   (1)
// #define SOC_I2C_SLAVE_SUPPORT_BROADCAST    (1)
// #define SOC_I2C_SLAVE_CAN_GET_STRETCH_CAUSE    (1)
// #define SOC_I2C_SLAVE_SUPPORT_I2CRAM_ACCESS   (1)
// #define SOC_I2C_SLAVE_SUPPORT_SLAVE_UNMATCH    (1)

// #define SOC_I2C_SUPPORT_SLEEP_RETENTION (1) // TODO: IDF-9693

/*-------------------------- LP_I2C CAPS -------------------------------------*/
// ESP32-C5 has 1 LP_I2C
// #define SOC_LP_I2C_NUM              (1U)

// #define SOC_LP_I2C_FIFO_LEN         (16) /*!< LP_I2C hardware FIFO depth */

/*-------------------------- I2S CAPS ----------------------------------------*/
// #define SOC_I2S_NUM                 (1U)
// #define SOC_I2S_HW_VERSION_2        (1)
// #define SOC_I2S_SUPPORTS_XTAL       (1)
// #define SOC_I2S_SUPPORTS_PLL_F160M  (1)
// #define SOC_I2S_SUPPORTS_PCM        (1)
// #define SOC_I2S_SUPPORTS_PDM        (1)
// #define SOC_I2S_SUPPORTS_PDM_TX     (1)
// #define SOC_I2S_PDM_MAX_TX_LINES    (2)
// #define SOC_I2S_SUPPORTS_TDM        (1)

/*-------------------------- LEDC CAPS ---------------------------------------*/
// TODO: [ESP32C5] 8684
#define SOC_LEDC_SUPPORT_PLL_DIV_CLOCK      (1)
#define SOC_LEDC_SUPPORT_XTAL_CLOCK         (1)
#define SOC_LEDC_CHANNEL_NUM                (6)
// #define SOC_LEDC_TIMER_BIT_WIDTH            (20)
// #define SOC_LEDC_SUPPORT_FADE_STOP          (1)
// #define SOC_LEDC_GAMMA_CURVE_FADE_SUPPORTED (1)
// #define SOC_LEDC_GAMMA_CURVE_FADE_RANGE_MAX (16)
// #define SOC_LEDC_FADE_PARAMS_BIT_WIDTH      (10)

/*-------------------------- MMU CAPS ----------------------------------------*/
// TODO: [ESP32C5] IDF-8658
// #define SOC_MMU_PAGE_SIZE_CONFIGURABLE        (1)
#define SOC_MMU_PERIPH_NUM                    (1U)
#define SOC_MMU_LINEAR_ADDRESS_REGION_NUM     (1U)
#define SOC_MMU_DI_VADDR_SHARED               (1) /*!< D/I vaddr are shared */

/*-------------------------- MPU CAPS ----------------------------------------*/
// #define SOC_MPU_CONFIGURABLE_REGIONS_SUPPORTED    0
// #define SOC_MPU_MIN_REGION_SIZE                   0x20000000U
// #define SOC_MPU_REGIONS_MAX_NUM                   8
// #define SOC_MPU_REGION_RO_SUPPORTED               0
// #define SOC_MPU_REGION_WO_SUPPORTED               0

/*-------------------------- PCNT CAPS ---------------------------------------*/
// #define SOC_PCNT_GROUPS                       1U
// #define SOC_PCNT_UNITS_PER_GROUP              4
// #define SOC_PCNT_CHANNELS_PER_UNIT            2
// #define SOC_PCNT_THRES_POINT_PER_UNIT         2
// #define SOC_PCNT_SUPPORT_RUNTIME_THRES_UPDATE 1

/*--------------------------- RMT CAPS ---------------------------------------*/
#define SOC_RMT_GROUPS                        1U /*!< One RMT group */
#define SOC_RMT_TX_CANDIDATES_PER_GROUP       2  /*!< Number of channels that capable of Transmit */
#define SOC_RMT_RX_CANDIDATES_PER_GROUP       2  /*!< Number of channels that capable of Receive */
#define SOC_RMT_CHANNELS_PER_GROUP            4  /*!< Total 4 channels */
#define SOC_RMT_MEM_WORDS_PER_CHANNEL         48 /*!< Each channel owns 48 words memory (1 word = 4 Bytes) */
#define SOC_RMT_SUPPORT_RX_PINGPONG           1  /*!< Support Ping-Pong mode on RX path */
#define SOC_RMT_SUPPORT_RX_DEMODULATION       1  /*!< Support signal demodulation on RX path (i.e. remove carrier) */
#define SOC_RMT_SUPPORT_TX_ASYNC_STOP         1  /*!< Support stop transmission asynchronously */
#define SOC_RMT_SUPPORT_TX_LOOP_COUNT         1  /*!< Support transmit specified number of cycles in loop mode */
#define SOC_RMT_SUPPORT_TX_LOOP_AUTO_STOP     1  /*!< Hardware support of auto-stop in loop mode */
#define SOC_RMT_SUPPORT_TX_SYNCHRO            1  /*!< Support coordinate a group of TX channels to start simultaneously */
#define SOC_RMT_SUPPORT_TX_CARRIER_DATA_ONLY  1  /*!< TX carrier can be modulated to data phase only */
#define SOC_RMT_SUPPORT_XTAL                  1  /*!< Support set XTAL clock as the RMT clock source */
// #define SOC_RMT_SUPPORT_RC_FAST               1  /*!< Support set RC_FAST as the RMT clock source */

/*-------------------------- MCPWM CAPS --------------------------------------*/
// #define SOC_MCPWM_GROUPS                     (1U)   ///< 1 MCPWM groups on the chip (i.e., the number of independent MCPWM peripherals)
// #define SOC_MCPWM_TIMERS_PER_GROUP           (3)    ///< The number of timers that each group has
// #define SOC_MCPWM_OPERATORS_PER_GROUP        (3)    ///< The number of operators that each group has
// #define SOC_MCPWM_COMPARATORS_PER_OPERATOR   (2)    ///< The number of comparators that each operator has
// #define SOC_MCPWM_GENERATORS_PER_OPERATOR    (2)    ///< The number of generators that each operator has
// #define SOC_MCPWM_TRIGGERS_PER_OPERATOR      (2)    ///< The number of triggers that each operator has
// #define SOC_MCPWM_GPIO_FAULTS_PER_GROUP      (3)    ///< The number of fault signal detectors that each group has
// #define SOC_MCPWM_CAPTURE_TIMERS_PER_GROUP   (1)    ///< The number of capture timers that each group has
// #define SOC_MCPWM_CAPTURE_CHANNELS_PER_TIMER (3)    ///< The number of capture channels that each capture timer has
// #define SOC_MCPWM_GPIO_SYNCHROS_PER_GROUP    (3)    ///< The number of GPIO synchros that each group has
// #define SOC_MCPWM_SWSYNC_CAN_PROPAGATE       (1)    ///< Software sync event can be routed to its output
// #define SOC_MCPWM_SUPPORT_ETM                (1)    ///< Support ETM (Event Task Matrix)
// #define SOC_MCPWM_CAPTURE_CLK_FROM_GROUP     (1)    ///< Capture timer shares clock with other PWM timers

/*------------------------ USB SERIAL JTAG CAPS ------------------------------*/
// #define SOC_USB_SERIAL_JTAG_SUPPORT_LIGHT_SLEEP     (1)     /*!< Support to maintain minimum usb communication during light sleep */ // TODO: IDF-6395

/*-------------------------- PARLIO CAPS --------------------------------------*/
// #define SOC_PARLIO_GROUPS                    1U  /*!< Number of parallel IO peripherals */
// #define SOC_PARLIO_TX_UNITS_PER_GROUP        1U  /*!< number of TX units in each group */
// #define SOC_PARLIO_RX_UNITS_PER_GROUP        1U  /*!< number of RX units in each group */
// #define SOC_PARLIO_TX_UNIT_MAX_DATA_WIDTH    16  /*!< Number of data lines of the TX unit */
// #define SOC_PARLIO_RX_UNIT_MAX_DATA_WIDTH    16  /*!< Number of data lines of the RX unit */
// #define SOC_PARLIO_TX_RX_SHARE_INTERRUPT     1   /*!< TX and RX unit share the same interrupt source number */

/*--------------------------- MPI CAPS ---------------------------------------*/
// #define SOC_MPI_MEM_BLOCKS_NUM (4)
// #define SOC_MPI_OPERATIONS_NUM (3)

/*--------------------------- RSA CAPS ---------------------------------------*/
#define SOC_RSA_MAX_BIT_LEN    (3072)

/*--------------------------- SHA CAPS ---------------------------------------*/

/* Max amount of bytes in a single DMA operation is 4095,
   for SHA this means that the biggest safe amount of bytes is
   31 blocks of 128 bytes = 3968
*/
// #define SOC_SHA_DMA_MAX_BUFFER_SIZE     (3968)
// #define SOC_SHA_SUPPORT_DMA             (1)

/* The SHA engine is able to resume hashing from a user */
// #define SOC_SHA_SUPPORT_RESUME          (1)

/* Has a centralized DMA, which is shared with all peripherals */
// #define SOC_SHA_GDMA             (1)

/* Supported HW algorithms */
// #define SOC_SHA_SUPPORT_SHA1            (1)
// #define SOC_SHA_SUPPORT_SHA224          (1)
// #define SOC_SHA_SUPPORT_SHA256          (1)

/*--------------------------- ECDSA CAPS ---------------------------------------*/
// #define SOC_ECDSA_SUPPORT_EXPORT_PUBKEY     (1)

/*-------------------------- Sigma Delta Modulator CAPS -----------------*/
// #define SOC_SDM_GROUPS               1U
// #define SOC_SDM_CHANNELS_PER_GROUP   4
// #define SOC_SDM_CLK_SUPPORT_PLL_F80M 1
// #define SOC_SDM_CLK_SUPPORT_XTAL     1

/*-------------------------- SPI CAPS ----------------------------------------*/
#define SOC_SPI_PERIPH_NUM          2
#define SOC_SPI_PERIPH_CS_NUM(i)    6
#define SOC_SPI_MAX_CS_NUM          6

// #define SOC_SPI_MAXIMUM_BUFFER_SIZE     64

// #define SOC_SPI_SUPPORT_DDRCLK              1
// #define SOC_SPI_SLAVE_SUPPORT_SEG_TRANS     1
// #define SOC_SPI_SUPPORT_CD_SIG              1
// #define SOC_SPI_SUPPORT_CONTINUOUS_TRANS    1
// #define SOC_SPI_SUPPORT_SLAVE_HD_VER2       1
// #define SOC_SPI_SUPPORT_CLK_XTAL            1
// #define SOC_SPI_SUPPORT_CLK_PLL_F80M        1
// #define SOC_SPI_SUPPORT_CLK_RC_FAST         1

// Peripheral supports DIO, DOUT, QIO, or QOUT
// host_id = 0 -> SPI0/SPI1, host_id = 1 -> SPI2,
#define SOC_SPI_PERIPH_SUPPORT_MULTILINE_MODE(host_id)  ({(void)host_id; 1;})

// #define SOC_MEMSPI_IS_INDEPENDENT 1
// #define SOC_SPI_MAX_PRE_DIVIDER 16

/*-------------------------- SPI MEM CAPS ---------------------------------------*/
// #define SOC_SPI_MEM_SUPPORT_AUTO_WAIT_IDLE                (1)
// #define SOC_SPI_MEM_SUPPORT_AUTO_SUSPEND                  (1)
// #define SOC_SPI_MEM_SUPPORT_AUTO_RESUME                   (1)
// #define SOC_SPI_MEM_SUPPORT_IDLE_INTR                     (1)
// #define SOC_SPI_MEM_SUPPORT_SW_SUSPEND                    (1)
// #define SOC_SPI_MEM_SUPPORT_CHECK_SUS                     (1)
// #define SOC_SPI_MEM_SUPPORT_WRAP                          (1)

// TODO: [ESP32C5] IDF-8649
#define SOC_MEMSPI_SRC_FREQ_80M_SUPPORTED         1
#define SOC_MEMSPI_SRC_FREQ_40M_SUPPORTED         1
#define SOC_MEMSPI_SRC_FREQ_20M_SUPPORTED         1

/*-------------------------- SYSTIMER CAPS ----------------------------------*/
// TODO: [ESP32C5] IDF-8707
#define SOC_SYSTIMER_COUNTER_NUM            2  // Number of counter units
#define SOC_SYSTIMER_ALARM_NUM              3  // Number of alarm units
#define SOC_SYSTIMER_BIT_WIDTH_LO           32 // Bit width of systimer low part
#define SOC_SYSTIMER_BIT_WIDTH_HI           20 // Bit width of systimer high part
#define SOC_SYSTIMER_FIXED_DIVIDER          1  // Clock source divider is fixed: 2.5
#define SOC_SYSTIMER_SUPPORT_RC_FAST        1  // Systimer can use RC_FAST clock source
#define SOC_SYSTIMER_INT_LEVEL              1  // Systimer peripheral uses level interrupt
#define SOC_SYSTIMER_ALARM_MISS_COMPENSATE  1  // Systimer peripheral can generate interrupt immediately if t(target) > t(current)
// #define SOC_SYSTIMER_SUPPORT_ETM            1  // Systimer comparator can generate ETM event

/*-------------------------- LP_TIMER CAPS ----------------------------------*/
// #define SOC_LP_TIMER_BIT_WIDTH_LO           32 // Bit width of lp_timer low part
// #define SOC_LP_TIMER_BIT_WIDTH_HI           16 // Bit width of lp_timer high part

/*--------------------------- TIMER GROUP CAPS ---------------------------------------*/
#define SOC_TIMER_GROUPS                  (2)
#define SOC_TIMER_GROUP_TIMERS_PER_GROUP  (1U)
#define SOC_TIMER_GROUP_COUNTER_BIT_WIDTH (54)
#define SOC_TIMER_GROUP_SUPPORT_XTAL      (1)
// #define SOC_TIMER_GROUP_SUPPORT_RC_FAST   (1)
#define SOC_TIMER_GROUP_TOTAL_TIMERS      (2)
// #define SOC_TIMER_SUPPORT_ETM             (1)
// #define SOC_TIMER_SUPPORT_SLEEP_RETENTION (1)

/*--------------------------- WATCHDOG CAPS ---------------------------------------*/
// #define SOC_MWDT_SUPPORT_XTAL              (1)

/*-------------------------- TWAI CAPS ---------------------------------------*/
// #define SOC_TWAI_CONTROLLER_NUM         2
// #define SOC_TWAI_CLK_SUPPORT_XTAL       1
// #define SOC_TWAI_BRP_MIN                2
// #define SOC_TWAI_BRP_MAX                32768
// #define SOC_TWAI_SUPPORTS_RX_STATUS     1

/*-------------------------- eFuse CAPS----------------------------*/
// #define SOC_EFUSE_DIS_DOWNLOAD_ICACHE 1
// #define SOC_EFUSE_DIS_PAD_JTAG 1
// #define SOC_EFUSE_DIS_USB_JTAG 1
// #define SOC_EFUSE_DIS_DIRECT_BOOT 1
// #define SOC_EFUSE_SOFT_DIS_JTAG 1
// #define SOC_EFUSE_DIS_ICACHE 1
#define SOC_EFUSE_ECDSA_KEY 1

/*-------------------------- Secure Boot CAPS----------------------------*/
// #define SOC_SECURE_BOOT_V2_RSA              1
// #define SOC_SECURE_BOOT_V2_ECC              1
#define SOC_EFUSE_SECURE_BOOT_KEY_DIGESTS   3
// #define SOC_EFUSE_REVOKE_BOOT_KEY_DIGESTS   1
// #define SOC_SUPPORT_SECURE_BOOT_REVOKE_KEY  1

/*-------------------------- Flash Encryption CAPS----------------------------*/
#define SOC_FLASH_ENCRYPTED_XTS_AES_BLOCK_MAX   (64)  // TODO: [ESP32C5] IDF-8622
#define SOC_FLASH_ENCRYPTION_XTS_AES        1
#define SOC_FLASH_ENCRYPTION_XTS_AES_128    1  // TODO: [ESP32C5] IDF-8622

/*------------------------ Anti DPA (Security) CAPS --------------------------*/
// #define SOC_CRYPTO_DPA_PROTECTION_SUPPORTED     1

/*-------------------------- UART CAPS ---------------------------------------*/
// ESP32-C5 has 3 UARTs (2 HP UART, and 1 LP UART)
#define SOC_UART_NUM                    (3)
#define SOC_UART_HP_NUM                 (2)
#define SOC_UART_LP_NUM                 (1U)
#define SOC_UART_FIFO_LEN               (128)       /*!< The UART hardware FIFO length */
#define SOC_LP_UART_FIFO_LEN            (16)        /*!< The LP UART hardware FIFO length */
#define SOC_UART_BITRATE_MAX            (5000000)   /*!< Max bit rate supported by UART */
// #define SOC_UART_SUPPORT_PLL_F80M_CLK   (1)         /*!< Support PLL_F80M as the clock source */
// #define SOC_UART_SUPPORT_RTC_CLK        (1)         /*!< Support RTC clock as the clock source */ // TODO: [ESP32C5] IDF-8642
#define SOC_UART_SUPPORT_XTAL_CLK       (1)         /*!< Support XTAL clock as the clock source */
#define SOC_UART_SUPPORT_WAKEUP_INT     (1)         /*!< Support UART wakeup interrupt */
#define SOC_UART_HAS_LP_UART            (1)         /*!< Support LP UART */

// UART has an extra TX_WAIT_SEND state when the FIFO is not empty and XOFF is enabled
#define SOC_UART_SUPPORT_FSM_TX_WAIT_SEND   (1)

/*-------------------------- COEXISTENCE HARDWARE PTI CAPS -------------------------------*/
// #define SOC_COEX_HW_PTI                 (1)

/*-------------------------- EXTERNAL COEXISTENCE CAPS -------------------------------------*/
// #define SOC_EXTERNAL_COEX_ADVANCE              (1) /*!< HARDWARE ADVANCED EXTERNAL COEXISTENCE CAPS */
// #define SOC_EXTERNAL_COEX_LEADER_TX_LINE       (0) /*!< EXTERNAL COEXISTENCE TX LINE CAPS */

/*--------------- PHY REGISTER AND MEMORY SIZE CAPS --------------------------*/
// #define SOC_PHY_DIG_REGS_MEM_SIZE       (21*4)

/*--------------- WIFI LIGHT SLEEP CLOCK WIDTH CAPS --------------------------*/
// #define SOC_WIFI_LIGHT_SLEEP_CLK_WIDTH  (12)

/*-------------------------- Power Management CAPS ----------------------------*/
// #define SOC_PM_SUPPORT_WIFI_WAKEUP      (1)
// #define SOC_PM_SUPPORT_BEACON_WAKEUP    (1)
// #define SOC_PM_SUPPORT_BT_WAKEUP        (1)
// #define SOC_PM_SUPPORT_EXT1_WAKEUP      (1)
// #define SOC_PM_SUPPORT_EXT1_WAKEUP_MODE_PER_PIN   (1) /*!<Supports one bit per pin to configure the EXT1 trigger level */
// #define SOC_PM_SUPPORT_CPU_PD           (1)
#define SOC_PM_SUPPORT_MODEM_PD         (1)
#define SOC_PM_SUPPORT_XTAL32K_PD       (1)
#define SOC_PM_SUPPORT_RC32K_PD         (1)
#define SOC_PM_SUPPORT_RC_FAST_PD       (1)
#define SOC_PM_SUPPORT_VDDSDIO_PD       (1)
#define SOC_PM_SUPPORT_TOP_PD           (1)
#define SOC_PM_SUPPORT_HP_AON_PD        (1)
// #define SOC_PM_SUPPORT_MAC_BB_PD        (1)
#define SOC_PM_SUPPORT_RTC_PERIPH_PD    (1)

// #define SOC_PM_SUPPORT_PMU_MODEM_STATE  (1)
/* macro redefine for pass esp_wifi headers md5sum check */
// #define MAC_SUPPORT_PMU_MODEM_STATE     SOC_PM_SUPPORT_PMU_MODEM_STATE


// #define SOC_PM_SUPPORT_DEEPSLEEP_CHECK_STUB_ONLY   (1) /*!<Supports CRC only the stub code in RTC memory */

// #define SOC_PM_CPU_RETENTION_BY_SW          (1)
// #define SOC_PM_MODEM_RETENTION_BY_REGDMA    (1)
// #define SOC_PM_RETENTION_HAS_CLOCK_BUG      (1)

// #define SOC_PM_PAU_LINK_NUM             (4)

/*-------------------------- CLOCK SUBSYSTEM CAPS ----------------------------------------*/
#define SOC_CLK_RC_FAST_SUPPORT_CALIBRATION       (1)
#define SOC_MODEM_CLOCK_IS_INDEPENDENT            (1)

#define SOC_CLK_XTAL32K_SUPPORTED                 (1)     /*!< Support to connect an external low frequency crystal */
#define SOC_CLK_OSC_SLOW_SUPPORTED                (1)     /*!< Support to connect an external oscillator, not a crystal */
#define SOC_CLK_RC32K_SUPPORTED                   (1)     /*!< Support an internal 32kHz RC oscillator */

#define SOC_RCC_IS_INDEPENDENT                    1       /*!< Reset and Clock Control is independent, thanks to the PCR registers */

/*-------------------------- Temperature Sensor CAPS -------------------------------------*/
// #define SOC_TEMPERATURE_SENSOR_SUPPORT_FAST_RC                (1)
// #define SOC_TEMPERATURE_SENSOR_SUPPORT_XTAL                   (1)
// #define SOC_TEMPERATURE_SENSOR_INTR_SUPPORT                   (1)

/*------------------------------------ WI-FI CAPS ------------------------------------*/
// #define SOC_WIFI_HW_TSF                     (1)    /*!< Support hardware TSF */
// #define SOC_WIFI_FTM_SUPPORT                (0)    /*!< Support FTM */
// #define SOC_WIFI_GCMP_SUPPORT               (1)    /*!< Support GCMP(GCMP128 and GCMP256) */
// #define SOC_WIFI_WAPI_SUPPORT               (1)    /*!< Support WAPI */
// #define SOC_WIFI_CSI_SUPPORT                (1)    /*!< Support CSI */
// #define SOC_WIFI_MESH_SUPPORT               (1)    /*!< Support WIFI MESH */
// #define SOC_WIFI_HE_SUPPORT                 (1)    /*!< Support Wi-Fi 6 */

/*---------------------------------- Bluetooth CAPS ----------------------------------*/
// #define SOC_BLE_SUPPORTED               (1)    /*!< Support Bluetooth Low Energy hardware */
// #define SOC_BLE_MESH_SUPPORTED          (1)    /*!< Support BLE MESH */
// #define SOC_ESP_NIMBLE_CONTROLLER       (1)    /*!< Support BLE EMBEDDED controller V1 */
// #define SOC_BLE_50_SUPPORTED            (1)    /*!< Support Bluetooth 5.0 */
// #define SOC_BLE_DEVICE_PRIVACY_SUPPORTED (1)   /*!< Support BLE device privacy mode */
// #define SOC_BLE_POWER_CONTROL_SUPPORTED (1)    /*!< Support Bluetooth Power Control */
// #define SOC_BLE_PERIODIC_ADV_ENH_SUPPORTED  (1)    /*!< Support For BLE Periodic Adv Enhancements */
// #define SOC_BLUFI_SUPPORTED             (1)    /*!< Support BLUFI */
// #define SOC_BLE_MULTI_CONN_OPTIMIZATION (1)    /*!< Support multiple connections optimization */

// #define SOC_BLE_USE_WIFI_PWR_CLK_WORKAROUND (1)

/*------------------------------------- PHY CAPS -------------------------------------*/
// #define SOC_PHY_COMBO_MODULE                  (1) /*!< Support Wi-Fi, BLE and 15.4*/
