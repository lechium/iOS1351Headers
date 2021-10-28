//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDNotificationManager : NSObject <UNUserNotificationCenterDelegate>
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    _Bool _homePodNotifGranted;	// 32 = 0x20
    NSMutableDictionary *_homePodRequests;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
    NSMutableDictionary *_tvKeyboardRequests;	// 56 = 0x38
    UNUserNotificationCenter *_tvNotifCenter;	// 64 = 0x40
    _Bool _tvNotifGranted;	// 72 = 0x48
    NSMutableDictionary *_watchKeyboardRequests;	// 80 = 0x50
    UNUserNotificationCenter *_watchNotifCenter;	// 88 = 0x58
    _Bool _watchNotifGranted;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 104 = 0x68
}

+ (id)sharedManager;	// IMP=0x0000000100198574
- (void).cxx_destruct;	// IMP=0x00000001001a04b4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x00000001001a03b0
- (void)testWatchKeyboard;	// IMP=0x00000001001a02d4
- (void)testKeyboardUpdate;	// IMP=0x00000001001a0200
- (void)testKeyboardRemove;	// IMP=0x00000001001a0124
- (void)testKeyboardPostAutoFill;	// IMP=0x00000001001a0030
- (void)testKeyboardPost;	// IMP=0x000000010019ff50
- (void)testHandoffPost;	// IMP=0x000000010019fd80
- (void)testAutoFillRemove;	// IMP=0x000000010019fca4
- (void)testAutofillPost;	// IMP=0x000000010019fbc8
- (void)testPostBasic;	// IMP=0x000000010019fa68
- (void)testPost:(id)arg1;	// IMP=0x000000010019f86c
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019f37c
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019ee58
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x000000010019e9d4
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x000000010019e8f8
- (void)_homePodHandoffRemoveAll;	// IMP=0x000000010019e854
- (void)homePodHandoffRemoveAll;	// IMP=0x000000010019e7ec
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x000000010019e5a4
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x000000010019e4f8
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x000000010019e33c
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x000000010019e260
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x000000010019dd24
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019dc74
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x000000010019d5dc
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x000000010019d500
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x000000010019d08c
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x000000010019cfb0
- (void)_watchKeyboardRemoveAll;	// IMP=0x000000010019cf20
- (void)watchKeyboardRemoveAll;	// IMP=0x000000010019ceb8
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x000000010019cd24
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x000000010019cc8c
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x000000010019caf8
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x000000010019ca60
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x000000010019c760
- (void)_tvAutoFillRemoveAll;	// IMP=0x000000010019c6bc
- (void)tvAutoFillRemoveAll;	// IMP=0x000000010019c654
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x000000010019c4c0
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x000000010019c428
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x000000010019c06c
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x000000010019bfd4
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_tvKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x000000010019b8c0
- (void)tvKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x000000010019b7e4
- (void)_tvKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x000000010019b370
- (void)tvKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x000000010019b294
- (void)_tvKeyboardRemoveAll;	// IMP=0x000000010019b204
- (void)tvKeyboardRemoveAll;	// IMP=0x000000010019b19c
- (void)_tvKeyboardRemove:(id)arg1;	// IMP=0x000000010019b008
- (void)tvKeyboardRemove:(id)arg1;	// IMP=0x000000010019af70
- (void)_tvKeyboardPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x000000010019adac
- (void)tvKeyboardPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x000000010019ad00
- (id)tvKeyboardContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x000000010019a9e0
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019a374
- (id)attachmentFromURL:(id)arg1;	// IMP=0x000000010019a1d8
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x00000001001999a8
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010019959c
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100199190
- (void)_tvEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100198d78
- (void)_update;	// IMP=0x0000000100198cfc
- (void)prefsChanged;	// IMP=0x0000000100198cf0
- (void)_invalidate;	// IMP=0x0000000100198c90
- (void)invalidate;	// IMP=0x0000000100198c28
- (void)_activate;	// IMP=0x0000000100198b8c
- (void)activate;	// IMP=0x0000000100198b24
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00000001001985e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
