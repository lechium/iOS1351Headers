//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface XPCTransactionController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_openTransactions;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000050ac
- (void).cxx_destruct;	// IMP=0x0000000100005644
@property(readonly) NSMutableArray *openTransactions; // @synthesize openTransactions=_openTransactions;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)endTransaction:(id)arg1;	// IMP=0x000000010000555c
- (_Bool)isInTransaction;	// IMP=0x0000000100005428
- (id)beginTransactionWithIdentifier:(id)arg1;	// IMP=0x0000000100005228
- (id)init;	// IMP=0x000000010000521c
- (id)_init;	// IMP=0x0000000100005188

@end

