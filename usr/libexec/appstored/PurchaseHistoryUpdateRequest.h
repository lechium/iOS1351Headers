//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PurchaseHistoryUpdateRequestContext;
@protocol PurchaseHistoryBagContract;

@interface PurchaseHistoryUpdateRequest : NSObject
{
    id <PurchaseHistoryBagContract> _bagContract;	// 8 = 0x8
    PurchaseHistoryUpdateRequestContext *_context;	// 16 = 0x10
    NSData *_responseData;	// 24 = 0x18
    unsigned int _status;	// 32 = 0x20
    _Bool _hasRequestedAuth;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000010022c6a0
- (id)_requestURLWithError:(id *)arg1;	// IMP=0x000000010022c420
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010022bd90
- (id)initWithBagContract:(id)arg1 context:(id)arg2;	// IMP=0x000000010022bcec

@end
