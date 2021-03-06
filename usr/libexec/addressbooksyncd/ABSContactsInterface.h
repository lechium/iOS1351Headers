//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, CNSaveRequest, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ABSContactsInterface : NSObject
{
    CNContactStore *_cnStore;	// 8 = 0x8
    CNSaveRequest *_cnSaveRequest;	// 16 = 0x10
    int _inUse;	// 24 = 0x18
    _Bool _inDecrementInUse;	// 28 = 0x1c
    _Bool _didSave;	// 29 = 0x1d
    NSObject<OS_dispatch_queue> *_q;	// 32 = 0x20
    NSMutableArray *_postSaveActions;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001000106f4
- (void).cxx_destruct;	// IMP=0x0000000100011284
- (void)_sendMultisaveFinished;	// IMP=0x0000000100011280
- (void)_sendMultisaveBegin;	// IMP=0x000000010001127c
- (void)sendMultisaveFinished;	// IMP=0x0000000100011270
- (void)sendMultisaveBegin;	// IMP=0x0000000100011264
- (void)registerPostSaveBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001121c
- (void)_decrementInUse;	// IMP=0x0000000100010fe8
- (void)_incrementInUseForMutation:(_Bool)arg1;	// IMP=0x0000000100010f40
- (void)decrementInUse;	// IMP=0x0000000100010ebc
- (void)incrementInUse;	// IMP=0x0000000100010e30
- (void)mutateAssert:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010d98
- (void)mutateAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010c50
- (void)mutateSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010b4c
- (void)accessAssert:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010acc
- (void)accessAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010940
- (void)accessSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010830
- (id)description;	// IMP=0x00000001000107e8
- (id)init;	// IMP=0x0000000100010760

@end

