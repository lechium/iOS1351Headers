/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVAudioSessionRouteDescription.h>

@class NSArray;

@interface AXTestingRouteDescription : AVAudioSessionRouteDescription {

	NSArray* outputs;
	NSArray* inputs;

}

@property (nonatomic,retain) NSArray * inputs; 
@property (nonatomic,retain) NSArray * outputs; 
-(NSArray *)inputs;
-(NSArray *)outputs;
-(void)setInputs:(NSArray *)arg1 ;
-(void)setOutputs:(NSArray *)arg1 ;
@end

