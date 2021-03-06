#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive(void *);
extern uint32 cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive(void *);
extern EUniverse cppISteamUtils_SteamUtils006_GetConnectedUniverse(void *);
extern uint32 cppISteamUtils_SteamUtils006_GetServerRealTime(void *);
extern const char * cppISteamUtils_SteamUtils006_GetIPCountry(void *);
extern bool cppISteamUtils_SteamUtils006_GetImageSize(void *, int, uint32 *, uint32 *);
extern bool cppISteamUtils_SteamUtils006_GetImageRGBA(void *, int, uint8 *, int);
extern bool cppISteamUtils_SteamUtils006_GetCSERIPPort(void *, uint32 *, uint16 *);
extern uint8 cppISteamUtils_SteamUtils006_GetCurrentBatteryPower(void *);
extern uint32 cppISteamUtils_SteamUtils006_GetAppID(void *);
extern void cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition(void *, ENotificationPosition);
extern bool cppISteamUtils_SteamUtils006_IsAPICallCompleted(void *, SteamAPICall_t, bool *);
extern ESteamAPICallFailure cppISteamUtils_SteamUtils006_GetAPICallFailureReason(void *, SteamAPICall_t);
extern bool cppISteamUtils_SteamUtils006_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *);
extern void cppISteamUtils_SteamUtils006_RunFrame(void *);
extern uint32 cppISteamUtils_SteamUtils006_GetIPCCallCount(void *);
extern void cppISteamUtils_SteamUtils006_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamUtils_SteamUtils006_IsOverlayEnabled(void *);
extern bool cppISteamUtils_SteamUtils006_BOverlayNeedsPresent(void *);
extern SteamAPICall_t cppISteamUtils_SteamUtils006_CheckFileSignature(void *, const char *);
extern bool cppISteamUtils_SteamUtils006_ShowGamepadTextInput(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32);
extern uint32 cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength(void *);
extern bool cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput(void *, char *, uint32);
extern const char * cppISteamUtils_SteamUtils006_GetSteamUILanguage(void *);
extern bool cppISteamUtils_SteamUtils006_IsSteamRunningInVR(void *);
#ifdef __cplusplus
}
#endif
