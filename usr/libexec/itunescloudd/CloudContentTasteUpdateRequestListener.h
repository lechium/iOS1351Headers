//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSDate, NSMutableDictionary, NSOperationQueue, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudContentTasteUpdateRequestListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSOperationQueue *_updateContentTasteOperationQueue;	// 32 = 0x20
    NSMutableDictionary *_contentTasteItemsToRetry;	// 40 = 0x28
    _Bool _musicAppIsInstalled;	// 48 = 0x30
    _Bool _havePendingRetryOperation;	// 49 = 0x31
    int _backOffIndex;	// 52 = 0x34
    NSDate *_responseExpirationDate;	// 56 = 0x38
}

+ (id)sharedContentTasteRequestListener;	// IMP=0x00000001000d3d4c
- (void).cxx_destruct;	// IMP=0x00000001000d750c
- (void)_handleContentTasteUpdateOperationFinishedWithError:(id)arg1 forRequestItems:(id)arg2;	// IMP=0x00000001000d72dc
- (void)_resetStateAndWaitForPendingOperationsToFinish:(_Bool)arg1;	// IMP=0x00000001000d7214
- (void)_scheduleNextContentTasteSyncOperation;	// IMP=0x00000001000d6a00
- (void)_scheduleContentTasteUpdateOperationForFailedItems;	// IMP=0x00000001000d6270
- (_Bool)_isRetryableError:(id)arg1;	// IMP=0x00000001000d6174
- (void)_updateContentTasteForItems:(id)arg1 invalidatingLocalCache:(_Bool)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d5a4c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000d5674
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 configuration:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d5404
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d5398
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d4e40
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000d48ec
- (void)cancelPendingContentTasteOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d4708
- (void)updateContentTasteForMediaItems;	// IMP=0x00000001000d4508
- (void)handleContentTasteChangedNotification;	// IMP=0x00000001000d4444
- (void)handleMusicAppRemoved;	// IMP=0x00000001000d42d0
- (void)handleMusicAppInstalled;	// IMP=0x00000001000d4104
- (void)stop;	// IMP=0x00000001000d4048
- (void)start;	// IMP=0x00000001000d3f8c
- (id)_init;	// IMP=0x00000001000d3e14
- (id)init;	// IMP=0x00000001000d3dc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
