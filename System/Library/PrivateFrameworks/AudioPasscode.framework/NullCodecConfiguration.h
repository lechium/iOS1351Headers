/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding> {

	float _retrievalCallbackInterval;

}

@property (assign,nonatomic) float retrievalCallbackInterval;              //@synthesize retrievalCallbackInterval=_retrievalCallbackInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValues;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(float)retrievalCallbackInterval;
-(void)setRetrievalCallbackInterval:(float)arg1 ;
@end

