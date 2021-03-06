//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAClientController.h"

#import "NSXPCListenerDelegate-Protocol.h"
#import "SFCompanionAdvertiserDelegate-Protocol.h"
#import "UASharedPasteboardAUXProtocol-Protocol.h"
#import "UASharedPasteboardControllProtocol-Protocol.h"
#import "UASharedPasteboardManagerProtocol-Protocol.h"

@class AWDHandoffDidSendLocalPasteboard, AWDHandoffRemotePasteboardWasRequested, NSArray, NSBundle, NSDate, NSMutableSet, NSObject, NSProgress, NSString, NSTimer, NSXPCConnection, NSXPCListener, SFCompanionAdvertiser, UASharedPasteboardInfo, UASharedPasteboardInfoWrapper, UASharedPasteboardInputStreamManager, UASharedPasteboardOutputStreamManager, UCRemotePasteboardGeneration;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, UCStreamCoder;

@interface UASharedPasteboardClientController : UAClientController <UASharedPasteboardManagerProtocol, SFCompanionAdvertiserDelegate, UASharedPasteboardAUXProtocol, UASharedPasteboardControllProtocol, NSXPCListenerDelegate>
{
    _Bool _screenWatcherPresent;	// 8 = 0x8
    _Bool _hasFetchedLocalData;	// 9 = 0x9
    _Bool _advertiseTypes;	// 10 = 0xa
    _Bool _remoteAvalible;	// 11 = 0xb
    _Bool _isUIVisible;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_clientq;	// 16 = 0x10
    NSXPCListener *_xpclistener;	// 24 = 0x18
    NSXPCListener *_auxlistener;	// 32 = 0x20
    NSXPCListener *_controlListener;	// 40 = 0x28
    NSXPCConnection *_auxConnection;	// 48 = 0x30
    NSXPCConnection *_clientConnection;	// 56 = 0x38
    NSXPCConnection *_clientNotificationConnection;	// 64 = 0x40
    NSMutableSet *_controlConnections;	// 72 = 0x48
    UASharedPasteboardInfo *_currentLocalTypes;	// 80 = 0x50
    unsigned long long _currentLocalGeneration;	// 88 = 0x58
    NSTimer *_localTimeout;	// 96 = 0x60
    NSArray *_currentLocalPasteboard;	// 104 = 0x68
    long long _currentLocalPasteboardSize;	// 112 = 0x70
    SFCompanionAdvertiser *_pasteAdvertiser;	// 120 = 0x78
    UCRemotePasteboardGeneration *_remoteGeneration;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_pboardFetchSem;	// 136 = 0x88
    UASharedPasteboardInfoWrapper *_pboardInfoToSend;	// 144 = 0x90
    UASharedPasteboardOutputStreamManager *_outStream;	// 152 = 0x98
    UASharedPasteboardInputStreamManager *_inStream;	// 160 = 0xa0
    NSMutableSet<UCStreamCoder> *_coders;	// 168 = 0xa8
    long long _sendingCoderVersion;	// 176 = 0xb0
    NSProgress *_fetchProgress;	// 184 = 0xb8
    NSTimer *_showUITimer;	// 192 = 0xc0
    NSDate *_dontHideUIBefore;	// 200 = 0xc8
    NSXPCConnection *_osxUIConnection;	// 208 = 0xd0
    struct __CFUserNotification *_notificationRef;	// 216 = 0xd8
    unsigned long long _pasteFetchStartTime;	// 224 = 0xe0
    unsigned long long _localSendStartTime;	// 232 = 0xe8
    unsigned long long _streamOpenStartTime;	// 240 = 0xf0
    unsigned long long _streamXferStartTime;	// 248 = 0xf8
    AWDHandoffRemotePasteboardWasRequested *_pasteInfo;	// 256 = 0x100
    AWDHandoffDidSendLocalPasteboard *_localInfo;	// 264 = 0x108
    NSBundle *_uaBundle;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000010003b4a0
@property(retain) NSBundle *uaBundle; // @synthesize uaBundle=_uaBundle;
@property(retain) AWDHandoffDidSendLocalPasteboard *localInfo; // @synthesize localInfo=_localInfo;
@property(retain) AWDHandoffRemotePasteboardWasRequested *pasteInfo; // @synthesize pasteInfo=_pasteInfo;
@property unsigned long long streamXferStartTime; // @synthesize streamXferStartTime=_streamXferStartTime;
@property unsigned long long streamOpenStartTime; // @synthesize streamOpenStartTime=_streamOpenStartTime;
@property unsigned long long localSendStartTime; // @synthesize localSendStartTime=_localSendStartTime;
@property unsigned long long pasteFetchStartTime; // @synthesize pasteFetchStartTime=_pasteFetchStartTime;
@property struct __CFUserNotification *notificationRef; // @synthesize notificationRef=_notificationRef;
@property(retain) NSXPCConnection *osxUIConnection; // @synthesize osxUIConnection=_osxUIConnection;
@property _Bool isUIVisible; // @synthesize isUIVisible=_isUIVisible;
@property(retain) NSDate *dontHideUIBefore; // @synthesize dontHideUIBefore=_dontHideUIBefore;
@property(retain) NSTimer *showUITimer; // @synthesize showUITimer=_showUITimer;
@property(retain) NSProgress *fetchProgress; // @synthesize fetchProgress=_fetchProgress;
@property long long sendingCoderVersion; // @synthesize sendingCoderVersion=_sendingCoderVersion;
@property(retain) NSMutableSet<UCStreamCoder> *coders; // @synthesize coders=_coders;
@property(retain) UASharedPasteboardInputStreamManager *inStream; // @synthesize inStream=_inStream;
@property(retain) UASharedPasteboardOutputStreamManager *outStream; // @synthesize outStream=_outStream;
@property(retain) UASharedPasteboardInfoWrapper *pboardInfoToSend; // @synthesize pboardInfoToSend=_pboardInfoToSend;
@property(retain) NSObject<OS_dispatch_semaphore> *pboardFetchSem; // @synthesize pboardFetchSem=_pboardFetchSem;
@property(retain) UCRemotePasteboardGeneration *remoteGeneration; // @synthesize remoteGeneration=_remoteGeneration;
@property(retain) SFCompanionAdvertiser *pasteAdvertiser; // @synthesize pasteAdvertiser=_pasteAdvertiser;
@property _Bool remoteAvalible; // @synthesize remoteAvalible=_remoteAvalible;
@property _Bool advertiseTypes; // @synthesize advertiseTypes=_advertiseTypes;
@property long long currentLocalPasteboardSize; // @synthesize currentLocalPasteboardSize=_currentLocalPasteboardSize;
@property(retain) NSArray *currentLocalPasteboard; // @synthesize currentLocalPasteboard=_currentLocalPasteboard;
@property _Bool hasFetchedLocalData; // @synthesize hasFetchedLocalData=_hasFetchedLocalData;
@property(retain) NSTimer *localTimeout; // @synthesize localTimeout=_localTimeout;
@property unsigned long long currentLocalGeneration; // @synthesize currentLocalGeneration=_currentLocalGeneration;
@property(retain) UASharedPasteboardInfo *currentLocalTypes; // @synthesize currentLocalTypes=_currentLocalTypes;
@property(retain) NSMutableSet *controlConnections; // @synthesize controlConnections=_controlConnections;
@property(retain) NSXPCConnection *clientNotificationConnection; // @synthesize clientNotificationConnection=_clientNotificationConnection;
@property(retain) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain) NSXPCConnection *auxConnection; // @synthesize auxConnection=_auxConnection;
@property(retain) NSXPCListener *controlListener; // @synthesize controlListener=_controlListener;
@property(retain) NSXPCListener *auxlistener; // @synthesize auxlistener=_auxlistener;
@property(retain) NSXPCListener *xpclistener; // @synthesize xpclistener=_xpclistener;
@property(retain) NSObject<OS_dispatch_queue> *clientq; // @synthesize clientq=_clientq;
- (id)localPBStatus;	// IMP=0x000000010003abc8
- (id)statusString;	// IMP=0x000000010003abbc
- (void)hideProgressUI:(_Bool)arg1;	// IMP=0x000000010003a7d8
- (void)showProgressUI:(id)arg1;	// IMP=0x0000000100039ccc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100039020
- (void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x00000001000384a8
- (void)startServiceForPasteVersion:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000367f8
- (void)getLocalPasteboardInfoData:(CDUnknownBlockType)arg1;	// IMP=0x000000010003667c
- (void)setLocalPasteboardReflection:(_Bool)arg1;	// IMP=0x0000000100036670
- (void)receivePasteboardStreamData:(id)arg1 version:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100034144
- (void)fetchRemotePasteboardForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032460
- (void)fetchRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000320e0
- (void)removeLocalPasteboardFromAdvertisers:(id)arg1;	// IMP=0x0000000100031fe0
- (void)clearLocalPasteboardTypes:(id)arg1;	// IMP=0x0000000100031d1c
- (void)clearLocalPasteboardInformation;	// IMP=0x0000000100031c48
- (void)localPasteboardTypesDidChange:(id)arg1 forGeneration:(unsigned long long)arg2;	// IMP=0x0000000100031454
- (void)fetchRemotePasteboardStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000001000313e0
- (void)setReturnPasteboardDataEarlyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000312c8
- (void)setRemotePasteboardAvalibility:(_Bool)arg1 withDataRequester:(id)arg2;	// IMP=0x0000000100030f08
- (id)currentPasteboardActivityInfo;	// IMP=0x0000000100030c3c
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x0000000100030aec
- (id)items;	// IMP=0x0000000100030ae0
- (void)startConnection:(int)arg1;	// IMP=0x0000000100030a34
@property(getter=isScreenWatcherPresent) _Bool screenWatcherPresent; // @synthesize screenWatcherPresent=_screenWatcherPresent;
@property _Bool localReflection;
- (id)uuid;	// IMP=0x0000000100030780
- (void)dealloc;	// IMP=0x00000001000306b0
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x000000010002ffa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

