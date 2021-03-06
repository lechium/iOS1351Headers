//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ImageConversionService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface ImageConversionService : NSObject <ImageConversionService, NSXPCListenerDelegate>
{
    long long _pendingRequestCount;	// 8 = 0x8
    NSObject<OS_os_transaction> *_pendingRequestTransaction;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
}

+ (void)run;	// IMP=0x000000010000cb84
- (void).cxx_destruct;	// IMP=0x000000010000ea3c
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) NSObject<OS_os_transaction> *pendingRequestTransaction; // @synthesize pendingRequestTransaction=_pendingRequestTransaction;
@property long long pendingRequestCount; // @synthesize pendingRequestCount=_pendingRequestCount;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000e83c
- (id)urlCollectionForBookmarkDictionaryKey:(id)arg1 inOptions:(id)arg2 removeExistingEmptyFiles:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010000e528
- (_Bool)convertImageWithOptions:(id)arg1 requestTracker:(id)arg2 outputData:(id *)arg3 outputImageInfo:(id *)arg4 error:(id *)arg5;	// IMP=0x000000010000d444
- (void)decrementPendingRequestCountWithRequestIdentifier:(id)arg1;	// IMP=0x000000010000d1c8
- (void)incrementPendingRequestCountWithRequestIdentifier:(id)arg1;	// IMP=0x000000010000cec0
- (void)convertImageWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cc70
- (void)run;	// IMP=0x000000010000cbb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

