//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface RCSXPCTransactionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMapTable *_openTransactions;	// 16 = 0x10
    _Bool _inTransaction;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000884c
- (void).cxx_destruct;	// IMP=0x000000010000902c
- (void)_onQueueUpdateInternalTransactionState;	// IMP=0x0000000100008f30
- (id)activeTransactions;	// IMP=0x0000000100008de0
- (_Bool)isTransactionActive:(id)arg1;	// IMP=0x0000000100008cac
- (void)removeActiveTransaction:(id)arg1;	// IMP=0x0000000100008b20
- (void)addActiveTransaction:(id)arg1;	// IMP=0x00000001000089ec
@property(readonly, nonatomic, getter=isInTransaction) _Bool inTransaction;
- (id)init;	// IMP=0x0000000100008908

@end

