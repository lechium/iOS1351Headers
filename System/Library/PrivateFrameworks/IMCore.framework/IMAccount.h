/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMSystemMonitorListener.h>

@class IMServiceImpl, IMPeople, NSRecursiveLock, NSMapTable, IMHandle, NSArray, NSString, NSDictionary, NSMutableDictionary, NSDate, NSData, NSAttributedString;

@interface IMAccount : NSObject <IMSystemMonitorListener> {

	IMServiceImpl* _service;
	IMPeople* _buddyList;
	NSRecursiveLock* _lock;
	NSMapTable* _imHandles;
	IMHandle* _loginIMHandle;
	NSArray* _cachedAllowList;
	NSArray* _cachedBlockList;
	NSString* _loginID;
	NSString* _displayName;
	NSString* _uniqueID;
	long long _accountType;
	NSString* _strippedLogin;
	NSDictionary* _data;
	NSMutableDictionary* _dataChanges;
	NSMutableDictionary* _localCache;
	NSDictionary* _profile;
	NSMutableDictionary* _profileChanges;
	NSString* _countryCode;
	long long _profileStatus;
	NSDictionary* _accountPreferences;
	NSMutableDictionary* _accountPreferencesChanges;
	NSDictionary* _accountPersistentProperties;
	NSMutableDictionary* _accountPersistentPropertiesChanges;
	NSArray* _groups;
	NSMutableDictionary* _sortOrders;
	NSDictionary* _members;
	NSMutableDictionary* _coalescedChanges;
	NSArray* _targetGroupState;
	NSArray* _lastReceivedGroupState;
	NSDictionary* _subtypeInfo;
	NSArray* _vettedAliases;
	NSArray* _aliases;
	unsigned long long _myStatus;
	NSMutableDictionary* _currentAccountStatus;
	NSString* _myStatusMessage;
	NSDictionary* _myNowPlaying;
	NSDate* _myIdleSince;
	NSData* _myPictureData;
	NSData* _accountImageData;
	unsigned long long _capabilities;
	unsigned long long _defaultHandleCapabilities;
	BOOL _hasCheckedDefaultHandleCapabilities;
	NSAttributedString* _myProfile;
	long long _registrationStatus;
	long long _registrationFailureReason;
	NSDictionary* _registrationAlertInfo;
	unsigned long long _loginStatus;
	BOOL _isActive;
	BOOL _hasPostedOfflineNotification;
	BOOL _justLoggedIn;
	BOOL _useMeCardName;
	unsigned _cachedBlockingMode;
	BOOL _blockIdleStatus;
	BOOL _syncedWithRemoteBuddyList;
	BOOL _hasReceivedSync;
	int _numHolding;
	int _coalesceCount;
	BOOL _needToCheckForWatchedIMHandles;
	BOOL _iconChecked;
	BOOL _hasBeenRemoved;
	id _smallImage;
	id _accountImage;
	BOOL _asleep;

}

@property (nonatomic,readonly) BOOL isAwaitingTargetGroupState; 
@property (nonatomic,readonly) BOOL hasTargetGroupStateBeenMet; 
@property (nonatomic,readonly) BOOL hasSyncedWithRemoteBuddies; 
@property (nonatomic,readonly) NSDictionary * _persistentProperties; 
@property (nonatomic,readonly) BOOL isAsleep; 
@property (nonatomic,readonly) BOOL _isUsableForSending; 
@property (nonatomic,__weak,readonly) IMServiceImpl * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) NSArray * emailDomains; 
@property (nonatomic,readonly) NSData * accountImageData; 
@property (nonatomic,readonly) NSString * addressBookProperty; 
@property (nonatomic,readonly) NSArray * addressBookProperties; 
@property (nonatomic,readonly) NSDictionary * accountSubtypeInfo;                        //@synthesize subtypeInfo=_subtypeInfo - In the implementation block
@property (nonatomic,readonly) BOOL supportsRegistration; 
@property (nonatomic,readonly) long long registrationStatus; 
@property (nonatomic,readonly) long long registrationFailureReason; 
@property (nonatomic,readonly) NSDictionary * registrationFailureAlertInfo; 
@property (nonatomic,readonly) BOOL isRegistered; 
@property (nonatomic,readonly) BOOL isOperational; 
@property (nonatomic,readonly) BOOL canSendMessages; 
@property (nonatomic,readonly) BOOL supportsAuthorization; 
@property (nonatomic,readonly) NSString * authorizationID; 
@property (nonatomic,readonly) NSString * authorizationToken; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (getter=isMakoAccount,nonatomic,readonly) BOOL makoAccount; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * aliasesToRegister; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,readonly) long long accountType; 
@property (nonatomic,readonly) BOOL hasCustomDescription; 
@property (nonatomic,retain) NSString * accountDescription; 
@property (nonatomic,readonly) unsigned long long loginStatus;                           //@synthesize loginStatus=_loginStatus - In the implementation block
@property (nonatomic,readonly) NSString * loginStatusMessage; 
@property (nonatomic,readonly) unsigned long long myStatus;                              //@synthesize myStatus=_myStatus - In the implementation block
@property (nonatomic,readonly) NSString * myStatusMessage;                               //@synthesize myStatusMessage=_myStatusMessage - In the implementation block
@property (nonatomic,readonly) NSDictionary * myStatusDictionary;                        //@synthesize currentAccountStatus=_currentAccountStatus - In the implementation block
@property (nonatomic,readonly) NSDate * myIdleSince;                                     //@synthesize myIdleSince=_myIdleSince - In the implementation block
@property (nonatomic,readonly) NSData * myPictureData;                                   //@synthesize myPictureData=_myPictureData - In the implementation block
@property (nonatomic,readonly) NSString * myNowPlayingString; 
@property (nonatomic,readonly) NSAttributedString * myProfile;                           //@synthesize myProfile=_myProfile - In the implementation block
@property (nonatomic,readonly) BOOL isManaged; 
@property (assign,nonatomic) BOOL autoLogin; 
@property (nonatomic,retain) NSString * login;                                           //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * strippedLogin;                                 //@synthesize strippedLogin=_strippedLogin - In the implementation block
@property (nonatomic,readonly) NSString * server; 
@property (nonatomic,readonly) long long port; 
@property (nonatomic,readonly) BOOL useSSL; 
@property (assign,nonatomic) BOOL goIdle; 
@property (assign,nonatomic) BOOL allowsVCRelay; 
@property (nonatomic,readonly) BOOL allowsSMSRelay; 
@property (nonatomic,readonly) BOOL allowsMMSRelay; 
@property (nonatomic,readonly) BOOL isSMSRelayCapable; 
@property (nonatomic,readonly) BOOL isConnecting; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL justLoggedIn;                                        //@synthesize justLoggedIn=_justLoggedIn - In the implementation block
@property (assign,getter=isInvisible,nonatomic) BOOL invisible; 
@property (nonatomic,readonly) BOOL isActive;                                            //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) BOOL canActivate; 
@property (nonatomic,readonly) unsigned long long capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) BOOL handlesChatInvites; 
@property (nonatomic,readonly) BOOL validLogin; 
@property (nonatomic,readonly) BOOL validPort; 
@property (nonatomic,readonly) BOOL validServer; 
@property (nonatomic,readonly) long long invalidSettings; 
@property (nonatomic,readonly) NSString * password; 
@property (nonatomic,readonly) NSString * temporaryPassword; 
@property (nonatomic,readonly) NSArray * groupList; 
@property (nonatomic,readonly) IMPeople * buddyList;                                     //@synthesize buddyList=_buddyList - In the implementation block
@property (nonatomic,readonly) BOOL makingChanges; 
@property (nonatomic,retain) NSArray * blockList; 
@property (nonatomic,retain) NSArray * allowList; 
@property (assign,nonatomic) unsigned blockingMode;                                      //@synthesize cachedBlockingMode=_cachedBlockingMode - In the implementation block
@property (assign,nonatomic) BOOL blockIdleStatus;                                       //@synthesize blockIdleStatus=_blockIdleStatus - In the implementation block
@property (assign,nonatomic) BOOL blockOtherAddresses; 
@property (nonatomic,readonly) NSDictionary * accountPreferences; 
@property (nonatomic,readonly) NSArray * arrayOfAllIMHandles; 
@property (nonatomic,readonly) id loginIMHandle;                                         //@synthesize loginIMHandle=_loginIMHandle - In the implementation block
+(id)arrayOfAllIMHandles;
+(id)passwordForAccount:(id)arg1 forServiceName:(id)arg2 ;
+(void)setPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4 ;
+(void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2 ;
+(id)temporaryPasswordForAccount:(id)arg1 forAuthID:(id)arg2 forServiceName:(id)arg3 ;
+(void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4 ;
+(void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2 ;
+(id)_groupSummaryFromGroupList:(id)arg1 ;
+(id)nameOfLoginStatus:(unsigned long long)arg1 ;
+(id)allBuddyListIMHandles;
-(id)__ck_handlesFromAddressStrings:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)isRegistered;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(long long)port;
-(NSString *)password;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)dictionary;
-(NSString *)countryCode;
-(BOOL)isActive;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(NSString *)serviceName;
-(NSString *)server;
-(void)setDisplayName:(NSString *)arg1 ;
-(IMServiceImpl *)service;
-(NSString *)accountDescription;
-(BOOL)useSSL;
-(long long)accountType;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForPreferenceKey:(id)arg1 ;
-(void)resetToDefaults;
-(BOOL)isInvisible;
-(void)setIsActive:(BOOL)arg1 ;
-(unsigned long long)capabilities;
-(BOOL)isConnected;
-(NSString *)internalName;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)shortName;
-(void)systemWillSleep;
-(void)systemDidWake;
-(id)initWithService:(id)arg1 ;
-(void)setInvisible:(BOOL)arg1 ;
-(NSArray *)vettedAliases;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isConnecting;
-(BOOL)registerAccount;
-(BOOL)authenticateAccount;
-(long long)registrationStatus;
-(NSArray *)aliasesToRegister;
-(BOOL)addAliases:(id)arg1 ;
-(NSArray *)aliases;
-(NSDictionary *)profileInfo;
-(long long)profileValidationStatus;
-(long long)profileValidationErrorReason;
-(BOOL)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(BOOL)validateProfile;
-(BOOL)removeAliases:(id)arg1 ;
-(BOOL)validateAliases:(id)arg1 ;
-(BOOL)unvalidateAliases:(id)arg1 ;
-(BOOL)unregisterAccount;
-(id)_aliases;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(BOOL)isManaged;
-(NSString *)authorizationToken;
-(id)imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2 ;
-(NSString *)strippedLogin;
-(long long)compareIDs:(id)arg1 ;
-(BOOL)isSMSRelayCapable;
-(BOOL)allowsSMSRelay;
-(void)enrollSelfDeviceInSMSRelay;
-(BOOL)isOperational;
-(id)existingIMHandleWithID:(id)arg1 ;
-(id)imHandleWithID:(id)arg1 ;
-(unsigned long long)loginStatus;
-(long long)registrationFailureReason;
-(BOOL)_isUsableForSending;
-(void)setLogin:(NSString *)arg1 ;
-(id)loginIMHandle;
-(NSDictionary *)registrationFailureAlertInfo;
-(void)loadFromDictionary:(id)arg1 ;
-(BOOL)hasCapability:(unsigned long long)arg1 ;
-(unsigned long long)myStatus;
-(NSString *)login;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2 ;
-(void)_syncWithRemoteBuddies;
-(void)setIMAccountLoginStatus:(unsigned long long)arg1 ;
-(BOOL)hasSyncedWithRemoteBuddies;
-(void)_markHasSyncedWithRemoteBuddies;
-(NSArray *)arrayOfAllIMHandles;
-(BOOL)allowsMMSRelay;
-(BOOL)equalID:(id)arg1 andID:(id)arg2 ;
-(long long)compareNames:(id)arg1 ;
-(NSString *)addressBookProperty;
-(BOOL)supportsAuthorization;
-(BOOL)handlesChatInvites;
-(BOOL)supportsRegistration;
-(NSArray *)addressBookProperties;
-(NSArray *)emailDomains;
-(id)initWithUniqueID:(id)arg1 service:(id)arg2 ;
-(void)clearServiceCaches;
-(void)syncWithRemoteBuddies;
-(void)_serviceDidConnect:(id)arg1 ;
-(void)_serviceDidReconnect:(id)arg1 ;
-(void)_serviceDidDisconnect:(id)arg1 ;
-(void)_registrationStatusChanged:(id)arg1 ;
-(void)_loginWithAutoLogin:(BOOL)arg1 ;
-(void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3 ;
-(void)_refreshLoginIMHandle;
-(void)_updateLogin:(id)arg1 ;
-(void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2 ;
-(NSDictionary *)accountPreferences;
-(void)_loadFromDictionary:(id)arg1 force:(BOOL)arg2 ;
-(void)setAutoLogin:(BOOL)arg1 ;
-(void)_invalidateCachedAliases;
-(long long)compareAccountNames:(id)arg1 ;
-(NSString *)authorizationID;
-(void)removePassword;
-(void)removeTemporaryPassword;
-(NSString *)loginStatusMessage;
-(id)_serverWithSSL:(BOOL)arg1 ;
-(BOOL)blockIdleStatus;
-(void)setBlockIdleStatus:(BOOL)arg1 ;
-(long long)invalidSettings;
-(BOOL)validLogin;
-(BOOL)validServer;
-(BOOL)validPort;
-(void)_updateProfileInfo:(id)arg1 ;
-(void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3 ;
-(long long)validationErrorReasonForAlias:(id)arg1 ;
-(BOOL)_updateDisplayName:(id)arg1 ;
-(unsigned)blockingMode;
-(NSArray *)blockList;
-(NSArray *)allowList;
-(void)setBlockList:(NSArray *)arg1 ;
-(void)setBlockingMode:(unsigned)arg1 ;
-(void)setAllowList:(NSArray *)arg1 ;
-(void)setCachedBlockList:(id)arg1 ;
-(void)setCachedAllowList:(id)arg1 ;
-(void)setCachedBlockingMode:(unsigned)arg1 ;
-(void)setCachedBlockIdleStatus:(BOOL)arg1 ;
-(void)writeSettings;
-(void)targetGroupStateTimeout;
-(BOOL)hasTargetGroupStateBeenMet;
-(void)clearTargetState;
-(void)groupsChanged:(id)arg1 error:(id)arg2 ;
-(void)setWaitForTargetState;
-(void)updateWithTargetGroups;
-(void)setTargetGroupsState:(id)arg1 ;
-(BOOL)makingChanges;
-(void)requestGroups;
-(NSArray *)groupList;
-(void)changeBuddyList:(id)arg1 add:(BOOL)arg2 groups:(id)arg3 atLocation:(long long)arg4 ;
-(void)_ensureGroupsExists:(id)arg1 ;
-(void)requestBuddyListAuthorizationFromIMHandle:(id)arg1 ;
-(BOOL)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3 ;
-(void)beginChanges;
-(id)propertiesForGroup:(id)arg1 ;
-(void)reorderGroups:(id)arg1 ;
-(void)endChanges;
-(void)_applyChangesToTemporaryCache:(id)arg1 ;
-(void)_resumeBuddyUpdatesNow;
-(id)existingIMHandleWithInfo:(id)arg1 ;
-(void)buddyPropertiesChanged:(id)arg1 ;
-(void)hookupToDaemon;
-(void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 ;
-(BOOL)_aliasIsVisible:(id)arg1 ;
-(void)_notJustLoggedIn;
-(void)forgetAllWatches;
-(void)nowLoggedIn;
-(void)nowLoggedOut;
-(BOOL)isAwaitingTargetGroupState;
-(IMPeople *)buddyList;
-(void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2 ;
-(void)watchBuddiesIfNecessary;
-(id)_imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2 originalID:(id)arg3 countryCode:(id)arg4 ;
-(unsigned long long)defaultHandleCapabilities;
-(id)personForIMHandle:(id)arg1 ;
-(id)imHandlesForIMPerson:(id)arg1 ;
-(BOOL)emailAddressIsID:(id)arg1 ;
-(void)startWatchingIMHandle:(id)arg1 ;
-(void)_watchBuddiesIfNecessary;
-(id)imHandleWithInfo:(id)arg1 ;
-(void)setBuddyListAuthorization:(BOOL)arg1 forIMHandle:(id)arg2 ;
-(void)disconnectAllIMHandles;
-(id)defaultChatSuffix;
-(id)profileValueForKey:(id)arg1 ;
-(BOOL)setProfileValue:(id)arg1 forKey:(id)arg2 ;
-(id)profileStringForKey:(id)arg1 ;
-(BOOL)hasAlias:(id)arg1 ;
-(long long)typeForAlias:(id)arg1 ;
-(void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)addAlias:(id)arg1 ;
-(BOOL)removeAlias:(id)arg1 ;
-(BOOL)validateAlias:(id)arg1 ;
-(id)_aliasInfoForAlias:(id)arg1 ;
-(long long)validationStatusForAlias:(id)arg1 ;
-(void)setObject:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)objectForPreferenceKey:(id)arg1 ;
-(void)autoLoginAccount;
-(void)loginAccount;
-(void)logoutAccount;
-(void)loginStatusChanged:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(void)setCurrentAccountStatus:(id)arg1 ;
-(NSString *)myNowPlayingString;
-(NSData *)accountImageData;
-(long long)compareLoginStatus:(id)arg1 ;
-(long long)compareStatus:(id)arg1 ;
-(long long)compareServices:(id)arg1 ;
-(void)updateCapabilities:(unsigned long long)arg1 ;
-(NSString *)temporaryPassword;
-(void)setTemporaryPassword:(NSString *)arg1 ;
-(BOOL)hasCustomDescription;
-(BOOL)autoLogin;
-(BOOL)goIdle;
-(void)setGoIdle:(BOOL)arg1 ;
-(BOOL)allowsVCRelay;
-(void)setAllowsVCRelay:(BOOL)arg1 ;
-(BOOL)canActivate;
-(void)requestProperty:(id)arg1 ofIMHandle:(id)arg2 ;
-(void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3 ;
-(void)blockMessages:(BOOL)arg1 fromID:(id)arg2 ;
-(BOOL)blockOtherAddresses;
-(void)setBlockOtherAddresses:(BOOL)arg1 ;
-(BOOL)removePeople:(id)arg1 fromGroups:(id)arg2 ;
-(BOOL)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3 ;
-(BOOL)removeIMHandle:(id)arg1 fromGroups:(id)arg2 ;
-(void)addBuddyToBuddyList:(id)arg1 ;
-(void)renameGroup:(id)arg1 to:(id)arg2 ;
-(void)reorderGroup:(id)arg1 order:(id)arg2 ;
-(id)groupMembers:(id)arg1 ;
-(id)memberGroups:(id)arg1 ;
-(void)holdBuddyUpdates;
-(void)resumeBuddyUpdates;
-(void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3 ;
-(void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2 ;
-(void)accountWillBeRemoved;
-(void)accountDidBecomeActive;
-(void)accountDidDeactivate;
-(BOOL)canSendMessages;
-(id)recalculatedSubtypeInfo;
-(void)_clearImageCache;
-(void)recalculateSubtypeInfo;
-(Class)imHandleClass;
-(id)imHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2 ;
-(id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2 ;
-(id)imHandleWithID:(id)arg1 countryCode:(id)arg2 ;
-(id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2 ;
-(id)personForIMHandle:(id)arg1 identifier:(int*)arg2 ;
-(id)personSibsForIMHandle:(id)arg1 ;
-(unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2 ;
-(BOOL)addIMHandle:(id)arg1 toIMPerson:(id)arg2 ;
-(BOOL)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2 ;
-(void)stopWatchingIMHandle:(id)arg1 ;
-(void)registerIMHandle:(id)arg1 ;
-(void)unregisterIMHandleWithID:(id)arg1 ;
-(void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2 ;
-(id)chatIDForRoomName:(id)arg1 ;
-(FZChatRoomValidity)validityOfChatRoomName:(id)arg1 ;
-(BOOL)requestNewAuthorizationCredentials;
-(void)enrollDeviceInSMSRelay:(id)arg1 ;
-(void)unEnrollDeviceInSMSRelay:(id)arg1 ;
-(BOOL)removeProfileValueForKey:(id)arg1 ;
-(BOOL)setProfileString:(id)arg1 forKey:(id)arg2 ;
-(id)_statuses;
-(BOOL)isMakoAccount;
-(BOOL)hasAlias:(id)arg1 type:(long long)arg2 ;
-(id)aliasesForType:(long long)arg1 ;
-(BOOL)addAlias:(id)arg1 type:(long long)arg2 ;
-(BOOL)removeAlias:(id)arg1 type:(long long)arg2 ;
-(BOOL)unvalidateAlias:(id)arg1 ;
-(BOOL)validateAlias:(id)arg1 type:(long long)arg2 ;
-(long long)validationStatusForAlias:(id)arg1 type:(long long)arg2 ;
-(long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2 ;
-(void)setDictionaryData:(id)arg1 forKey:(id)arg2 ;
-(void)_setDictionaryData:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryDataForKey:(id)arg1 ;
-(BOOL)isAsleep;
-(NSDictionary *)_persistentProperties;
-(id)_persistentPropertyForKey:(id)arg1 ;
-(void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2 ;
-(void)_removePersistentPropertyForKey:(id)arg1 ;
-(void)removeObjectForPreferenceKey:(id)arg1 ;
-(void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)dictionaryDataForPreferenceKey:(id)arg1 ;
-(id)stringForPreferenceKey:(id)arg1 ;
-(void)setString:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forPreferenceKey:(id)arg2 ;
-(int)integerForPreferenceKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forPreferenceKey:(id)arg2 ;
-(void)_handleDeliveredCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3 ;
-(void)_handleIncomingCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3 ;
-(NSDictionary *)myStatusDictionary;
-(NSAttributedString *)myProfile;
-(NSString *)myStatusMessage;
-(NSData *)myPictureData;
-(NSDate *)myIdleSince;
-(NSDictionary *)accountSubtypeInfo;
-(BOOL)justLoggedIn;
@end

