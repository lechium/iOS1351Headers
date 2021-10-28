//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, WCM_WiFiController, WRM_MetricsService;
@protocol OS_dispatch_queue;

@interface WRM_BWEvalManager : NSObject
{
    NSObject<OS_dispatch_queue> *mQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *mProximityMsgQueue;	// 16 = 0x10
    WCM_WiFiController *mWiFi;	// 24 = 0x18
    unsigned long long mAchievedMaxWiFiBW;	// 32 = 0x20
    unsigned long long mAchievedMovAvgWiFiBW;	// 40 = 0x28
    unsigned long long mEvalMovAvgWiFiBW;	// 48 = 0x30
    unsigned long long mPrevEstMaxWiFiBW;	// 56 = 0x38
    _Bool mStreamingSessionActive;	// 64 = 0x40
    unsigned long long mStreamingStallDetected;	// 72 = 0x48
    unsigned long long mStreamingTotalStallDetected;	// 80 = 0x50
    unsigned long long mStreamingTotalStallDuration;	// 88 = 0x58
    _Bool mStreamingFatalErrorDetected;	// 96 = 0x60
    unsigned long long mStreamingConnectionReferenceCount;	// 104 = 0x68
    unsigned long long mStreamingConnectionExpectedTimeHorizon;	// 112 = 0x70
    unsigned long long mAchievedPrefWiFiBW;	// 120 = 0x78
    unsigned long long mDataSent;	// 128 = 0x80
    unsigned long long mDuration;	// 136 = 0x88
    _Bool mContainsDataSentFlag;	// 144 = 0x90
    float mScallingFactor;	// 148 = 0x94
    float mDeviation;	// 152 = 0x98
    float mMovingAvgDeviation;	// 156 = 0x9c
    WRM_MetricsService *mMetrics;	// 160 = 0xa0
    struct WRMMetricsiRATStreaming *mWrmiRATStreaming;	// 168 = 0xa8
    NSDate *mCMStatusUpdateEvaluationTimer;	// 176 = 0xb0
    double mTimeSinceCMStatusEvaluationStarted;	// 184 = 0xb8
    NSMutableArray *miRATClientContexts;	// 192 = 0xc0
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e274
+ (id)WRM_BWEvalManagerSingleton;	// IMP=0x000000010002e1e8
- (void)sendMessage:(int)arg1 withMsg:(id)arg2;	// IMP=0x000000010002fa90
- (_Bool)needWiFiLQM;	// IMP=0x000000010002f9ec
- (void)feedAWDStreamingStats:(CDStruct_889e84b8 *)arg1;	// IMP=0x000000010002f934
- (void)feedAWDRadioStats;	// IMP=0x000000010002f090
- (void)updateBBState;	// IMP=0x000000010002f07c
- (_Bool)doesIRATClientSubscriptionContextExist;	// IMP=0x000000010002ed7c
- (id)getiRATClientFromList:(int)arg1;	// IMP=0x000000010002eba0
- (_Bool)enableiRATManager;	// IMP=0x000000010002eb84
- (void)updateControllerState:(id)arg1;	// IMP=0x000000010002eacc
- (void)updateControllerSession:(id)arg1 ofId:(unsigned long long)arg2;	// IMP=0x000000010002e758
- (void)getEstimatedWiFiBandwidth:(CDStruct_889e84b8 *)arg1;	// IMP=0x000000010002e718
- (id)getQueue;	// IMP=0x000000010002e6fc
- (void)dealloc;	// IMP=0x000000010002e614
- (id)init;	// IMP=0x000000010002e3e8
- (id)autorelease;	// IMP=0x000000010002e394
- (oneway void)release;	// IMP=0x000000010002e380
- (unsigned long long)retainCount;	// IMP=0x000000010002e324
- (id)retain;	// IMP=0x000000010002e308
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e2b0
- (void)handleWiFiRegistered;	// IMP=0x000000010002e13c
- (void)handleIMGVideoClientRegisterd;	// IMP=0x000000010002e0f0
- (void)handleControllerAvailability:(unsigned long long)arg1;	// IMP=0x000000010002e050
- (void)existingContexts;	// IMP=0x000000010002dfc8
- (void)deleteiRATClient:(int)arg1;	// IMP=0x000000010002df08
- (void)removeiRatClient:(id)arg1;	// IMP=0x000000010002de80
- (void)addiRatClient:(id)arg1;	// IMP=0x000000010002de10
- (void)handleWiFiStateChaneEvents:(id)arg1;	// IMP=0x000000010002db74
- (void)evaluateWiFiBandwidth:(CDStruct_889e84b8 *)arg1;	// IMP=0x000000010002d9e0
- (void)calcAdjustedBandwith:(CDStruct_889e84b8 *)arg1:(float)arg2;	// IMP=0x000000010002d7b8
- (void)evaluateCellularBandwidth:(CDStruct_889e84b8 *)arg1;	// IMP=0x000000010002d710
- (int)evaluateLink:(unsigned long long)arg1:(int)arg2:(int)arg3;	// IMP=0x000000010002d530
- (void)evaluateWiFiLink;	// IMP=0x000000010002c350
- (void)handleSubscribeStatusUpdate:(id)arg1:(_Bool)arg2;	// IMP=0x000000010002b600
- (void)processSessionStatusUpdate:(id)arg1;	// IMP=0x000000010002b470
- (void)notifyCommCenterManager;	// IMP=0x000000010002b45c
- (void)handleLinkPrefSubscribe:(id)arg1;	// IMP=0x000000010002adec
- (void)handleSessionNotification:(id)arg1;	// IMP=0x000000010002ac3c
- (void)handleUpdateStallMessage:(id)arg1;	// IMP=0x000000010002aa68
- (void)handleInternalMessage:(id)arg1;	// IMP=0x000000010002a95c

@end
