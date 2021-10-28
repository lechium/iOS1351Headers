//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLTelephonyServiceProtocol-Protocol.h"

@class NSString;

@interface CLTelephonyServiceAdapter : CLNotifierServiceAdapter <CLTelephonyServiceProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010016d60c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010016d5e8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cc31dc
+ (_Bool)isSupported;	// IMP=0x000000010017180c
- (void)sendNotificationToClients:(id)arg1 notificationData:(id)arg2;	// IMP=0x00000001001717d0
- (_Bool)syncgetServingCdmaCell:(struct CdmaCell *)arg1;	// IMP=0x0000000100171414
- (_Bool)syncgetServingGsmCell:(struct Cell *)arg1;	// IMP=0x000000010017137c
- (_Bool)syncgetServingCells:(struct vector<CLCell, std::__1::allocator<CLCell>> *)arg1 addNeighborCells:(_Bool)arg2;	// IMP=0x0000000100171264
- (void)dumpLogWithReason:(id)arg1;	// IMP=0x0000000100170f94
- (void)resetModemWithReason:(id)arg1;	// IMP=0x0000000100170bd8
- (_Bool)syncgetSignalStrength:(int *)arg1;	// IMP=0x000000010017094c
- (_Bool)syncgetCopyPhoneNumber:(id *)arg1;	// IMP=0x0000000100170610
- (_Bool)syncgetCopyIMSI:(id *)arg1;	// IMP=0x00000001001702e4
- (_Bool)syncgetCopyServingProviderFromCarrierBundle:(id *)arg1;	// IMP=0x000000010016ffb8
- (_Bool)syncgetCopyServingProvider:(id *)arg1;	// IMP=0x000000010016ff10
- (_Bool)syncgetCopyServingOperatorAbbreviated:(id *)arg1;	// IMP=0x000000010016fe68
- (_Bool)syncgetCopyServingOperator:(id *)arg1;	// IMP=0x000000010016fb3c
- (_Bool)syncgetRefreshCellMonitor;	// IMP=0x000000010016fa44
- (_Bool)syncgetActiveEmergencyCall:(_Bool *)arg1;	// IMP=0x000000010016f6c8
- (_Bool)syncgetActiveCall:(_Bool *)arg1;	// IMP=0x000000010016f684
- (_Bool)syncgetLastKnownServingMCC:(int *)arg1;	// IMP=0x000000010016f650
- (_Bool)syncgetLastKnownSubscriberMCC:(int *)arg1;	// IMP=0x000000010016f3a0
- (int)syncgetCellTransmitStatus;	// IMP=0x000000010016f380
- (int)syncgetRegistrationStatus;	// IMP=0x000000010016f254
- (void)fetchSignalStrengthMeasurementsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010016f218
- (int)syncgetRadioAccessTechnology;	// IMP=0x000000010016f1c8
- (_Bool)syncgetIsRegisteredOnCell;	// IMP=0x000000010016f1a4
- (_Bool)syncgetDetectedCells:(struct vector<CLCell, std::__1::allocator<CLCell>> *)arg1;	// IMP=0x000000010016e5f8
- (void)queryForCtclNotification:(const struct __CFString *)arg1;	// IMP=0x000000010016e57c
- (void)fetchUmtsApnWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010016e54c
- (id)syncgetRegistrationInfoDictionary;	// IMP=0x000000010016e3f4
- (_Bool)syncgetUplinkFrequency:(float *)arg1 andBandwidth:(float *)arg2;	// IMP=0x000000010016e3b4
- (void)disableWakeOnCellChange;	// IMP=0x000000010016e2b8
- (void)enableWakeOnCellChange;	// IMP=0x000000010016e1a4
- (void)assertCommCenter:(int)arg1 with:(int)arg2;	// IMP=0x000000010016dff8
- (_Bool)syncgetCampOnlyState;	// IMP=0x000000010016dccc
- (void)requestCamping:(_Bool)arg1;	// IMP=0x000000010016dba0
- (void)fetchActiveOrHeldWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010016d8e8
- (void)fetchIsCellAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010016d8a8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010016d86c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010016d828
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010016d7f4
- (struct CLTelephonyService *)adaptee;	// IMP=0x000000010016d7b8
- (void)endService;	// IMP=0x000000010016d794
- (void)beginService;	// IMP=0x000000010016d6c8
- (id)init;	// IMP=0x000000010016d684

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
