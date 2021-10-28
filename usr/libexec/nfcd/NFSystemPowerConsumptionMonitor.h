//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMSClientDescription, NFPowerTrackingConsumer, NSMutableArray, PPMClient;

@interface NFSystemPowerConsumptionMonitor : NSObject
{
    PPMClient *_ppmSharedInstance;	// 8 = 0x8
    CPMSClientDescription *_cpmsdescription;	// 16 = 0x10
    NFPowerTrackingConsumer *_powerConsumer;	// 24 = 0x18
    NSMutableArray *_delegates;	// 32 = 0x20
    _Bool _readerStarted;	// 40 = 0x28
    _Bool _paymentStarted;	// 41 = 0x29
}

+ (id)sharedSystemPowerMonitor;	// IMP=0x00000001000c32b0
- (void)_handleUpdatedBudgetValue:(id)arg1;	// IMP=0x00000001000c5554
- (_Bool)willStartReaderActivityWithDelegate:(id)arg1;	// IMP=0x00000001000c537c
- (_Bool)willStartReaderActivityForCPMS;	// IMP=0x00000001000c50c0
- (_Bool)willStartReaderActivityForCoreDuet;	// IMP=0x00000001000c4d58
- (_Bool)didEndReaderActivityWithDelegate:(id)arg1;	// IMP=0x00000001000c4ba4
- (_Bool)didEndReaderActivityForCPMS;	// IMP=0x00000001000c48e8
- (_Bool)didEndReaderActivityForCoreDuet;	// IMP=0x00000001000c4778
- (_Bool)willStartPaymentActivity;	// IMP=0x00000001000c4714
- (_Bool)willStartPaymentActivityForCPMS;	// IMP=0x00000001000c4448
- (_Bool)willStartPaymentActivityForCoreDuet;	// IMP=0x00000001000c40e0
- (_Bool)didEndPaymentActivity;	// IMP=0x00000001000c407c
- (_Bool)didEndPaymentActivityForCPMS;	// IMP=0x00000001000c3dc0
- (_Bool)didEndPaymentActivityForCoreDuet;	// IMP=0x00000001000c3c50
- (void)setConsumer:(id)arg1;	// IMP=0x00000001000c3be8
- (_Bool)setupCPMS;	// IMP=0x00000001000c36fc
- (void)dealloc;	// IMP=0x00000001000c36a4
- (id)init;	// IMP=0x00000001000c3614
- (_Bool)supportsCPMS;	// IMP=0x00000001000c35f0
- (_Bool)initCoreDuet;	// IMP=0x00000001000c3314

@end
