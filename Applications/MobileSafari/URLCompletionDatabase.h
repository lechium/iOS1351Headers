//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSURLCompletionDatabase.h>

#import "WBSURLCompletionDataSource-Protocol.h"

@class CloudTabStore, NSArray, NSCache, NSObject, NSString;
@protocol OS_dispatch_queue, WBBookmarkProvider;

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource>
{
    CloudTabStore *_cloudTabStore;	// 8 = 0x8
    NSArray *_cloudDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cloudTabsAccessQueue;	// 24 = 0x18
    NSCache *_bookmarksCache;	// 32 = 0x20
    id <WBBookmarkProvider> _bookmarkProvider;	// 40 = 0x28
    int _searchableCollectionsMask;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100126be8
@property(nonatomic) int searchableCollectionsMask; // @synthesize searchableCollectionsMask=_searchableCollectionsMask;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(_Bool)arg3;	// IMP=0x0000000100126af4
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100125b80
- (void)_updateCloudDevices:(id)arg1;	// IMP=0x0000000100125a98
- (void)clearBookmarksCache;	// IMP=0x0000000100125a80
- (void)dealloc;	// IMP=0x00000001001259c4
- (id)initWithCloudTabStore:(id)arg1 searchableCollectionsMask:(int)arg2 bookmarkProvider:(id)arg3;	// IMP=0x00000001001257d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
