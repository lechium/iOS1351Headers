//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@class NSObject;
@protocol OS_os_transaction;

@interface DMDActivityTransactionOperation : DMDTaskOperation
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x0000000100013688
+ (id)whitelistedClassesForRequest;	// IMP=0x000000010001364c
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100013514
- (void).cxx_destruct;	// IMP=0x0000000100013840
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)runWithRequest:(id)arg1;	// IMP=0x00000001000137a4
- (void)endOperationIfNeeded;	// IMP=0x000000010001375c
- (void)cancel;	// IMP=0x00000001000136fc
- (_Bool)runOnMainThread;	// IMP=0x00000001000136f4
- (_Bool)runConcurrently;	// IMP=0x000000010001350c

@end
