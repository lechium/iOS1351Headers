/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVAudioUnitEffect.h>

@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (nonatomic,readonly) NSArray * bands; 
@property (assign,nonatomic) float globalGain; 
-(id)init;
-(id)initWithNumberOfBands:(unsigned long long)arg1 ;
-(NSArray *)bands;
-(float)globalGain;
-(void)setGlobalGain:(float)arg1 ;
@end
