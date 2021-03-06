//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IPodLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    ISOperationQueue *_operationQueue;	// 16 = 0x10
    NSMutableArray *_scheduledItems;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_scheduledItemTimer;	// 32 = 0x20
}

+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001000ea8a4
+ (void)deleteIPodPurchaseWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000ea858
+ (id)deviceIPodLibrary;	// IMP=0x00000001000e9c94
- (void)_setDownloadPropertiesForTrack:(id)arg1 usingLibraryItem:(id)arg2;	// IMP=0x00000001000ec3b0
- (_Bool)_removeDownloadWithIdentifier:(long long)arg1 canceled:(_Bool)arg2 inLibrary:(id)arg3;	// IMP=0x00000001000ebe98
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ebdcc
- (void)_commitScheduledLibraryItems;	// IMP=0x00000001000ebbcc
- (_Bool)_addLibraryItems:(id)arg1 toMusicLibrary:(id)arg2 itemPids:(long long *)arg3 error:(id *)arg4;	// IMP=0x00000001000ea8c8
- (void)setAppleIdentifier:(id)arg1 forAccountIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000ea7b8
- (void)scheduleLibraryItems:(id)arg1;	// IMP=0x00000001000ea488
- (void)scheduleLibraryItem:(id)arg1;	// IMP=0x00000001000ea424
- (void)removeDownloadWithIdentifier:(long long)arg1 canceled:(_Bool)arg2;	// IMP=0x00000001000ea320
- (void)removeDownloadsWithIdentifiers:(id)arg1 canceled:(_Bool)arg2;	// IMP=0x00000001000ea0f0
- (void)deleteAllOTATracks;	// IMP=0x00000001000e9ebc
- (void)commitScheduledLibraryItems;	// IMP=0x00000001000e9e54
- (_Bool)addLibraryItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000e9df8
- (long long)addLibraryItem:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000e9d40
- (void)dealloc;	// IMP=0x00000001000e9be8
- (id)init;	// IMP=0x00000001000e9b08

@end

