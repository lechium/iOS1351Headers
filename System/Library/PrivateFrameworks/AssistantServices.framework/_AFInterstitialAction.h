/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _AFInterstitialAction : NSObject {

	long long _phase;
	NSString* _displayKey;
	NSString* _speakableKey;
	double _duration;

}

@property (nonatomic,readonly) long long phase;                           //@synthesize phase=_phase - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayKey;                //@synthesize displayKey=_displayKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * speakableKey;              //@synthesize speakableKey=_speakableKey - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(long long)phase;
-(id)initWithDuration:(double)arg1 ;
-(NSString *)displayKey;
-(NSString *)speakableKey;
-(id)initWithPhase:(long long)arg1 displayKey:(id)arg2 speakableKey:(id)arg3 ;
@end

