//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class PurchaseInfo;

@interface PreparePurchaseTask : Task
{
    PurchaseInfo *_purchaseInfo;	// 8 = 0x8
}

+ (void)_setAccountIDForApp:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x00000001001f0e20
+ (id)_getInstalledAppUpdatePurchaseInfo:(id)arg1;	// IMP=0x00000001001f07f4
- (void).cxx_destruct;	// IMP=0x00000001001f160c
@property(readonly) PurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
- (void)main;	// IMP=0x00000001001eff68
- (void)completeWithError:(id)arg1;	// IMP=0x00000001001efea8
- (id)initWithPurchaseInfo:(id)arg1;	// IMP=0x00000001001efe28

@end
