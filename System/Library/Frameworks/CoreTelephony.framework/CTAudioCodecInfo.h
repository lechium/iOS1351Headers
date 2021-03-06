/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _callId;
	long long _codec;
	unsigned long long _amrMode;
	long long _evsBandwidth;
	long long _evsBitrate;

}

@property (assign,nonatomic) unsigned long long callId;               //@synthesize callId=_callId - In the implementation block
@property (assign,nonatomic) long long codec;                         //@synthesize codec=_codec - In the implementation block
@property (assign,nonatomic) unsigned long long amrMode;              //@synthesize amrMode=_amrMode - In the implementation block
@property (assign,nonatomic) long long evsBandwidth;                  //@synthesize evsBandwidth=_evsBandwidth - In the implementation block
@property (assign,nonatomic) long long evsBitrate;                    //@synthesize evsBitrate=_evsBitrate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCallId:(unsigned long long)arg1 codec:(long long)arg2 amrMode:(unsigned long long)arg3 evsBandwidth:(long long)arg4 evsBitrate:(long long)arg5 ;
-(unsigned long long)callId;
-(long long)codec;
-(unsigned long long)amrMode;
-(long long)evsBandwidth;
-(long long)evsBitrate;
-(void)setCallId:(unsigned long long)arg1 ;
-(void)setCodec:(long long)arg1 ;
-(void)setAmrMode:(unsigned long long)arg1 ;
-(void)setEvsBandwidth:(long long)arg1 ;
-(void)setEvsBitrate:(long long)arg1 ;
@end

