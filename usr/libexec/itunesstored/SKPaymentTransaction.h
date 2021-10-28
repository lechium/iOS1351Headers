//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;

@interface SKPaymentTransaction : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000476d0
- (id)copyXPCEncoding;	// IMP=0x0000000100047334
- (id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1;	// IMP=0x0000000100047188
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000001000469b8
- (_Bool)mergeWithServerTransaction:(id)arg1;	// IMP=0x00000001000461cc
- (id)initWithServerTransaction:(id)arg1;	// IMP=0x000000010004616c
@property(readonly, nonatomic) NSString *_transactionIdentifier;
- (void)_setTransactionState:(long long)arg1;	// IMP=0x0000000100046154
- (void)_setTransactionReceipt:(id)arg1;	// IMP=0x00000001000460d8
- (void)_setTransactionIdentifier:(id)arg1;	// IMP=0x000000010004605c
- (void)_setTransactionDate:(id)arg1;	// IMP=0x0000000100045ff0
- (void)_setTemporaryIdentifier:(id)arg1;	// IMP=0x0000000100045f74
- (void)_setOriginalTransaction:(id)arg1;	// IMP=0x0000000100045f08
- (void)_setError:(id)arg1;	// IMP=0x0000000100045e9c
- (void)_setDownloads:(id)arg1;	// IMP=0x0000000100045ddc
- (_Bool)mergeWithTransaction:(id)arg1;	// IMP=0x0000000100045c44
@property(readonly, nonatomic) NSString *matchingIdentifier;
- (_Bool)canMergeWithTransaction:(id)arg1;	// IMP=0x0000000100045a84
- (id)UUID;	// IMP=0x0000000100045a78
@property(readonly, nonatomic) long long transactionState;
@property(readonly, nonatomic) NSData *transactionReceipt;
@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSDate *transactionDate;
@property(readonly, nonatomic) SKPayment *payment;
@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *downloads;
- (id)initWithPayment:(id)arg1;	// IMP=0x000000010004598c
- (id)init;	// IMP=0x0000000100045928

@end
