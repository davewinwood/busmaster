#pragma once

// LDF Global Defines
#define defLIN_GN_DESC_FILE                 "LIN_description_file;"
#define defLIN_GN_CHANNEL_NAME              "Channel_name = "
#define defLIN_GN_NODES                     "Nodes"
#define defLIN_GN_SIGNALS                   "Signals"
#define defLIN_GN_FRAMES                    "Frames"
#define defOPEN_BRACE                       "{"
#define defCLOSE_BRACE                      "}"
#define defSLAVES                           "\tSlaves: "
#define defSignalOffset                     "\t%s, %d;\n"
#define defCOMMA                            ", "
#define defHIPHEN                           "-"
#define defEQUAL                            " = "
#define defSEMICOLON                        " ;\n"
#define defNEWLINE                          "\n"
#define defTAB                              "\t"
#define defTWOTAB                           "\t\t"
#define defCOLON                            ": "
#define defLIN_VERSION_1_3                  "1.3"
#define defLIN_VERSION_2_0                  "2.0"
#define defLIN_VERSION_2_1                  "2.1"
#define defVersion_1_3                       1.3
#define defVersion_2_0                       2.0
#define defVersion_2_1                       2.1

#define defLIN_VALID_UNCOND_START_ID        0x0
#define defLIN_VALID_UNCOND_END_ID          0x3B            //59

#define defLIN_GN_PROTOCOL_VERSION          "LIN_protocol_version = "
#define defLIN_GN_LANGUAGE_VERSION          "LIN_language_version = "
#define defLIN_GN_SPEED                     "LIN_speed = "
#define defUNIT_KBPS                        " kbps"
#define defUNIT_MS                          " ms"
#define defHEX                              "0x"
#define defMASTER                           "\n\tMaster: "
#define defLIN_GN_DIAG_SIGNAL               "Diagnostic_signals "
#define defLIN_GN_DIAG_FRAMES               "Diagnostic_frames "
#define defLIN_GN_EVENT_TRIG_FRAMES         "Event_triggered_frames "
#define defLIN_GN_SPORADIC_FRAMES           "Sporadic_frames "
#define defSPACE                            " "
#define defNODE_ATTRIBUTES                  "Node_attributes "
#define defLIN_PROTOCOL                     "LIN_protocol = "
#define defLIN_CONFIGURED_NAD               "configured_NAD = "
#define defLIN_INITIAL_NAD                  "initial_NAD = "
#define defLIN_PRODUCT_ID                   "product_id = "
#define defLIN_RESPONSE_ERROR               "response_error = "
#define defLIN_FAULT_SIGNALS                "fault_state_signals = "
#define defLIN_P2_MIN                       "P2_min = "
#define defLIN_ST_MIN                       "ST_min = "
#define defLIN_N_AS_TIMEOUT                 "N_As_timeout = "
#define defLIN_N_Cr_TIMEOUT                 "N_Cr_timeout = "
#define defLIN_CONFIG_FRAMES                "configurable_frames"
#define defDOUBLEQUOTE                      "\""
#define defSCHEDULE_TABLES                  "Schedule_tables "
#define defDELAY                            " delay "
#define defSIGNAL_ENCODING                  "Signal_encoding_types "
#define defPHYSICAL_VALUE                   "physical_value"
#define defLOGICAL_VALUE                    "logical_value"
#define defBCD_VALUE                        "bcd_value"
#define defASCII_VALUE                      "ascii_value"
#define defSIGNAL_REPRESENTATION            "Signal_representation "
#define defNODE_COMPOSITION                 "composite"
#define defNODE_CONFIGURATION               "configuration "
#define defSIGNAL_GROUPS                    "Signal_groups "
#define defDIAG_ADDRESSES                   "Diagnostic_addresses "
#define defDOUBLE_QUOTE                     "\""
#define defDYNAMIC_FRAMES                   "dynamic_frames "
#define defASSIGN_NAD                       "AssignNAD"
#define defSLAVE_RESP                       "SlaveResp"
#define defASSIGN_FRAMEID_RANGE             "AssignFrameIdRange"
#define defMASTER_REQUEST                   "MasterReq"
#define defFREEFORMAT                       "FreeFormat"
#define defCONDITIONALCHANGENAD             "ConditionalChangeNAD"
#define defDATADUMP                         "DataDump"
#define defSAVECONFIG                       "SaveConfiguration"
#define defASSIGNFRAMEID                    "AssignFrameId"
#define defUNASSIGNFRAMEID                  "UnAssignFrameId"
