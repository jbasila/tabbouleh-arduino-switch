
PGM_STRING(STR_AT, "AT")
PGM_STRING(STR_ATBAUD, "AT+BAUD")
PGM_STRING(STR_ATNAME, "AT+NAME")
PGM_STRING(STR_ATPIN, "AT+PIN")

PGM_STRING(STR_BT_DEFAULT_NAME, "Tabbouleh BT")
PGM_STRING(STR_BT_DEFAULT_PIN, "0000")

PGM_STRING(STR_FATAL_BT, "FATAL: bluetooth device not initialized")
PGM_STRING(STR_READY, "\n\nREADY\n")
PGM_STRING(STR_CFG_UPDATE, "Config Update")
PGM_STRING(STR_CFG_RESTORED, "restored")
PGM_STRING(STR_CFG_BAUD_RATE, "Setting the baud rate to: ")

PGM_STRING(STR_CMD_LIST, "list")
PGM_STRING(STR_CMD_SET, "set")
PGM_STRING(STR_CMD_CLEAR, "clear")
PGM_STRING(STR_CMD_SAVE, "save")
PGM_STRING(STR_CMD_ACTION, "action")
PGM_STRING(STR_CMD_BT, "bt")
PGM_STRING(STR_CMD_FREE, "free")

PGM_STRING(STR_COMMAND_HELP, 
  "list   - List current devices\n"\
  "set    - Set device on a slot\n"\
  "clear  - Clear device from slot\n"\
  "save   - Save configurmation in permanent memory\n"\
  "action - Send an action to a configured device slot\n")

PGM_STRING(STR_COMMAND_LIST_FORMAT_HEADER, "ID |Device  |P1 |P2 |PD\n")
PGM_STRING(STR_COMMAND_LIST_FORMAT_STRING, "%2d |%-7s |%-2d |%-2d |%02X %02X %02X %02X\n")
PGM_STRING(STR_COMMAND_LIST_FORMAT_LINE, "---|--------|---|---|-----------\n")

PGM_STRING(STR_COMMAND_SET_USAGE, "usage: set <index> <deviceName> <param1> <param2>\n")
PGM_STRING(STR_COMMAND_SET, "SET: ")

PGM_STRING(STR_COMMAND_CLEAR_NOT_NUMBER_OR_ALL, "clear: argument is not a number or 'all'\n")
PGM_STRING(STR_COMMAND_CLEAR_TOO_MANY_ARGUMENTS, "clear: too many arguments\n")
PGM_STRING(STR_COMMAND_CLEAR_USAGE, "usage: clear <index> | all\n")

PGM_STRING(STR_COMMAND_ACTION_USAGE, "usage: action <index> <action> <param>\n")
PGM_STRING(STR_COMMAND_ACTION_INVALID_LOGIC, "action: invalid index logic\n")

PGM_STRING(STR_COMMAND_SAVE, "SAVE: ")

PGM_STRING(STR_COMMAND_BT_USAGE, "usage: bt BAUD NAME PIN\n")
PGM_STRING(STR_COMMAND_BT, "BT: ")
PGM_STRING(STR_COMMAND_BT_ERROR_INVALID_BAUD_RATE, "ERROR: Invalid baud rate: ")
PGM_STRING(STR_COMMAND_BT_ERROR_INVALID_PIN_CODE, "ERROR: Invalid PIN code: ")
PGM_STRING(STR_DBG_BT_FAILED_SET_BAUD_RATE, "ERROR: Failed to set BAUD RATE")
PGM_STRING(STR_DBG_BT_FAILED_SET_PIN, "ERROR: Failed to set PIN")
PGM_STRING(STR_DBG_BT_FAILED_SET_DEVICE_NAME, "ERROR: Failed to set DEVICE NAME")

PGM_STRING(STR_COMMAND_FREE, "Free memory: ")

PGM_STRING(STR_COMMAND_UNKNOWN, "Unknown Command\n")

PGM_STRING(STR_SETUP_DEBUG_RESTORING_CONFIGURATION, "\nRestoring Configuration: ")
PGM_STRING(STR_SETUP_DEBUG_DUMP_OF_CONFIGURATION, "\n\nDump of configuration:")
PGM_STRING(STR_SETUP_DEBUG_DUMP_OF_EEPROM, "\n\nDump of EEPROM:")
PGM_STRING(STR_SETUP_DEBUG_STORING, "\nStoring: ")

PGM_STRING(STR_SUCCESS, "success")
PGM_STRING(STR_FAILED, "failed")
PGM_STRING(STR_YES, "yes")
PGM_STRING(STR_NO, "no")
PGM_STRING(STR_ON, "on")
PGM_STRING(STR_OFF, "off")
PGM_STRING(STR_LOW, "low")
PGM_STRING(STR_HIGH, "high")

PGM_STRING(STR_EVENT, "EVENT: ")
PGM_STRING(STR_ACTION, "ACTION: ")
PGM_STRING(STR_SEMICOLON_SPACE, "; ")

PGM_STRING(STR_INVALID_ACTION, "invalid action passed")

PGM_STRING(STR_ON_OFF, "on_off")
PGM_STRING(STR_ON_OFF__OK_SWITCH, "SET: ")
PGM_STRING(STR_ON_OFF__STATE, "STATE: ")

PGM_STRING(STR_TRIGGER, "trigger")
PGM_STRING(STR_TRIGGER__ACTIVE_STATE, "STATE: ")
PGM_STRING(STR_TRIGGER__SET_ACTIVE, "OK: active ")
PGM_STRING(STR_TRIGGER__SET_DEBOUNCE, "OK: debounce ")
PGM_STRING(STR_TRIGGER__SET_EDGE, "OK: edge ")
PGM_STRING(STR_TRIGGER__RISING, "rising")
PGM_STRING(STR_TRIGGER__FALLING, "falling")
PGM_STRING(STR_TRIGGER_EVENT, "TRIGGER SET")

PGM_STRING(STR_SENSOR, "sensor")
PGM_STRING(STR_SENSOR__STATE, "STATE: ")
PGM_STRING(STR_SENSOR__SET_ACTIVE_THRESHOLD, "SET: ACTIVE ")
PGM_STRING(STR_SENSOR__SET_THRESHOLD, "SET: THRESHOLD ")

PGM_STRING(STR_UNKNOWN, "unknown")

