//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, WCM_WiFiController, WRM_CTService, WRM_IDSP2PController, WRM_IPTelephonyController, WRM_MetricsService, WRM_MotionController, WRM_SCService, WRM_SymptomsService, WRM_WiFiCallingController, WRM_iRATConfig;
@protocol OS_dispatch_queue;

@interface WRM_HandoverManager : NSObject
{
    NSObject<OS_dispatch_queue> *mQueue;	// 8 = 0x8
    WRM_CTService *mCTService;	// 16 = 0x10
    WRM_SCService *mSCService;	// 24 = 0x18
    WRM_IDSP2PController *mIDSP2PController;	// 32 = 0x20
    WCM_WiFiController *mWiFi;	// 40 = 0x28
    WRM_WiFiCallingController *mWiFiCalling;	// 48 = 0x30
    WRM_SymptomsService *mSymtomsService;	// 56 = 0x38
    WRM_iRATConfig *miRATConfig;	// 64 = 0x40
    WRM_MotionController *mMotionController;	// 72 = 0x48
    WRM_IPTelephonyController *mIPTelephonyController;	// 80 = 0x50
    WRM_MetricsService *mMetrics;	// 88 = 0x58
    int mReasons;	// 96 = 0x60
    struct WRMWiFiCallingEnd *wrmWifiCallingEnd;	// 104 = 0x68
    struct WRMMetricsiRATDataRecommendation *mDataLinkPrefMetrics;	// 112 = 0x70
    _Bool deviceAttachedWithCellularNetwork;	// 120 = 0x78
    _Bool deviceRegisteredWithCellularNetwork;	// 121 = 0x79
    NSMutableArray *miRATClientContexts;	// 128 = 0x80
    unsigned long long mActivePolicies;	// 136 = 0x88
    _Bool mWiFiSwitchedOn;	// 144 = 0x90
    NSDate *mStartTime;	// 152 = 0x98
    double prevTimeSinceStart;	// 160 = 0xa0
    NSDate *mAudioEvaluationTimer;	// 168 = 0xa8
    double mTimeSinceAudioEvaluationStarted;	// 176 = 0xb0
    NSDate *mLatteContextStartedTimer;	// 184 = 0xb8
    double mTimeSinceLatteContextStarted;	// 192 = 0xc0
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006e7a8
+ (id)WRM_HandoverManagerSingleton;	// IMP=0x000000010006e658
- (void)createSymptomsService;	// IMP=0x00000001000784b4
- (void)monitorTransportMetrics;	// IMP=0x0000000100078474
- (void)feedAWDCallEndStats;	// IMP=0x0000000100077f88
- (void)submitCallEndMetics;	// IMP=0x0000000100077f24
- (void)submitDataLinkPreferenceMetrics:(int)arg1;	// IMP=0x0000000100077e14
- (void)feedAWDDataLinkPreferenceChange:(int)arg1;	// IMP=0x0000000100077744
- (void)feedAWDDataStatus:(int)arg1;	// IMP=0x0000000100077678
- (void)setIWLANServiceType:(int)arg1;	// IMP=0x00000001000775a4
- (int)getIWLANServiceType;	// IMP=0x0000000100077568
- (void)resetActiveCallTimer;	// IMP=0x0000000100077524
- (void)setPingPongTimerMultipler:(unsigned long long)arg1:(int)arg2:(unsigned long long)arg3;	// IMP=0x000000010007749c
- (void)resetActiveCallEvaluationMetrics;	// IMP=0x0000000100077330
- (void)setHOAlertUI:(_Bool)arg1;	// IMP=0x0000000100077304
- (void)updateHandoverReasonCode:(int)arg1;	// IMP=0x00000001000772d4
- (void)initHandoverReasonCode;	// IMP=0x00000001000772b8
- (void)sendMessage:(int)arg1 withMsg:(id)arg2;	// IMP=0x000000010007723c
- (void)setWiFiLinkDown:(_Bool)arg1;	// IMP=0x0000000100077210
- (_Bool)needWiFiLQM;	// IMP=0x000000010007716c
- (void)registerForSCNotifications;	// IMP=0x00000001000770e8
- (void)registerForCTNotifications;	// IMP=0x0000000100076fdc
- (long long)getRSSIHysteresis;	// IMP=0x0000000100076dac
- (long long)getSNRHysteresis;	// IMP=0x0000000100076b7c
- (_Bool)isWiFiLinkActive;	// IMP=0x0000000100076b5c
- (void)handlePeriodicRTPMetrics:(id)arg1;	// IMP=0x0000000100076864
- (void)handleIPTelephonyMetrics:(id)arg1;	// IMP=0x00000001000765f0
- (void)handleIWLANMetrics:(id)arg1;	// IMP=0x00000001000763e4
- (void)handleSIPMetricsRecevied:(id)arg1;	// IMP=0x0000000100076230
- (void)configureRTPMetricsReporting;	// IMP=0x00000001000761cc
- (void)handleSubscribeStatusUpdate:(id)arg1:(_Bool)arg2;	// IMP=0x0000000100075600
- (void)handleLinkPrefSubscribe:(id)arg1;	// IMP=0x0000000100074b90
- (void)handleCellularLinkQualityUpdate:(id)arg1;	// IMP=0x0000000100074b0c
- (void)handleWiFiStateChaneEvents:(id)arg1;	// IMP=0x00000001000746f8
- (void)handleWiFiLinkQualityUpdate:(id)arg1;	// IMP=0x00000001000745f4
- (void)updateCellularMetricsMovAverage;	// IMP=0x0000000100074598
- (id)getiRATConfigController;	// IMP=0x000000010007457c
- (id)getSymptomsService;	// IMP=0x0000000100074560
- (id)getWiFiCallingController;	// IMP=0x0000000100074544
- (void)setSCService:(id)arg1;	// IMP=0x0000000100074520
- (void)setCTService:(id)arg1;	// IMP=0x00000001000744fc
- (id)getSCService;	// IMP=0x00000001000744e0
- (id)getCTService;	// IMP=0x00000001000744c4
- (id)getMotionController;	// IMP=0x00000001000744a8
- (void)showHOAlertUI:(_Bool)arg1;	// IMP=0x0000000100073d74
- (void)evaluateHandover;	// IMP=0x0000000100071d5c
- (id)getWiFiService;	// IMP=0x0000000100071d20
- (id)getWiFiController;	// IMP=0x0000000100071d04
- (_Bool)doesIRATClientSubscriptionContextExist;	// IMP=0x00000001000719a0
- (int)evaluateLinkNonWiFiPreferred:(unsigned long long)arg1:(unsigned long long)arg2:(_Bool)arg3:(int)arg4:(int)arg5;	// IMP=0x0000000100071680
- (int)evaluateLinkWiFiPreferred:(unsigned long long)arg1:(unsigned long long)arg2:(_Bool)arg3:(int)arg4;	// IMP=0x00000001000713e8
- (int)evaluateLink:(unsigned long long)arg1:(unsigned long long)arg2:(_Bool)arg3:(int)arg4:(int)arg5:(int)arg6;	// IMP=0x0000000100070f90
- (_Bool)isWiFiLinkEvaluationDesired;	// IMP=0x0000000100070e18
- (_Bool)handoverEvaluationRequired;	// IMP=0x0000000100070a34
- (void)handleWiFiConfig;	// IMP=0x0000000100070998
- (void)handleNetworkdConfig;	// IMP=0x000000010007094c
- (void)handleCTConfig;	// IMP=0x0000000100070900
- (void)handleCallKitConfig;	// IMP=0x00000001000708b4
- (void)handleControllerAvailability:(unsigned long long)arg1;	// IMP=0x00000001000707b0
- (void)updateActiveHandoverStatus;	// IMP=0x00000001000702b4
- (_Bool)isEnhancedCTServiceNeeded;	// IMP=0x00000001000701a4
- (_Bool)isActiveHandoverSupported;	// IMP=0x0000000100070180
- (_Bool)enableiRATManager;	// IMP=0x0000000100070164
- (void)handleSessionNotification:(id)arg1;	// IMP=0x000000010006fe50
- (void)handleCommCenterManagerNotification:(id)arg1;	// IMP=0x000000010006fe38
- (void)updateProximityState:(id)arg1;	// IMP=0x000000010006fe20
- (void)handleBBAssertionBGAppActiveRequest:(id)arg1;	// IMP=0x000000010006fe08
- (void)handleDisconnection:(id)arg1 pid:(int)arg2;	// IMP=0x000000010006fdec
- (void)updateControllerState:(id)arg1;	// IMP=0x000000010006fd34
- (void)updateControllerSession:(id)arg1 ofId:(unsigned long long)arg2;	// IMP=0x000000010006f468
- (_Bool)isDeviceConnectedOverNonLTERadio;	// IMP=0x000000010006f3b0
- (id)getQueue;	// IMP=0x000000010006f394
- (void)dealloc;	// IMP=0x000000010006f134
- (id)init;	// IMP=0x000000010006edb8
- (id)autorelease;	// IMP=0x000000010006ed64
- (oneway void)release;	// IMP=0x000000010006ed50
- (unsigned long long)retainCount;	// IMP=0x000000010006ecf4
- (void)existingContexts;	// IMP=0x000000010006ec7c
- (id)getiRATClientFromList:(int)arg1;	// IMP=0x000000010006ea64
- (void)deleteiRATClient:(int)arg1;	// IMP=0x000000010006e964
- (void)removeiRatClient:(id)arg1;	// IMP=0x000000010006e8b8
- (void)addiRatClient:(id)arg1;	// IMP=0x000000010006e820
- (id)retain;	// IMP=0x000000010006e804
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006e7e4
- (_Bool)canCellularMeetApplicationRequirement:(unsigned long long)arg1:(unsigned long long)arg2:(_Bool)arg3:(int)arg4:(int)arg5;	// IMP=0x00000001000130ec
- (_Bool)isCellularExitCriteriaMetForIMSThumpCallCurrentLinkCellular;	// IMP=0x00000001000139e8
- (_Bool)isCellularEntryCriteriaMetForIMSThumpCallCurrentLinkWiFi;	// IMP=0x0000000100013658
- (_Bool)canCellularMeetApplicationRequirementsAppTypeThumper:(_Bool)arg1:(int)arg2:(int)arg3;	// IMP=0x0000000100013238
- (_Bool)canCellularMeetApplicationRequirementsAppTypeData;	// IMP=0x0000000100013d94
- (_Bool)isCellularExitCriteriaMetForVoiceCallCallCurrentLinkUMTS;	// IMP=0x000000010001625c
- (_Bool)isCellularExitCriteriaMetForIMSVoiceCallCurrentLinkLTE:(_Bool)arg1;	// IMP=0x0000000100015dd8
- (_Bool)isCellularEntryCriteriaMetForIMSVoiceCallCurrentLinkWiFi:(_Bool)arg1;	// IMP=0x000000010001595c
- (_Bool)isLteEntryCriteriaMetCurrentLinkWiFi:(long long)arg1;	// IMP=0x00000001000155f0
- (_Bool)isCellularEntryCriteriaMetForVoiceCallCurrentLinkNone;	// IMP=0x0000000100015358
- (_Bool)isLteEntryCriteriaMetCurrentLinkNone;	// IMP=0x00000001000150f8
- (_Bool)canCellularMeetApplicationRequirementsAppTypeWiFiCallingCallActive:(int)arg1;	// IMP=0x0000000100014e8c
- (_Bool)canCellularMeetApplicationRequirementsAppTypeWiFiCallingCallIdle:(int)arg1;	// IMP=0x00000001000147f0
- (_Bool)canLteMeetApplicationRequirementsAppTypeWiFiCallingCallIdle:(int)arg1;	// IMP=0x00000001000144c4
- (_Bool)evaluateCellularLinkForWiFiCallingIMSPreferredPolicy:(int)arg1:(_Bool)arg2;	// IMP=0x0000000100014390
- (_Bool)evaluateCellularLinkForWiFiCallingCellPreferredPolicy:(int)arg1:(_Bool)arg2;	// IMP=0x0000000100014308
- (_Bool)evaluateCellularLinkForWiFiCallingWiFiPreferredPolicy:(int)arg1:(_Bool)arg2;	// IMP=0x00000001000141c4
- (_Bool)canCellularMeetApplicationRequirementsAppTypeWiFiCalling:(_Bool)arg1:(int)arg2:(int)arg3;	// IMP=0x0000000100013f2c
- (_Bool)isUplinkAudioQualityOfCurrentCallGood:(int)arg1;	// IMP=0x0000000100019e8c
- (_Bool)isIMSTransportQualityGood;	// IMP=0x0000000100019d0c
- (_Bool)isMovingAverageAudioQualityOfCurrentCallGood:(int)arg1;	// IMP=0x00000001000195cc
- (_Bool)isWiFiVoIPQualityGoodEnough;	// IMP=0x0000000100018e5c
- (void)evaluateActiveCallQuality;	// IMP=0x00000001000189dc
- (_Bool)canWiFiMeetIdleApplicationRequirements:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3;	// IMP=0x0000000100018878
- (_Bool)canWiFiMeetActiveApplicationRequirements:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3:(int)arg4;	// IMP=0x000000010001867c
- (_Bool)canWiFiTransportMeetActiveApplicationRequirements:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3;	// IMP=0x00000001000184c0
- (_Bool)isWiFiSymtompsIndicatorGoodEnoughForActiveApplication:(unsigned long long)arg1:(int)arg2;	// IMP=0x0000000100018178
- (_Bool)isWiFiSymtompsIndicatorGoodEnoughForIdleApplication:(unsigned long long)arg1:(int)arg2;	// IMP=0x0000000100017e10
- (_Bool)canWiFiRadioMeetActiveApplicationRequirements:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3;	// IMP=0x00000001000178cc
- (_Bool)canWiFiTransportMeetIdleApplicationRequirements:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3;	// IMP=0x0000000100017824
- (_Bool)canWiFiRadioMeetIdleApplicationRequirements:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3;	// IMP=0x0000000100017310
- (_Bool)isWiFiArqQualityIndicatorGood:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3:(_Bool)arg4;	// IMP=0x00000001000171f8
- (_Bool)isWiFiArqQualityIndicatorGoodControlFW:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3:(_Bool)arg4;	// IMP=0x0000000100016d9c
- (_Bool)isWiFiArqQualityIndicatorGoodUserData:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3:(_Bool)arg4;	// IMP=0x00000001000168a8
- (_Bool)isWiFiLoadQualityIndicatorGood:(unsigned long long)arg1:(unsigned long long)arg2:(_Bool)arg3:(int)arg4;	// IMP=0x0000000100016684
- (_Bool)isWiFiBeaconLossQualityIndicatorGood:(unsigned long long)arg1:(unsigned long long)arg2:(int)arg3;	// IMP=0x00000001000164b0
- (void)handleMotionUpdate:(id)arg1;	// IMP=0x000000010001a6e0
- (void)monitorNetworkSymptoms:(int)arg1;	// IMP=0x000000010001a4b0
- (void)handleInternalMessage:(id)arg1;	// IMP=0x000000010001a3b4

@end
