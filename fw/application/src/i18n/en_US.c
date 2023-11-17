
#include "language.h"

const char * lang_en_us[_L_COUNT] = {
    [_L_ON] = "ON", 
    [_L_OFF] = "OFF", 
    [_L_BACK] = "Back",
    [_L_ERR] = "Error",
    [_L_ERR_CODE] = "Error Code",
    [_L_APP_AMIIBO] = "Amiibo Emulator", 
    [_L_APP_AMIIBOLINK] = "AmiiboLink",
    [_L_APP_BLE] = "BLE File Transfer",
    [_L_APP_BLE_TITLE] = "BLE File Transfer",
    [_L_APP_PLAYER] = "Video Player",
    [_L_APP_SET] = "Settings",
    [_L_APP_SET_VERSION] = "Version",
    [_L_APP_SET_SKIP_DRIVER_SELECT] = "Auto Storage",
    [_L_APP_SET_OLED_CONTRAST] = "OLED Contrast",
    [_L_APP_SET_OLED_CONTRAST_TITLE] = "OLED Contrast",
    [_L_APP_SET_LCD_BACKLIGHT] = "Backlight",
    [_L_APP_SET_LCD_BACKLIGHT_TITLE] = "Backlight Brightness",
    [_L_APP_SET_ANIM] = "Menu Animation",
    [_L_APP_SET_LIPO_BAT] = "LiPO Battery",
    [_L_APP_SET_SHOW_MEM_USAGE] = "Memory Used",
    [_L_APP_SET_HIBERNATE] = "Fast Resume",
    [_L_APP_SET_SLEEP_TIMEOUT] = "Sleep Timer",
    [_L_APP_SET_LANGUAGE] = "Language",
    [_L_APP_SET_DFU] = "Firmware Update",
    [_L_APP_SET_REBOOT] = "System Reboot",
    [_L_15S] = "15 Seconds",
    [_L_30S] = "30 Seconds",
    [_L_45S] = "45 Seconds",
    [_L_1MIN] = "1 Minute",
    [_L_2MIN] = "2 Minutes",
    [_L_3MIN] = "3 Minutes",
    [_L_AMIIBO_KEY_UNLOADED] = "Amiibo Key not loaded",
    [_L_UPLOAD_KEY_RETAIL_BIN] = "Upload the file key_retail.bin\n to the root directory of the storage.",
    [_L_KNOW] = "Got it",
    [_L_RANDOM_GENERATION] = "Rand. Tag",
    [_L_AUTO_RANDOM_GENERATION] = "Auto Rand.",
    [_L_SHOW_QRCODE] = "Display QR Code",
    [_L_DELETE_TAG] = "Delete Tag",
    [_L_BACK_TO_DETAILS] = "Back to Tag Details",
    [_L_BACK_TO_FILE_LIST] = "Back to File List",
    [_L_BACK_TO_MAIN_MENU] = "Back to Main Menu",
    [_L_FORMAT] = "Format",
    [_L_FORMAT_STORAGE] = "Format Storage",
    [_L_DELETE_ALL_DATA] = "This will delete all data.\nConfirm format?",
    [_L_CONFIRM] = "Confirm",
    [_L_CANCEL] = "Cancel",
    [_L_BACK_TO_LIST] = "Back List",
    [_L_NOT_MOUNTED] = "=====Not Mounted=====",
    [_L_MOUNTED_LFS] = "===Mounted[LFS]===",
    [_L_MOUNTED_FFS] = "===Mounted[FFS]===",
    [_L_TOTAL_SPACE] = "Total Space",
    [_L_AVAILABLE_SPACE] = "Free Space",
    [_L_NOT_AMIIBO_FILE] = "This is not Amiibo file",
    [_L_READ_FILE_FAILED] = "Failed read the file",
    [_L_INPUT_FOLDER_NAME] = "Input Folder Name:",
    [_L_INPUT_AMIIBO_NAME] = "Input Amiibo Name:",
    [_L_DELETE] = "Delete",
    [_L_INPUT_NEW_NAME] = "Input New Name:",
    [_L_CREATE_NEW_FOLDER] = "Create New Folder..",
    [_L_CREATE_NEW_TAG] = "Create New Tag..",
    [_L_RENAME] = "Rename",
    [_L_OPEN_FOLDER_FAILED] = "Failed to open folder",
    [_L_RENAME_FAILED] = "Failed to rename\nError code",
    [_L_MAIN_RETURN] = "[RETURN]",
    [_L_RANDOM_MODE_MANUAL] = "Randomize (Manual)",
    [_L_RANDOM_MODE_AUTO] = "Randomize (Auto)",
    [_L_SEQUENCE_MODE] = "Sequential mode",
    [_L_READ_WRITE_MODE] = "Read-write mode",
    [_L_AMIIBOLINK_V1] = "V1",
    [_L_AMIIBOLINK_V2] = "V2",
    [_L_AMILOOP] = "AmiLoop",
    [_L_MODE] = "Mode",
    [_L_AUTO_RANDOM] = "Auto Random.",
    [_L_COMPATIBLE_MODE] = "Compati. Mode",
    [_L_TAG_DETAILS] = "Tag Details",
    [_L_MAIN_MENU] = "[Main Menu]",
    [_L_MODE_RANDOM] = "Rand. (Manual)",
    [_L_MODE_CYCLE] = "Sequential",
    [_L_MODE_NTAG] = "Read/Write",
    [_L_MODE_RANDOM_AUTO_GEN] = "Rand. (Auto)",
    [_L_BLANK_TAG] = "Blank NFC tag",
    [_L_APP_AMIIDB] = "Amiibo Database",
    [_L_APP_AMMIDB_BROWSER] = "Browser..",
    [_L_APP_AMIIDB_SEARCH] = "Search..",
    [_L_APP_AMIIDB_MY_FAVORITES] = "My Favorites..",
    [_L_APP_AMIIDB_MY_TAGS] = "My Amiibo..",
    [_L_APP_AMIIDB_SETTINGS] = "Settings..",
    [_L_APP_AMIIDB_EXIT] = "[Exit]",
    [_L_APP_AMIIDB_BACK] = "[Back]",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY] = "Keys",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY_LOADED] = "Loaded",
    [_L_APP_AMIIDB_SETTINGS_AMIIBO_KEY_NOT_LOADED] = "NOT Loaded",
    [_L_APP_AMIIDB_SETTINGS_SLOT_NUM] = "Slot Num.",
    [_L_APP_AMIIDB_DETAIL_FAVORITE] = "Favorite..",
    [_L_APP_AMIIDB_DETAIL_SAVE_AS] = "Save As..",
    [_L_APP_AMIIDB_DETAIL_BACK_DETAIL] = "[Back to Detail]",
    [_L_APP_AMIIDB_DETAIL_BACK_LIST] = "[Back to List]",
    [_L_APP_AMIIDB_SEARCH_HEAD] = "Search:",
    [_L_APP_AMIIDB_MORE] = "[More..]",
    [_L_APP_AMIIDB_EMPTY_TAG] = "<Blank Amiibo>",
    [_L_APP_AMIIDB_SLOT_DELETE] = "Reset..",
    [_L_APP_AMIIDB_CONFIRM] = "Confirm",
    [_L_APP_AMIIDB_CANCEL] = "Cancel",
    [_L_APP_AMIIDB_TIPS] = "Note",
    [_L_APP_AMIIDB_NEW] = "New..",
    [_L_APP_AMIIDB_EMPTY] = "Empty..",
    [_L_APP_AMIIDB_DELETE] = "Delete..",
    [_L_APP_AMIIDB_FAV_NEW_HEAD] = "New Fav. Folder:",
    [_L_APP_AMIIDB_FAV_EMPTY_MSG] = "Empty Fav. Folder?",
    [_L_APP_AMIIDB_FAV_DELETE_MSG] = "Confirm Delete?",
    [_L_APP_AMIIDB_FAV_SELECT_FOLDER] = "Select Fav. Folder..",
    [_L_APP_AMIIDB_FAV_SUCCESS] = "Favorite Successfully!",
    [_L_APP_AMIIDB_FAV_FAILED] = "Favorite Failed!",
    [_L_APP_AMIIDB_SLOT_SAVE_SUCCESS] = "Save Successfully",
    [_L_APP_AMIIDB_SLOT_SAVE_FAILED] = "Save Failed!",
};
