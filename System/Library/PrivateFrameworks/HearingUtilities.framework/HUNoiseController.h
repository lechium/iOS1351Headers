/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AXDispatchTimer, NSMutableArray, NSDate, NSObject, ADAMAudioDataReceiver, HKHealthStore, HKCategorySample, UNUserNotificationCenter;

@interface HUNoiseController : NSObject {

	int _measurementSuspensionNotifyToken;
	BOOL _measurementEnabled;
	BOOL _notified;
	BOOL _muted;
	BOOL _notified80;
	BOOL _notified85;
	BOOL _notified90;
	float _slowLeq;
	float _fastLeq;
	float _sampleDuration;
	AXDispatchTimer* _edDummyDataTimer;
	AXDispatchTimer* _adamSuspendedTimer;
	NSMutableArray* _leqBuffer;
	unsigned long long _thresholdLevel;
	NSDate* _timeNotified;
	NSMutableArray* _leqBuffer80Threshold;
	NSMutableArray* _leqBuffer85Threshold;
	NSMutableArray* _leqBuffer90Threshold;
	NSDate* _timeNotified80;
	NSDate* _timeNotified85;
	NSDate* _timeNotified90;
	NSObject*<OS_dispatch_queue> _dataQueue;
	ADAMAudioDataReceiver* _edDataReceiver;
	HKHealthStore* _healthStore;
	HKCategorySample* _notificationSample;
	UNUserNotificationCenter* _userNotificationCenter;

}

@property (nonatomic,retain) AXDispatchTimer * edDummyDataTimer;                               //@synthesize edDummyDataTimer=_edDummyDataTimer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * adamSuspendedTimer;                             //@synthesize adamSuspendedTimer=_adamSuspendedTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * leqBuffer;                                       //@synthesize leqBuffer=_leqBuffer - In the implementation block
@property (assign,nonatomic) float slowLeq;                                                    //@synthesize slowLeq=_slowLeq - In the implementation block
@property (assign,nonatomic) float fastLeq;                                                    //@synthesize fastLeq=_fastLeq - In the implementation block
@property (assign,getter=isMeasurementEnabled,nonatomic) BOOL measurementEnabled;              //@synthesize measurementEnabled=_measurementEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long thresholdLevel;                                //@synthesize thresholdLevel=_thresholdLevel - In the implementation block
@property (nonatomic,retain) NSDate * timeNotified;                                            //@synthesize timeNotified=_timeNotified - In the implementation block
@property (assign,nonatomic) float sampleDuration;                                             //@synthesize sampleDuration=_sampleDuration - In the implementation block
@property (assign,getter=isNotified,nonatomic) BOOL notified;                                  //@synthesize notified=_notified - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                        //@synthesize muted=_muted - In the implementation block
@property (nonatomic,retain) NSMutableArray * leqBuffer80Threshold;                            //@synthesize leqBuffer80Threshold=_leqBuffer80Threshold - In the implementation block
@property (nonatomic,retain) NSMutableArray * leqBuffer85Threshold;                            //@synthesize leqBuffer85Threshold=_leqBuffer85Threshold - In the implementation block
@property (nonatomic,retain) NSMutableArray * leqBuffer90Threshold;                            //@synthesize leqBuffer90Threshold=_leqBuffer90Threshold - In the implementation block
@property (assign,getter=isNotified80,nonatomic) BOOL notified80;                              //@synthesize notified80=_notified80 - In the implementation block
@property (assign,getter=isNotified85,nonatomic) BOOL notified85;                              //@synthesize notified85=_notified85 - In the implementation block
@property (assign,getter=isNotified90,nonatomic) BOOL notified90;                              //@synthesize notified90=_notified90 - In the implementation block
@property (nonatomic,retain) NSDate * timeNotified80;                                          //@synthesize timeNotified80=_timeNotified80 - In the implementation block
@property (nonatomic,retain) NSDate * timeNotified85;                                          //@synthesize timeNotified85=_timeNotified85 - In the implementation block
@property (nonatomic,retain) NSDate * timeNotified90;                                          //@synthesize timeNotified90=_timeNotified90 - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                           //@synthesize dataQueue=_dataQueue - In the implementation block
@property (nonatomic,retain) ADAMAudioDataReceiver * edDataReceiver;                           //@synthesize edDataReceiver=_edDataReceiver - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKCategorySample * notificationSample;                            //@synthesize notificationSample=_notificationSample - In the implementation block
@property (nonatomic,readonly) UNUserNotificationCenter * userNotificationCenter;              //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
+(id)sharedController;
+(BOOL)deviceSupportsEnvironmentalDosimetry;
-(id)init;
-(void)dealloc;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setSampleDuration:(float)arg1 ;
-(float)sampleDuration;
-(id)registerForEnvironmentalDosimetryUpdates:(id)arg1 ;
-(void)_clearCachedValues;
-(void)_logNoiseEnabledStateToPowerlog:(BOOL)arg1 ;
-(ADAMAudioDataReceiver *)edDataReceiver;
-(id)measurementConfigurationWithDuration:(unsigned)arg1 period:(unsigned)arg2 config:(unsigned long long)arg3 ;
-(id)measurementConfigurationWithDuration:(unsigned)arg1 period:(unsigned)arg2 ;
-(void)subscribeToSharedNotifications;
-(void)setMeasurementEnabled:(BOOL)arg1 ;
-(void)_sendUpdateMessageForCurrentValues;
-(void)_stopReceivingAudioDosageSamples;
-(void)restartADAMTimer;
-(void)setFastLeq:(float)arg1 ;
-(void)setSlowLeq:(float)arg1 ;
-(void)setThresholdLevel:(unsigned long long)arg1 ;
-(void)applyNotificationLogicForSPL:(float)arg1 withDuration:(float)arg2 ;
-(void)applyAnalyticsNotificationLogicForSPL:(float)arg1 withDuration:(float)arg2 ;
-(float)slowLeq;
-(float)fastLeq;
-(BOOL)isMeasurementEnabled;
-(unsigned long long)thresholdLevel;
-(BOOL)isNotified;
-(void)setNotified:(BOOL)arg1 ;
-(void)checkToResetNotificationsForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 ;
-(void)checkToSurfaceNotificationForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 ;
-(void)maintainCircularBuffer:(id)arg1 forTime:(float)arg2 ;
-(float)calculateLeqForBuffer:(id)arg1 ;
-(unsigned long long)alertTypeFromLevel:(float)arg1 ;
-(void)showNotificationForAlertType:(unsigned long long)arg1 ;
-(void)setTimeNotified:(NSDate *)arg1 ;
-(void)writeNotificationSampleToHKWithSPL:(float)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(BOOL)isNotified80;
-(void)checkToResetAnalyticsNotificationsForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 andThreshold:(long long)arg5 ;
-(void)checkToSurfaceAnalyticsNotificationForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 andThreshold:(long long)arg5 ;
-(BOOL)isNotified85;
-(BOOL)isNotified90;
-(void)setNotified80:(BOOL)arg1 ;
-(void)setNotified85:(BOOL)arg1 ;
-(void)setNotified90:(BOOL)arg1 ;
-(void)setTimeNotified80:(NSDate *)arg1 ;
-(void)setTimeNotified85:(NSDate *)arg1 ;
-(void)setTimeNotified90:(NSDate *)arg1 ;
-(void)readEnvironmentalDosimetryLevels;
-(AXDispatchTimer *)edDummyDataTimer;
-(void)setEdDummyDataTimer:(AXDispatchTimer *)arg1 ;
-(AXDispatchTimer *)adamSuspendedTimer;
-(void)setAdamSuspendedTimer:(AXDispatchTimer *)arg1 ;
-(NSMutableArray *)leqBuffer;
-(void)setLeqBuffer:(NSMutableArray *)arg1 ;
-(NSDate *)timeNotified;
-(NSMutableArray *)leqBuffer80Threshold;
-(void)setLeqBuffer80Threshold:(NSMutableArray *)arg1 ;
-(NSMutableArray *)leqBuffer85Threshold;
-(void)setLeqBuffer85Threshold:(NSMutableArray *)arg1 ;
-(NSMutableArray *)leqBuffer90Threshold;
-(void)setLeqBuffer90Threshold:(NSMutableArray *)arg1 ;
-(NSDate *)timeNotified80;
-(NSDate *)timeNotified85;
-(NSDate *)timeNotified90;
-(void)setEdDataReceiver:(ADAMAudioDataReceiver *)arg1 ;
-(HKCategorySample *)notificationSample;
-(void)setNotificationSample:(HKCategorySample *)arg1 ;
-(UNUserNotificationCenter *)userNotificationCenter;
@end

