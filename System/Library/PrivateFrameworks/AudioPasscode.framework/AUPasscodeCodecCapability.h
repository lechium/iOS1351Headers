/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioPasscode/AudioPasscode-Structs.h>
@class NSString, NSArray;

@interface AUPasscodeCodecCapability : NSObject {

	NSString* _algorithmName;
	NSArray* _supportedSampleRates;
	NSRange _numChannelRange;

}

@property (nonatomic,copy,readonly) NSString * algorithmName;               //@synthesize algorithmName=_algorithmName - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSampleRates;              //@synthesize supportedSampleRates=_supportedSampleRates - In the implementation block
@property (nonatomic,readonly) NSRange numChannelRange;                     //@synthesize numChannelRange=_numChannelRange - In the implementation block
-(id)init;
-(id)initWithAlgorithmName:(id)arg1 ;
-(NSString *)algorithmName;
-(NSArray *)supportedSampleRates;
-(NSRange)numChannelRange;
@end
