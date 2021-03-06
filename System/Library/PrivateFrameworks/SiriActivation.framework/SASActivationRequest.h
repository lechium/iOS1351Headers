/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SiriContext;

@interface SASActivationRequest : NSObject {

	int _waketimeMIB[12];
	unsigned long long _waketimeMIBSize;
	long long _activationType;
	long long _activationEvent;
	SiriContext* _context;
	double _activationTime;
	double _buttonDownTime;
	long long _requestSource;

}

@property (assign,nonatomic) long long requestSource;                //@synthesize requestSource=_requestSource - In the implementation block
@property (assign,nonatomic) long long activationType;               //@synthesize activationType=_activationType - In the implementation block
@property (assign,nonatomic) long long activationEvent;              //@synthesize activationEvent=_activationEvent - In the implementation block
@property (nonatomic,retain) SiriContext * context;                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double activationTime;                  //@synthesize activationTime=_activationTime - In the implementation block
@property (assign,nonatomic) double buttonDownTime;                  //@synthesize buttonDownTime=_buttonDownTime - In the implementation block
+(long long)requestSourceForButtonIdentifier:(long long)arg1 ;
-(id)init;
-(id)description;
-(SiriContext *)context;
-(void)setContext:(SiriContext *)arg1 ;
-(long long)activationType;
-(void)setActivationType:(long long)arg1 ;
-(long long)requestSource;
-(void)setRequestSource:(long long)arg1 ;
-(long long)activationEvent;
-(void)setActivationEvent:(long long)arg1 ;
-(void)setActivationTime:(double)arg1 ;
-(double)activationTime;
-(id)eventSource;
-(double)buttonDownTimestamp;
-(BOOL)isButtonRequest;
-(double)computedActivationTime;
-(BOOL)isDirectActionRequest;
-(BOOL)isBluetoothRequest;
-(BOOL)isContinuityRequest;
-(BOOL)isSpotlightRequest;
-(BOOL)isTestingRequest;
-(BOOL)isVoiceRequest;
-(id)initWithDirectActionEvent:(long long)arg1 context:(id)arg2 ;
-(id)initWithButtonIdentifier:(long long)arg1 context:(id)arg2 ;
-(id)initWithContinuityContext:(id)arg1 ;
-(id)initWithVoiceTriggerContext:(id)arg1 ;
-(id)initWithBreadcrumbRequest;
-(id)initWithSimpleActivation:(long long)arg1 ;
-(id)initWithSpotlightContext:(id)arg1 ;
-(id)initWithVoiceTriggerRequest;
-(id)initWithTestingContext:(id)arg1 ;
-(BOOL)isUIFreeRequestSource;
-(void)setButtonDownTime:(double)arg1 ;
-(BOOL)isDeviceButtonRequest;
-(BOOL)isHoldToTalkSource;
-(BOOL)isEyesFreeRequestSource;
-(double)buttonDownTime;
@end

