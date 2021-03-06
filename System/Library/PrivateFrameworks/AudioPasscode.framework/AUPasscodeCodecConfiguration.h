/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUPasscodeCodecConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _payloadLengthBytes;
	long long _sampleRate;
	long long _numChannels;
	NSString* _algorithmName;

}

@property (assign,nonatomic) long long payloadLengthBytes;              //@synthesize payloadLengthBytes=_payloadLengthBytes - In the implementation block
@property (assign,nonatomic) long long sampleRate;                      //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) long long numChannels;                     //@synthesize numChannels=_numChannels - In the implementation block
@property (nonatomic,copy) NSString * algorithmName;                    //@synthesize algorithmName=_algorithmName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(long long)numChannels;
-(long long)payloadLengthBytes;
-(id)initWithAlgorithmName:(id)arg1 ;
-(void)setAlgorithmName:(NSString *)arg1 ;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(void)setNumChannels:(long long)arg1 ;
-(NSString *)algorithmName;
-(void)setPayloadLengthBytes:(long long)arg1 ;
-(void)__setDefaultValues;
@end

