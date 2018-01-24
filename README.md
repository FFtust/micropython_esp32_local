# ESP-IDF 修改点 #
1. espidf/component/drive/RTC_moudle.c
2. espidf/component/drive/include/drive/adc.h
3. espidf/components/driver/gpio.c
4. micropython-esp32/extmod/vfs_fats.h
5. micropython-esp32/esp32/mpconfigport.h
6. espidf/components/driver/uart.c

# ESP-IDF update node #
1. 必须使用自己的GUNmakefile，目录esp32_pro\micropython-esp32\esp32\GNUMakefile。这个makefile已经加入了bluetooth，并解决了bluetooth与freeRTOS文件重名的编译问题。

2. 修改esp32_pro\micropython-esp32\esp32\sdkconfig.h，增加以下配置项：
#define CONFIG_BT_ENABLED 1  
#define CONFIG_BLUEDROID_ENABLED 1  
#define CONFIG_BTDM_CONTROLLER_RUN_CPU 0  
#define CONFIG_BT_DRAM_RELEASE 1  
#define MAX_ACL_CONNECTIONS 4  
#define CONFIG_GATTS_ENABLE 1  
#define CONFIG_GATTC_ENABLE 1  
#define CONFIG_MEMMAP_BT 1  
#define CONFIG_NUMBER_OF_UNIVERSAL_MAC_ADDRESS 4  
#define CONFIG_BT_RESERVE_DRAM 0x10000  
#define CONFIG_PHY_DATA_OFFSET 0xf000  
#define CONFIG_APP_OFFSET 0x10000  
如果更新的idf已经有了对应的配置项，则不需要增加  


