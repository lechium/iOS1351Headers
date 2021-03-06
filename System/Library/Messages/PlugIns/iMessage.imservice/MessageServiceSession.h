/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDaemonCore/IMDAppleServiceSession.h>
#import <libobjc.A.dylib/MessagePushHandlerListener.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/MessageDeliveryControllerDelegate.h>

@class NSMutableArray, IMMultiQueue, IMTimer, NSMutableDictionary, IMDChatRegistry, IMDMessageStore, IMDCKUtilities, NSString;

@interface MessageServiceSession : IMDAppleServiceSession <MessagePushHandlerListener, IDSServiceDelegate, MessageDeliveryControllerDelegate> {

	NSMutableArray* _messagePushHandlers;
	IMMultiQueue* _incomingMessageMultiQueue;
	IMTimer* _resetFailureRetriesTimer;
	NSMutableDictionary* _failureMap;
	BOOL _networkOverride;
	NSMutableArray* _pendingSendBlockQueue;
	IMDChatRegistry* _chatRegistry;
	IMDMessageStore* _messageStore;
	IMDCKUtilities* _ckUtilities;

}

@property (nonatomic,retain) IMDChatRegistry * chatRegistry;              //@synthesize chatRegistry=_chatRegistry - In the implementation block
@property (nonatomic,retain) IMDMessageStore * messageStore;              //@synthesize messageStore=_messageStore - In the implementation block
@property (nonatomic,retain) IMDCKUtilities * ckUtilities;                //@synthesize ckUtilities=_ckUtilities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)preWarm;
-(unsigned long long)capabilities;
-(void)addAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(IMDMessageStore *)messageStore;
-(void)setMessageStore:(IMDMessageStore *)arg1 ;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(IMDChatRegistry *)chatRegistry;
-(void)eagerUploadCancel:(id)arg1 ;
-(void)eagerUploadTransfer:(id)arg1 ;
-(void)updateBalloonPayload:(id)arg1 attachments:(id)arg2 forMessageGUID:(id)arg3 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg1 ;
-(void)sendLogDumpMessageAtFilePath:(id)arg1 toRecipient:(id)arg2 shouldDeleteFile:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)replayMessage:(id)arg1 ;
-(void)enqueReplayMessageCallback:(/*^block*/id)arg1 ;
-(BOOL)overrideNetworkAvailability;
-(void)processNetworkDataAvailabilityChange:(BOOL)arg1 ;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 ;
-(void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 toChatID:(id)arg4 identifier:(id)arg5 style:(unsigned char)arg6 ;
-(void)sendDeleteCommand:(id)arg1 forChatGUID:(id)arg2 ;
-(BOOL)sendNicknameUpdatesToPeerDevices:(id)arg1 toDestinations:(id)arg2 ;
-(void)sendNicknameInfoToChatID:(id)arg1 ;
-(BOOL)networkConditionsAllowLogin;
-(void)refreshServiceCapabilities;
-(IMDCKUtilities *)ckUtilities;
-(void)setChatRegistry:(IMDChatRegistry *)arg1 ;
-(void)setCkUtilities:(IMDCKUtilities *)arg1 ;
-(void)sendLocationSharingInfo:(id)arg1 toID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)didReceiveMessages:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(BOOL)canMakeExpireStateChecks;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 joinProperties:(id)arg7 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)leaveiMessageChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)closeSessionChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5 ;
-(void)refreshRegistration;
-(id)callerURI;
-(id)idsAccountForFromURI:(id)arg1 toURI:(id)arg2 ;
-(void)_iMessageBagLoaded:(id)arg1 ;
-(void)_updateNetworkOverride;
-(id)_firstiMessageChat;
-(id)_messageDictionaryForDeleteCommandShouldResetPreference:(BOOL)arg1 ;
-(void)_handleFileTransferAccepted:(id)arg1 ;
-(void)_handleInitiateHighQualityDownload:(id)arg1 ;
-(BOOL)_enableReadReceiptForChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)_logLocalInfo;
-(id)_messageItemToConsumeForNewBreadcrumbMessage:(id)arg1 outBreadcrumbItems:(id*)arg2 ;
-(BOOL)_updateReadReceiptProperties:(id)arg1 withIncomingProperties:(id)arg2 ;
-(void)_updateGlobalReadReceiptValue:(BOOL)arg1 withVersionID:(id)arg2 ;
-(void)_updateLocalReadReceiptValueWithGlobalValue:(BOOL)arg1 ;
-(double)_messageRetryTimeout;
-(unsigned long long)_failuresForID:(id)arg1 ;
-(unsigned long long)_maxFailuresAllowed;
-(id)_URIsFromHandles:(id)arg1 ;
-(BOOL)_shouldAdjustTimestampOfResentMessages;
-(void)_incrementDecryptionFailureForID:(id)arg1 ;
-(void)_reAttemptMessageDeliveryForGUID:(id)arg1 toIdentifier:(id)arg2 fromIdentifier:(id)arg3 fromIDSID:(id)arg4 isReflection:(BOOL)arg5 shouldShowError:(BOOL)arg6 cacheFlushError:(BOOL)arg7 imdAccount:(id)arg8 ;
-(void)sendDeliveryReceiptForMessageID:(id)arg1 toID:(id)arg2 deliveryContext:(id)arg3 needsDeliveryReceipt:(id)arg4 callerID:(id)arg5 account:(id)arg6 ;
-(void)forwardDeliveryReceiptForMessageID:(id)arg1 withAccount:(id)arg2 callerURI:(id)arg3 ;
-(void)handler:(id)arg1 messageIDSaved:(id)arg2 ofType:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 groupContext:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 description:(id)arg3 ;
-(void)_checkGlobalReadReceiptValueAndUpdateIfNeeded:(id)arg1 ;
-(void)_updateChatProperties:(id)arg1 withProperties:(id)arg2 ;
-(BOOL)isDefaultPairedDeviceToken:(id)arg1 ;
-(BOOL)_isRegisteredURI:(id)arg1 ;
-(BOOL)_messageCheckpointingEnabled;
-(id)getMessageDeliveryController;
-(void)_sendMessageCheckpointIfNecessary:(long long)arg1 guid:(id)arg2 wantsCheckpointing:(BOOL)arg3 ;
-(BOOL)_isFromLinkedID:(id)arg1 fromID:(id)arg2 ;
-(BOOL)_originalTimestampWithinAcceptableWindow:(id)arg1 timestamp:(id)arg2 ;
-(BOOL)_sendCertifiedDeliveryReceiptIfPossible:(id)arg1 messageContext:(id)arg2 guid:(id)arg3 messageWasStored:(BOOL)arg4 needsDeliveryReceipt:(BOOL)arg5 deliveryContext:(id)arg6 ;
-(BOOL)_shouldIgnoreMessageFromSender:(id)arg1 balloonBID:(id)arg2 fromMe:(BOOL)arg3 ;
-(BOOL)_isWhitelistedUnencryptedSender:(id)arg1 ;
-(unsigned long long)_computeFlagsForIncomingMessage:(unsigned long long)arg1 isFromMe:(BOOL)arg2 unfinished:(BOOL)arg3 isAudioMessage:(BOOL)arg4 isExpirable:(BOOL)arg5 messageSource:(unsigned long long)arg6 participants:(id)arg7 ;
-(void)_updateTransfersForAttributionInfoArray:(id)arg1 message:(id)arg2 ;
-(void)_handleNicknameReceived:(id)arg1 fromIdentifier:(id)arg2 isEncrypted:(BOOL)arg3 withMessageItem:(id)arg4 ;
-(void)_addItemToRecentsIfApplicable:(id)arg1 ;
-(BOOL)_shouldBlackholeGroupChatWithParticipants:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 account:(id)arg4 ;
-(id)storeBreadcrumbAndSetConsumedPayloadsForNewMessageItemIfNecessary:(id)arg1 inChatWithIdentifier:(id)arg2 ;
-(void)_fixParticipantsForChat:(id)arg1 ;
-(void)_handleMessageSentToSelf:(id)arg1 chatIdentifier:(id)arg2 style:(unsigned char)arg3 isLocal:(BOOL)arg4 account:(id)arg5 ;
-(void)_autoReportChatAsUnknown:(id)arg1 chatIsNew:(BOOL)arg2 ;
-(BOOL)_shouldOptimizedDeliveryRecieptForConversation:(id)arg1 withMessageTimeStamp:(id)arg2 ;
-(void)_nicknameFetchCompletedMessage:(id)arg1 synchronous:(BOOL)arg2 isEncrypted:(BOOL)arg3 profile:(id)arg4 nickNameWasInCache:(BOOL)arg5 nickNameDownloadError:(id)arg6 ;
-(void)_handleDeleteCommandWithMessageDictionary:(id)arg1 ;
-(id)callerURIUsingCalleeURI:(id)arg1 ;
-(id)_idsServiceForIDSAccount:(id)arg1 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 joinProperties:(id)arg6 ;
-(double)_richLinkDelayTimeInterval;
-(void)_flushQueuedMessageWrapperBlocks;
-(void)_stageMessageWrapperBlock:(id)arg1 ;
-(void)_engroupForChat:(id)arg1 idsAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_richLinkPendSendingWithGUID:(id)arg1 ;
-(id)_messageDictionaryToReflectWithDeliveryReceipt:(id)arg1 ;
-(void)_setWeeklyFailureResetTimer;
-(void)_resetFailureRetries;
-(BOOL)_ckAssetDownloadCanFallBackToMMCSForTransfer:(id)arg1 ;
-(void)_resetTransferToTapDownloadState:(id)arg1 ;
-(BOOL)_transferIsValidForServiceSession:(id)arg1 ;
-(id)callerURIForMessageServiceType:(unsigned)arg1 ;
-(unsigned)messageServiceTypeForURI:(id)arg1 ;
-(id)bizIDSAccountFromMadridIDSAccount:(id)arg1 ;
-(id)fallBackBizIDSAccount;
-(void)handler:(id)arg1 incomingMessage:(id)arg2 originalEncryptionType:(id)arg3 messageID:(id)arg4 toIdentifier:(id)arg5 fromIdentifier:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 incomingEngroup:(id)arg10 needsDeliveryReceipt:(id)arg11 deliveryContext:(id)arg12 storageContext:(id)arg13 messageContext:(id)arg14 isBeingReplayed:(BOOL)arg15 mergeID:(id)arg16 wantsCheckpointing:(BOOL)arg17 ;
-(void)handler:(id)arg1 messageIDDelivered:(id)arg2 toIdentifier:(id)arg3 status:(id)arg4 deliveryContext:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 messageIDReflectedDelivered:(id)arg2 incomingMessage:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 status:(id)arg6 deliveryContext:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 ;
-(void)handler:(id)arg1 messageIDRead:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 updateAttachments:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 fileTransferUpdates:(id)arg11 ;
-(void)handler:(id)arg1 messageIDPlayed:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 receivedError:(id)arg2 forMessageID:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11 additionalInfo:(id)arg12 shouldShowPeerErrors:(BOOL)arg13 ;
-(void)handler:(id)arg1 genericNotification:(id)arg2 incomingMessage:(id)arg3 userInfo:(id)arg4 toIdentifier:(id)arg5 fromIdentifier:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 ;
-(void)handler:(id)arg1 nicknameInfoReceived:(id)arg2 userInfo:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11 ;
-(void)handler:(id)arg1 deleteCommand:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 locationShareInfo:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10 ;
-(void)handler:(id)arg1 groupMessageCommand:(id)arg2 encryptedGroupCommand:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11 ;
-(void)handler:(id)arg1 bubblePayloadData:(id)arg2 forMessageID:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11 ;
-(void)handler:(id)arg1 remoteFileRequest:(id)arg2 ;
-(void)handler:(id)arg1 remoteFileResponse:(id)arg2 ;
-(void)handler:(id)arg1 payloadDataRequest:(id)arg2 ;
-(void)handler:(id)arg1 payloadDataResponse:(id)arg2 ;
-(void)messageDeliveryController:(id)arg1 service:(id)arg2 didFlushCacheForRemoteURI:(id)arg3 fromURI:(id)arg4 guid:(id)arg5 ;
-(void)messageDeliveryController:(id)arg1 serverUpdatedTimestampMessage:(id)arg2 ;
-(void)_updateKeepMessagesPrefWithNumberOfDays:(long long)arg1 verison:(long long)arg2 ;
-(void)_UpdateLastAddressedSIMIDForOtherServicesIfNeededWithChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)_forwardP2PGroupCommand:(id)arg1 fromPerson:(id)arg2 toPerson:(id)arg3 toGroup:(id)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4 ;
-(id)pendingSendBlockQueue;
-(void)_sendHighResolutionImagesForMessage:(id)arg1 fromID:(id)arg2 fromAccount:(id)arg3 toURIs:(id)arg4 toChat:(id)arg5 ;
-(id)getMessageGroupController;
-(id)getMessageAttachmentController;
-(id)getStickerRefreshDeliveryController;
-(id)getMessagePushHandlers;
-(void)setMessagePushHandlers:(id)arg1 ;
@end

