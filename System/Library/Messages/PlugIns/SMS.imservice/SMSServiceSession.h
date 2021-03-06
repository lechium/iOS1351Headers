/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDaemonCore/IMDServiceSession.h>
#import <libobjc.A.dylib/CoreTelephonyClientSMSDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSAccountRegistrationDelegate.h>
#import <SMS/SMSRelayPushHandlerListener.h>

@class NSMutableDictionary, IMMultiQueue, IDSService, NSArray, NSSet, SMSRelayPushHandler, NSMutableSet, CoreTelephonyClient, IMDChatRegistry, NSString;

@interface SMSServiceSession : IMDServiceSession <CoreTelephonyClientSMSDelegate, IDSServiceDelegate, IDSAccountRegistrationDelegate, SMSRelayPushHandlerListener> {

	NSMutableDictionary* _outgoingRelayMessageTimerMap;
	NSMutableDictionary* _outgoingMessageMap;
	NSMutableDictionary* _outgoingMessageBlockMap;
	NSMutableDictionary* _outgoingMessageFailureMap;
	IMMultiQueue* _incomingMessageMultiQueue;
	NSMutableDictionary* _spamBlockMap;
	BOOL _isRegistered;
	BOOL _hasClearedMesageQueue;
	IDSService* _relayService;
	IDSService* _smsRelayService;
	IDSService* _smsWatchService;
	NSArray* _currentRelayDevices;
	NSSet* _currentRelayAccounts;
	SMSRelayPushHandler* _smsRelayPushHandler;
	NSMutableSet* _originatedMessages;
	BOOL _pendingOriginatedMessagesTimer;
	NSMutableSet* _pendingRelayApprovalRequests;
	NSMutableDictionary* _pendingCodesToDevicesForApproval;
	CoreTelephonyClient* coreTelephonyClient;
	IMDChatRegistry* _chatRegistry;

}

@property (nonatomic,retain) IMDChatRegistry * chatRegistry;              //@synthesize chatRegistry=_chatRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)smsMessageReceived:(id)arg1 msgID:(long long)arg2 ;
-(void)mmsMessageReceived:(id)arg1 msgID:(long long)arg2 ;
-(void)postSMSMessageSent:(id)arg1 success:(BOOL)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5 ;
-(void)postMMSMessageSent:(id)arg1 success:(BOOL)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5 ;
-(id)localDevice;
-(unsigned long long)capabilities;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(void)enrollSelfDeviceInSMSRelay;
-(IMDChatRegistry *)chatRegistry;
-(void)enrollDeviceInSMSRelay:(id)arg1 ;
-(void)unEnrollDeviceInSMSRelay:(id)arg1 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg1 ;
-(void)replayMessage:(id)arg1 ;
-(void)enqueReplayMessageCallback:(/*^block*/id)arg1 ;
-(void)logoutServiceSessionWithAccount:(id)arg1 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendDeleteCommand:(id)arg1 forChatGUID:(id)arg2 ;
-(void)refreshServiceCapabilities;
-(void)setChatRegistry:(IMDChatRegistry *)arg1 ;
-(BOOL)_isValidPhoneNumber:(id)arg1 forCountryCode:(id)arg2 ;
-(id)_cleanUnformattedPhoneNumber:(id)arg1 countryCode:(id)arg2 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 joinProperties:(id)arg7 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)loginServiceSessionWithAccount:(id)arg1 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5 ;
-(id)idsDeviceFromPushToken:(id)arg1 ;
-(void)_handleDeleteCommandWithMessageDictionary:(id)arg1 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4 ;
-(BOOL)_enableBackwardsCompatibility;
-(BOOL)sendToLocalPeers:(id)arg1 ;
-(void)_setUpRelay;
-(void)_updateRelayStatus;
-(void)_registerForAccountChanges;
-(void)_updatePhoneNumberCallerID;
-(void)_handleCapabilitiesChanged:(id)arg1 ;
-(void)_registerForCTNotifications;
-(void)_clearPendingIncomingMessageQueue;
-(void)updateMMSCapability;
-(void)_registerForIncomingMessages:(id)arg1 ;
-(void)_unregisterForCTNotifications;
-(void)_clearTimoutTimerForRelayMessageID:(id)arg1 ;
-(void)_messageTimedOut:(id)arg1 ;
-(void)_checkAndSetRelayService;
-(void)_addDeviceToAllowedSMSRelay:(id)arg1 shouldSendApproval:(BOOL)arg2 ;
-(BOOL)_hasRelayDevice;
-(BOOL)_hasPhoneNumberAliasActive;
-(id)_callerIDAccountFromSettings;
-(BOOL)_isAliasActiveForSMSRelay:(id)arg1 ;
-(id)_myCTPhoneNumber;
-(void)_forwardMessageToPeers:(id)arg1 messageType:(long long)arg2 guid:(id)arg3 originalSender:(id)arg4 hasAttachment:(BOOL)arg5 ;
-(BOOL)isSMSRelayEnabled;
-(BOOL)sendDataToPeers:(id)arg1 forcedCallerID:(id)arg2 shouldFilterRecepients:(BOOL)arg3 requestProxySend:(BOOL)arg4 dontSendTo:(id)arg5 ;
-(BOOL)isLocalDeviceProxyRegistered;
-(BOOL)_hasPeerDevices;
-(id)_allowedDevicesforSMSRelay;
-(BOOL)_isConnectedOverBT:(id)arg1 ;
-(BOOL)_isDeviceATrustedHSA2Device:(id)arg1 ;
-(BOOL)isIDInList:(id)arg1 ArrayToCheck:(id)arg2 ;
-(BOOL)_areiMessageAndiCloudAccountTheSame:(id)arg1 ;
-(void)_enableSMSRelayForDevice:(id)arg1 ;
-(void)_shouldAutoEnableDevicesforSMSRelay:(/*^block*/id)arg1 ;
-(BOOL)accountHasAlias:(id)arg1 aliastoCheck:(id)arg2 ;
-(BOOL)_localDeviceSupportsSMS;
-(id)_dominentPhoneNumberAlias;
-(id)_callerIDForRelay;
-(id)phoneAliasForDominentPhoneAlias:(id)arg1 registeredPhoneNumber:(id)arg2 preferedCallerID:(id)arg3 CTPhoneNumber:(id)arg4 ;
-(id)accountForAlias:(id)arg1 fromAccounts:(id)arg2 ;
-(id)retrievePhoneAccountAndPhoneAliasFromIDSAccounts:(id)arg1 ;
-(id)retrieveAccountAndPhoneAliasForAccounts:(id)arg1 shouldFilterRecepients:(BOOL)arg2 requestProxySend:(BOOL)arg3 ;
-(id)_deviceForCallerID:(id)arg1 ;
-(id)_destinationForDevice:(id)arg1 forcedIdentity:(id)arg2 ;
-(id)_allowedIDSDevicesforSMSRelay;
-(void)_setClearMessageSendTimer;
-(void)_clearInactivityTimer;
-(void)_approveSelfForSMSRelay;
-(BOOL)_processReceivedDictionary:(id)arg1 storageContext:(id)arg2 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(void)handler:(id)arg1 outgoingPlainTextMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 isBeingReplayed:(BOOL)arg8 isInProxyMode:(BOOL)arg9 storageContext:(id)arg10 ;
-(void)_forwardMessageToPeers:(id)arg1 messageType:(long long)arg2 guid:(id)arg3 originalSender:(id)arg4 ;
-(id)_convertIMMessageItemDictionaryToIMMessageItem:(id)arg1 ;
-(void)_markFromStorageIfNeeded:(id)arg1 messageGUID:(id)arg2 ;
-(BOOL)_isDefaultPairedDeviceRelayingLocally:(id)arg1 ;
-(void)_updateShouldForceToSMSForChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 shouldForceToSMS:(BOOL)arg3 ;
-(id)_callerIDUsingFromIdentifier:(id)arg1 ;
-(void)sendCTMessageFromIMMessageItem:(id)arg1 forChat:(id)arg2 chat:(id)arg3 style:(unsigned char)arg4 ;
-(void)_updateLastAddressedIDsIfNeededForChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 ;
-(void)sendUnApproveToDevice:(id)arg1 extraKeys:(id)arg2 ;
-(id)idsDeviceForFromID:(id)arg1 ;
-(void)_removeOriginatedMessage:(id)arg1 ;
-(void)handler:(id)arg1 outgoingDownloadMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 isBeingReplayed:(BOOL)arg8 storageContext:(id)arg9 ;
-(void)handler:(id)arg1 messageIDSent:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6 ;
-(void)handler:(id)arg1 messageIDRead:(id)arg2 timeStamp:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 storageContext:(id)arg6 ;
-(id)_challengedDevicesforSMSRelay;
-(void)_addDeviceToChallengedSMSRelay:(id)arg1 ;
-(void)_sendPinCodeToDeviceAndPromptForResponse:(id)arg1 ;
-(BOOL)_checkMMSEnablementForPhoneNumber:(id)arg1 simID:(id)arg2 ;
-(void)_buildCTPhoneNumberWithParticipantInfo:(id)arg1 ctMessage:(id)arg2 ;
-(unsigned)_generateMessageIDForMessageGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(/*^block*/id)_failureBlockForMessageGUID:(id)arg1 ;
-(void)_clearMapForMessageGUID:(id)arg1 ;
-(id)idsDeviceFromUniqueID:(id)arg1 ;
-(void)_removeDeviceFromAllowedSMSRelay:(id)arg1 ;
-(void)sendApprovalEnrollMe;
-(void)sendApprovalResponseToDevice:(id)arg1 enteredCorrectly:(BOOL)arg2 wasCancelled:(BOOL)arg3 ;
-(BOOL)sendApprovalDisplayPinToDevice:(id)arg1 ;
-(unsigned long long)randomSixDigitCode;
-(BOOL)sendEnrollmentRelatedMessageOverIDS:(id)arg1 deviceToSendTo:(id)arg2 ;
-(id)_getSpamExtensionName;
-(void)_clearSpamMapForMessageGUID:(id)arg1 ;
-(BOOL)_areAllParticipantsUnknown:(id)arg1 fromSender:(id)arg2 ;
-(BOOL)_storeSpamCompletionBlock:(/*^block*/id)arg1 forMessageGUID:(id)arg2 ;
-(void)_checkIfMessageIsSpam:(id)arg1 fromSender:(id)arg2 withGuid:(id)arg3 shouldRegister:(BOOL)arg4 ;
-(BOOL)_isSpamFilteringEnabled;
-(void)_executeSpamCompletionBlockForMessageGuid:(id)arg1 isSpam:(BOOL)arg2 shouldRegister:(BOOL)arg3 ;
-(id)_getSpamExtensionID;
-(BOOL)isValidMMS:(id)arg1 ;
-(void)_addOriginatedMessage:(id)arg1 ;
-(BOOL)_isOneOfMyActiveAlias:(id)arg1 ;
-(BOOL)_localDeviceSupportsSMSAndDoesNotHaveAPhoneNumberForSIMID:(id)arg1 ;
-(void)_setTimeoutTimerForRelayMessageID:(id)arg1 timeout:(double)arg2 ;
-(id)_convertIMMessageItemToDictionary:(id)arg1 ;
-(BOOL)isProxyRegistered;
-(unsigned char)_readMMSUserOverrideForSingleSubscription;
-(void)_synchronizeMMSCapabilityToWatch:(BOOL)arg1 ;
-(BOOL)shouldFixIncomingDate;
-(id)_extractSMSSenderAddress:(id)arg1 ;
-(id)_fixIncomingDate:(id)arg1 ;
-(id)_convertCTMessagePartToDictionary:(id)arg1 ;
-(BOOL)_shouldUploadToMMCS:(id)arg1 ;
-(id)_createNewChatIdentifierFromChatIdentifier:(id)arg1 andSpamLabel:(id)arg2 ;
-(id)createHandleInfoForParticipants:(id)arg1 unformattedIDs:(id)arg2 countryCodes:(id)arg3 isGroupChat:(BOOL)arg4 ;
-(void)_updateSpamTypeForChat:(id)arg1 andMessage:(id)arg2 messageIsSpam:(BOOL)arg3 shouldRegister:(BOOL)arg4 spamExtensionName:(id)arg5 ;
-(void)_updateLastAddressedIDsIfNeededForChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 iMessageCapability:(long long)arg5 ;
-(BOOL)_shouldCheckChatForSMSSpam:(id)arg1 shouldRegister:(BOOL)arg2 ;
-(void)_smsSpamCheck:(/*^block*/id)arg1 withMessageBody:(id)arg2 withGuid:(id)arg3 sender:(id)arg4 andParticipants:(id)arg5 shouldRegister:(BOOL)arg6 ;
-(id)_messageGUIDForMessageID:(int)arg1 ;
-(/*^block*/id)_completionBlockForMessageGUID:(id)arg1 ;
-(id)_convertCTMessageToDictionary:(id)arg1 requiresUpload:(BOOL*)arg2 ;
-(BOOL)relayDictionaryToPeers:(id)arg1 requiresUpload:(BOOL)arg2 ;
-(void)_addDefaultPairedDeviceToAllowedSMSRelayList;
-(void)_sendMessageToAllSMSRelayDevicesWithOptions:(id)arg1 ;
-(void)_receivedSMSDictionary:(id)arg1 requiresUpload:(BOOL)arg2 isBeingReplayed:(BOOL)arg3 ;
-(void)_processMessageSent:(unsigned)arg1 ;
-(void)_processMessageSendFailure:(unsigned)arg1 ;
-(id)_getStorageDictionaryUsingMsgDict:(id)arg1 requiresUpload:(BOOL)arg2 ;
-(void)_processSMSorMMSMessageReceivedWithContext:(id)arg1 messageID:(long long)arg2 ;
-(void)_processSMSOrSMSMessageSentWithContext:(id)arg1 success:(BOOL)arg2 messageID:(unsigned)arg3 err1:(long long)arg4 err2:(long long)arg5 isSMS:(BOOL)arg6 ;
-(void)handler:(id)arg1 incomingPlainTextMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6 ;
-(void)handler:(id)arg1 incomingDownloadMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6 ;
-(void)handler:(id)arg1 outgoingPlainTextMessage:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 isBeingReplayed:(BOOL)arg8 storageContext:(id)arg9 ;
-(void)handler:(id)arg1 deleteCommand:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 needsDeliveryReceipt:(id)arg7 deliveryContext:(id)arg8 storageContext:(id)arg9 ;
-(void)handler:(id)arg1 messageIDSendFailure:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timeStamp:(id)arg5 storageContext:(id)arg6 ;
-(void)handler:(id)arg1 localIncommingMessage:(id)arg2 storageContext:(id)arg3 ;
-(void)handler:(id)arg1 localOutgoingMessage:(id)arg2 isBeingReplayed:(BOOL)arg3 storageContext:(id)arg4 ;
-(void)handler:(id)arg1 localOutgoingDownloadMessage:(id)arg2 isBeingReplayed:(BOOL)arg3 storageContext:(id)arg4 ;
-(void)handler:(id)arg1 localIncomingDownloadMessage:(id)arg2 storageContext:(id)arg3 ;
-(void)handler:(id)arg1 localMessageSent:(id)arg2 storageContext:(id)arg3 ;
-(void)handler:(id)arg1 localMessageRead:(id)arg2 storageContext:(id)arg3 ;
-(void)handler:(id)arg1 localMessageError:(id)arg2 storageContext:(id)arg3 ;
-(void)handler:(id)arg1 localFileRequest:(id)arg2 storageContext:(id)arg3 ;
-(void)handler:(id)arg1 localFileResponse:(id)arg2 storageContext:(id)arg3 ;
-(void)handler:(id)arg1 incomingDisplayPinCode:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 storageContext:(id)arg8 ;
-(void)handler:(id)arg1 incomingEnrollMeRequest:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 storageContext:(id)arg8 ;
-(void)handler:(id)arg1 incomingResponseForApproval:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 messageGUID:(id)arg6 timeStamp:(id)arg7 storageContext:(id)arg8 ;
-(BOOL)_isUsingSMSWatchService;
-(BOOL)_localDeviceSupportsSMSAndHasAPhoneNumber;
-(BOOL)_localDeviceSupportsRelay;
-(void)_addHSA2PairedDevicesToAllowedSMSRelayList;
-(id)_ignoredDevicesforSMSRelay;
-(id)_ignoredIDSDevicesforSMSRelay;
-(id)_challengedIDSDevicesforSMSRelay;
-(void)_addDeviceToIgnoredSMSRelay:(id)arg1 ;
-(void)_removeDeviceFromIgnoredSMSRelay:(id)arg1 ;
-(void)_removeDeviceFromChallengedSMSRelay:(id)arg1 ;
-(BOOL)_syncedMMSEnabledValue;
@end

