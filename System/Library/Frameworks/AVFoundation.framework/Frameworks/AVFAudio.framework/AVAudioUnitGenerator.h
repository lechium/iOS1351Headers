/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnit.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>

@property (assign,nonatomic) BOOL bypass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)bypass;
-(void)setBypass:(BOOL)arg1 ;
@end
