/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioUnitEQFilterParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long filterType; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float bandwidth; 
@property (assign,nonatomic) float gain; 
@property (assign,nonatomic) BOOL bypass; 
-(id)init;
-(void)dealloc;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(void)setGain:(float)arg1 ;
-(float)gain;
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(BOOL)bypass;
-(void)setBypass:(BOOL)arg1 ;
-(void)setBandwidth:(float)arg1 ;
-(float)bandwidth;
@end

