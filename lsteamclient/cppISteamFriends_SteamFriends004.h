#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends004_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends004_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends004_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends004_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends004_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends004_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends004_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends004_GetFriendPersonaName(void *, CSteamID);
extern int cppISteamFriends_SteamFriends004_GetFriendAvatar(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends004_GetFriendGamePlayed(void *, CSteamID, uint64 *, uint32 *, uint16 *, uint16 *);
extern const char * cppISteamFriends_SteamFriends004_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends004_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends004_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends004_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends004_GetClanName(void *, CSteamID);
extern int cppISteamFriends_SteamFriends004_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends004_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends004_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends004_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends004_ActivateGameOverlay(void *, const char *);
#ifdef __cplusplus
}
#endif
