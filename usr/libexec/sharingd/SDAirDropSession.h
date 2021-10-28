//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAirDropClientDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSProgress, NSString, SDAirDropClient;
@protocol OS_os_transaction, SDAirDropSessionDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropSession : NSObject <SDAirDropClientDelegate>
{
    NSMutableArray *_airDropClients;	// 8 = 0x8
    _Bool _allowedWaiting;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    _Bool _conversionActive;	// 32 = 0x20
    _Bool _conversionNotified;	// 33 = 0x21
    _Bool _conversionObserver;	// 34 = 0x22
    NSProgress *_conversionProgress;	// 40 = 0x28
    NSMutableArray *_currentNames;	// 48 = 0x30
    _Bool _hadConversion;	// 56 = 0x38
    NSArray *_items;	// 64 = 0x40
    long long _lastEvent;	// 72 = 0x48
    struct __SFNode *_person;	// 80 = 0x50
    NSProgress *_progress;	// 88 = 0x58
    _Bool _progressObserver;	// 96 = 0x60
    NSMutableDictionary *_properties;	// 104 = 0x68
    SDAirDropClient *_responseClient;	// 112 = 0x70
    NSMutableDictionary *_results;	// 120 = 0x78
    NSString *_rootNodeName;	// 128 = 0x80
    NSDictionary *_sandboxExtensions;	// 136 = 0x88
    NSMutableArray *_sandboxExtensionHandles;	// 144 = 0x90
    NSMutableArray *_siblingNodes;	// 152 = 0x98
    NSProgress *_transferProgress;	// 160 = 0xa0
    NSObject<OS_os_transaction> *_transaction;	// 168 = 0xa8
    int _clientPid;	// 176 = 0xb0
    id <SDAirDropSessionDelegate> _delegate;	// 184 = 0xb8
    CDStruct_4c969caf _auditToken;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000010003575c
@property __weak id <SDAirDropSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property int clientPid; // @synthesize clientPid=_clientPid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100035440
- (void)handleConversionProgress:(id)arg1;	// IMP=0x0000000100035350
- (void)startProgress;	// IMP=0x000000010003515c
- (void)postNotificationForTransferStatus:(long long)arg1 progress:(double)arg2;	// IMP=0x0000000100034f6c
- (void)airDropClient:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x000000010003483c
- (void)removeClientAlerts;	// IMP=0x0000000100034714
- (void)dealloc;	// IMP=0x0000000100034688
- (void)stop;	// IMP=0x00000001000344f4
- (void)addClientForNode:(struct __SFNode *)arg1 shouldPublishProgress:(_Bool)arg2;	// IMP=0x0000000100034268
- (void)serversChanged:(id)arg1;	// IMP=0x0000000100033f90
- (_Bool)send;	// IMP=0x0000000100033e64
- (void)start;	// IMP=0x0000000100033c74
- (void)releaseSandboxExtensions;	// IMP=0x0000000100033b60
- (void)consumeSandboxExtensions;	// IMP=0x0000000100033968
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100033900
- (id)initWithPerson:(struct __SFNode *)arg1 items:(id)arg2 sandboxExtensions:(id)arg3;	// IMP=0x000000010003370c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
