/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDAudioStreamSampleRate : NSObject <NSCopying> {

	long long _sampleRate;

}

@property (assign,nonatomic) long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithSampleRate:(long long)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
@end

