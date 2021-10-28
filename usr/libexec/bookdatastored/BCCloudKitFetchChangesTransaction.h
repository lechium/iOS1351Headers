//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BCCloudKitTransaction.h"

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction
{
    BCCloudKitController *_cloudKitController;	// 8 = 0x8
}

+ (id)transactionNameForEntityName:(id)arg1;	// IMP=0x0000000100025950
- (void).cxx_destruct;	// IMP=0x0000000100025adc
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
- (double)transactionLifetimeTimout;	// IMP=0x0000000100025aa0
- (double)coalescingDelay;	// IMP=0x0000000100025a98
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025964
- (id)initWithCloudKitController:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000258c4

@end
