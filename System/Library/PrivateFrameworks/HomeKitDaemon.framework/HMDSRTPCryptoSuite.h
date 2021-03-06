/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDSRTPCryptoSuite : HMDNumberParser <NSSecureCoding> {

	unsigned long long _srtpCryptoSuite;

}

@property (nonatomic,readonly) unsigned long long srtpCryptoSuite;              //@synthesize srtpCryptoSuite=_srtpCryptoSuite - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithSuites:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)srtpCryptoSuite;
-(id)initWithCryptoSuite:(unsigned long long)arg1 ;
@end

