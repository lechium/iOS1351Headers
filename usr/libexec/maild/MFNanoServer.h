//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFNanoServerMessageContentLoaderDelegate-Protocol.h"
#import "NNMKSyncProviderDelegate-Protocol.h"

@class MFMailboxUid, MFNanoAccountHandler, MFNanoServerFullMessageLoader, MFNanoServerMessageFetchService, MFNanoServerMessageSender, MFNanoServerMessageUpdater, NNMKSyncProvider, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MFNanoServer : NSObject <NNMKSyncProviderDelegate, MFNanoServerMessageContentLoaderDelegate>
{
    NSObject<OS_dispatch_queue> *_nanoServerQueue;	// 8 = 0x8
    NNMKSyncProvider *_syncProvider;	// 16 = 0x10
    NSMutableDictionary *_messageContentLoadersKeyedByMessageId;	// 24 = 0x18
    MFNanoServerFullMessageLoader *_fullMessageLoader;	// 32 = 0x20
    MFNanoServerMessageUpdater *_messageUpdater;	// 40 = 0x28
    MFNanoServerMessageSender *_messageSender;	// 48 = 0x30
    MFMailboxUid *_mailboxListeningForNotificationsTo;	// 56 = 0x38
    MFNanoAccountHandler *_accountHandler;	// 64 = 0x40
    MFNanoServerMessageFetchService *_messageFetchService;	// 72 = 0x48
    _Bool _waitingForAutoFetchDone;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000b863c
- (void)_fetchForMailboxes:(id)arg1 growFetchWindow:(_Bool)arg2;	// IMP=0x00000001000b8458
- (id)_filteredMessagesArrayFromLibraryMessages:(id)arg1 syncedMailboxes:(id)arg2;	// IMP=0x00000001000b8244
- (id)_filteredMessagesArrayFromLibraryMessages:(id)arg1 syncedMailbox:(id)arg2;	// IMP=0x00000001000b8118
- (id)_libraryMessagesReceivedBefore:(id)arg1 count:(unsigned long long)arg2 inConversationWithId:(id)arg3 protectedDataAvailable:(_Bool *)arg4 limitDateReceived:(id)arg5 syncedMailboxes:(id)arg6;	// IMP=0x00000001000b7f34
- (id)_libraryMessagesReceivedBefore:(id)arg1 count:(unsigned long long)arg2 inConversationWithId:(id)arg3 protectedDataAvailable:(_Bool *)arg4 limitDateReceived:(id)arg5 syncedMailbox:(id)arg6;	// IMP=0x00000001000b7da0
- (id)_messageIdsForNanoMessages:(id)arg1;	// IMP=0x00000001000b7d48
- (void)_loadFullMesssagesForMessageIds:(id)arg1 messagesAlreadyLoadedByMessageId:(id)arg2 libraryMessagesRetrievalBlock:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00000001000b75d8
- (void)_cancelLoadingContentForLibraryMessageId:(id)arg1;	// IMP=0x00000001000b752c
- (void)_loadContentForLibraryMessageId:(id)arg1 highPriority:(_Bool)arg2;	// IMP=0x00000001000b73e8
- (void)messageContentLoaderDidFailLoadingContent:(id)arg1;	// IMP=0x00000001000b7220
- (void)messageContentLoaderDidFinishLoading:(id)arg1;	// IMP=0x00000001000b7094
- (void)messageContentLoader:(id)arg1 receivedImageAttachment:(id)arg2 contentId:(id)arg3 loadedProtected:(_Bool)arg4;	// IMP=0x00000001000b6e24
- (void)messageContentLoader:(id)arg1 receivedMailContent:(id)arg2 forMessage:(id)arg3 loadedProtected:(_Bool)arg4;	// IMP=0x00000001000b6be0
- (void)_handleAutoFetchDone:(id)arg1;	// IMP=0x00000001000b6ad4
- (void)_updateVIPList:(id)arg1 requestContext:(id)arg2;	// IMP=0x00000001000b67b0
- (void)_vipChangedNotification:(id)arg1;	// IMP=0x00000001000b662c
- (void)_messagesCompacted:(id)arg1;	// IMP=0x00000001000b62ac
- (void)_conversationFlagsChanged:(id)arg1;	// IMP=0x00000001000b5c18
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x00000001000b568c
- (void)_messagesAdded:(id)arg1;	// IMP=0x00000001000b53cc
- (void)syncProvider:(id)arg1 didFailAuthenticatingAccount:(id)arg2;	// IMP=0x00000001000b5304
- (void)syncProvider:(id)arg1 didRequestReauthenticationForAccount:(id)arg2;	// IMP=0x00000001000b5284
- (void)syncProvider:(id)arg1 didUpdateWatchAccounts:(id)arg2;	// IMP=0x00000001000b5210
- (void)syncProvider:(id)arg1 didRequestSendComposedMessage:(id)arg2;	// IMP=0x00000001000b4ff4
- (void)syncProvider:(id)arg1 didRequestVIPSenderListWithRequestContext:(id)arg2;	// IMP=0x00000001000b4eb4
- (void)syncProvider:(id)arg1 didRequestFetchForMailboxes:(id)arg2;	// IMP=0x00000001000b4d60
- (void)syncProviderDidRequestFetch:(id)arg1 forConversationId:(id)arg2 mailbox:(id)arg3;	// IMP=0x00000001000b4c5c
- (void)syncProviderDidRequestStopDownloadingAllMessageElements:(id)arg1;	// IMP=0x00000001000b4a8c
- (void)syncProvider:(id)arg1 didRequestStopDownloadingMessageElementsForMessageWithId:(id)arg2;	// IMP=0x00000001000b4908
- (void)syncProvider:(id)arg1 didRequestContentForMessageWithId:(id)arg2 highPriority:(_Bool)arg3;	// IMP=0x00000001000b4834
- (void)syncProvider:(id)arg1 didRequestResendAccountWithId:(id)arg2;	// IMP=0x00000001000b4714
- (void)syncProvider:(id)arg1 didRequestMessagesToSendAsFetchResponseForMessageIds:(id)arg2;	// IMP=0x00000001000b4378
- (void)syncProvider:(id)arg1 didRequestResendMessagesWithIds:(id)arg2;	// IMP=0x00000001000b3fdc
- (void)syncProvider:(id)arg1 didRequestMessagesWithContext:(id)arg2;	// IMP=0x00000001000b3b44
- (void)syncProvider:(id)arg1 didRequestFirstMessages:(unsigned long long)arg2 mailboxes:(id)arg3;	// IMP=0x00000001000b3768
- (void)syncProvider:(id)arg1 didUpdateMessagesStatus:(id)arg2;	// IMP=0x00000001000b36a0
- (void)syncProvider:(id)arg1 didUpdateMailboxSelection:(id)arg2;	// IMP=0x00000001000b35d8
- (void)syncProviderDidRequestAccounts:(id)arg1;	// IMP=0x00000001000b34e8
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b33b0
- (id)nanoBulletinFlagsForMessageFromAccount:(id)arg1 mailboxURLString:(id)arg2 status:(unsigned long long)arg3 dateReceived:(id)arg4;	// IMP=0x00000001000b3214
- (id)watchedMailboxes;	// IMP=0x00000001000b3204
- (void)_addObservers;	// IMP=0x00000001000b3100
- (id)initWithVIPManager:(id)arg1;	// IMP=0x00000001000b2ddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

