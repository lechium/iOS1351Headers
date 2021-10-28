/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding> {

	long long _inputID;
	long long _outputID;
	NSData* _data;
	double _sampleRate;
	double _correlationValue;

}

@property (assign,nonatomic) long long outputID;                   //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) long long inputID;                    //@synthesize inputID=_inputID - In the implementation block
@property (assign,nonatomic) double sampleRate;                    //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double correlationValue;              //@synthesize correlationValue=_correlationValue - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 sampleRate:(double)arg4 correlationValue:(double)arg5 ;
-(long long)inputID;
-(void)setInputID:(long long)arg1 ;
-(long long)outputID;
-(void)setOutputID:(long long)arg1 ;
-(double)correlationValue;
-(void)setCorrelationValue:(double)arg1 ;
@end
