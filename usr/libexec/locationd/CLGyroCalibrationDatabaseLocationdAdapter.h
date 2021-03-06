//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLGyroCalibrationDatabaseProtocol-Protocol.h"

@class NSString;

@interface CLGyroCalibrationDatabaseLocationdAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x00000001001bbd04
+ (id)getSilo;	// IMP=0x00000001001bbadc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bbab8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cc4ad8
- (int)syncgetNumTemperatures;	// IMP=0x00000001001bbff4
- (_Bool)syncgetWipeDatabase;	// IMP=0x00000001001bbfd0
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bbf88
- (_Bool)syncgetInsertWithBias:(const CDStruct_869f9c67 *)arg1 variance:(const CDStruct_869f9c67 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;	// IMP=0x00000001001bbf34
- (double)syncgetLastMiniCalibration;	// IMP=0x00000001001bbef8
- (_Bool)syncgetSupportsMiniCalibration;	// IMP=0x00000001001bbed4
- (int)syncgetNonFactoryRoundCount;	// IMP=0x00000001001bbeb0
- (_Bool)syncgetBiasFit:(CDStruct_4d1f5584 *)arg1;	// IMP=0x00000001001bbe7c
- (void)startFactoryGYTT;	// IMP=0x00000001001bbe58
- (int)syncgetMaxDynamicTemperature;	// IMP=0x00000001001bbe34
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_869f9c67 *)arg1 slope:(CDStruct_869f9c67 *)arg2 l2Error:(CDStruct_869f9c67 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_869f9c67 *)arg5 deltaSlope:(CDStruct_869f9c67 *)arg6 deltaError:(CDStruct_869f9c67 *)arg7 isDeltaDynamic:(_Bool)arg8;	// IMP=0x00000001001bbd68
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bbcc8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bbc84
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bbc50
- (struct CLGyroCalibrationDatabase *)adaptee;	// IMP=0x00000001001bbc14
- (void)endService;	// IMP=0x00000001001bbbf0
- (void)beginService;	// IMP=0x00000001001bbb98
- (id)init;	// IMP=0x00000001001bbb54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

