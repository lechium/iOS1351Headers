//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDFaceTimeProviderDelegateManagerDelegate-Protocol.h"
#import "CXProviderDelegatePrivate-Protocol.h"

@class CSDConversationManager, CSDConversationManagerXPCServer, CSDFaceTimeConversationProviderDelegate, CSDFaceTimeIDSProviderDelegate, CSDFaceTimeIMAVProviderDelegate, CXProvider, NSString, TUContactsDataProvider;
@protocol OS_dispatch_queue;

@interface CSDFaceTimeProviderDelegate : NSObject <CSDFaceTimeProviderDelegateManagerDelegate, CXProviderDelegatePrivate>
{
    TUContactsDataProvider *_contactsDataProvider;	// 8 = 0x8
    CSDConversationManager *_conversationManager;	// 16 = 0x10
    CSDConversationManagerXPCServer *_conversationManagerXPCServer;	// 24 = 0x18
    CSDFaceTimeIDSProviderDelegate *_faceTimeIDSProviderDelegate;	// 32 = 0x20
    CSDFaceTimeIMAVProviderDelegate *_faceTimeIMAVProviderDelegate;	// 40 = 0x28
    CSDFaceTimeConversationProviderDelegate *_faceTimeConversationProviderDelegate;	// 48 = 0x30
    CXProvider *_provider;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010008cccc
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) CSDFaceTimeConversationProviderDelegate *faceTimeConversationProviderDelegate; // @synthesize faceTimeConversationProviderDelegate=_faceTimeConversationProviderDelegate;
@property(readonly, nonatomic) CSDFaceTimeIMAVProviderDelegate *faceTimeIMAVProviderDelegate; // @synthesize faceTimeIMAVProviderDelegate=_faceTimeIMAVProviderDelegate;
@property(readonly, nonatomic) CSDFaceTimeIDSProviderDelegate *faceTimeIDSProviderDelegate; // @synthesize faceTimeIDSProviderDelegate=_faceTimeIDSProviderDelegate;
@property(readonly, nonatomic) CSDConversationManagerXPCServer *conversationManagerXPCServer; // @synthesize conversationManagerXPCServer=_conversationManagerXPCServer;
@property(readonly, nonatomic) CSDConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) TUContactsDataProvider *contactsDataProvider; // @synthesize contactsDataProvider=_contactsDataProvider;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;	// IMP=0x000000010008cc04
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;	// IMP=0x000000010008cb7c
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;	// IMP=0x000000010008c720
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x000000010008c310
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x000000010008bf00
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x000000010008baf0
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x000000010008b6e0
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x000000010008b2d0
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x000000010008ae8c
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x000000010008aa7c
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x000000010008a594
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;	// IMP=0x0000000100089ef4
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;	// IMP=0x0000000100089e3c
- (void)providerDidReset:(id)arg1;	// IMP=0x0000000100089d44
- (void)providerDidBegin:(id)arg1;	// IMP=0x0000000100089c4c
- (void)providerDelegate:(id)arg1 requestedUpgradeToExistingCallForConversation:(id)arg2 withSessionToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100089a88
- (void)providerDelegate:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100089948
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 endedAtDate:(id)arg3 withReason:(long long)arg4 failureContext:(id)arg5;	// IMP=0x0000000100089660
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;	// IMP=0x000000010008949c
- (void)deferReportingAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x0000000100089384
- (void)updateProviderConfigurationWithSenderIdentities:(id)arg1;	// IMP=0x0000000100089318
- (id)ISOCountryCodeForCallWithUUID:(id)arg1;	// IMP=0x0000000100089298
- (id)providerConfiguration;	// IMP=0x0000000100089100
- (void)dealloc;	// IMP=0x0000000100089094
- (id)initWithCallSource:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100088d98
- (id)init;	// IMP=0x0000000100088cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

