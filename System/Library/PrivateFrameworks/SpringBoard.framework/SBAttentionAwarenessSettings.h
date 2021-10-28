/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUISettings.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SBAttentionAwarenessSettings : SBUISettings <MCProfileConnectionObserver> {

	BOOL _allowsAttentionAwareAutoLock;
	BOOL _supportsAttentionSensor;
	BOOL _shouldUseAttentionSensor;
	BOOL _isObservingDataSources;
	AWNotification_sRef _attentionAwarenessToken;
	double _sampleInterval;
	double _dimInterval;
	double _sleepInterval;

}

@property (assign,nonatomic) BOOL shouldUseAttentionSensor; 
@property (assign,nonatomic) double sampleInterval;                      //@synthesize sampleInterval=_sampleInterval - In the implementation block
@property (assign,nonatomic) double dimInterval;                         //@synthesize dimInterval=_dimInterval - In the implementation block
@property (assign,nonatomic) double sleepInterval;                       //@synthesize sleepInterval=_sleepInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsControllerModule;
+(BOOL)attentionSensorSupported;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setDefaultValues;
-(double)sampleInterval;
-(double)sleepInterval;
-(void)setSampleInterval:(double)arg1 ;
-(BOOL)shouldUseAttentionSensor;
-(void)setDimInterval:(double)arg1 ;
-(void)setSleepInterval:(double)arg1 ;
-(void)setShouldUseAttentionSensor:(BOOL)arg1 ;
-(double)dimInterval;
@end
