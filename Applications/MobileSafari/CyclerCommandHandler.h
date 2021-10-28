//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBDatabaseLockAcquisitorDelegate-Protocol.h"
#import "WBSCyclerTestTarget-Protocol.h"

@class NSMutableArray, NSString, WBDatabaseLockAcquisitor, WBSDistributedNotificationObserver, WebBookmarkCollection;

@interface CyclerCommandHandler : NSObject <WBDatabaseLockAcquisitorDelegate, WBSCyclerTestTarget>
{
    WebBookmarkCollection *_bookmarkCollection;	// 8 = 0x8
    NSMutableArray *_blocksAwaitingDatabaseLock;	// 16 = 0x10
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;	// 24 = 0x18
    WBDatabaseLockAcquisitor *_bookmarkDatabaseLockAcquisitor;	// 32 = 0x20
    _Bool _isWaitingToAcquireLock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100015a84
- (_Bool)_isBookmarkSyncEnabled;	// IMP=0x00000001000159c8
- (void)_tryToAcquireDatabaseLockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000158c0
- (id)_cyclerRepresentationOfBookmark:(id)arg1;	// IMP=0x00000001000154ec
- (unsigned long long)_adjustInsertionIndex:(unsigned long long)arg1 forInsertionIntoListWithIdentifier:(int)arg2;	// IMP=0x00000001000153f0
- (_Bool)_isSpecialBookmark:(id)arg1;	// IMP=0x0000000100015390
- (void)_startMonitoringSyncStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014ee8
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(_Bool)arg2;	// IMP=0x0000000100014d14
- (void)syncBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014ad8
- (void)setURL:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001475c
- (void)setTitle:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014404
- (void)moveBookmarkWithIdentifier:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100013f9c
- (void)deleteBookmarkWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013c34
- (void)createBookmarkListWithTitle:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100013800
- (void)createBookmarkWithTitle:(id)arg1 url:(id)arg2 inListWithIdentifier:(id)arg3 atIndex:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100013334
- (void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012dc8
- (void)fetchTopLevelBookmarkList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012cc8
- (id)initWithBookmarkCollection:(id)arg1;	// IMP=0x0000000100012bc4
- (id)init;	// IMP=0x0000000100012bac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
