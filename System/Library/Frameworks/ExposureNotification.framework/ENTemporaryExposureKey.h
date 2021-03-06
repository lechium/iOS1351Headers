/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSData;

@interface ENTemporaryExposureKey : NSObject <CUXPCCodable> {

	unsigned char _transmissionRiskLevel;
	unsigned _rollingPeriod;
	unsigned _rollingStartNumber;
	NSData* _keyData;

}

@property (nonatomic,copy) NSData * keyData;                                   //@synthesize keyData=_keyData - In the implementation block
@property (assign,nonatomic) unsigned rollingPeriod;                           //@synthesize rollingPeriod=_rollingPeriod - In the implementation block
@property (assign,nonatomic) unsigned rollingStartNumber;                      //@synthesize rollingStartNumber=_rollingStartNumber - In the implementation block
@property (assign,nonatomic) unsigned char transmissionRiskLevel;              //@synthesize transmissionRiskLevel=_transmissionRiskLevel - In the implementation block
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSData *)keyData;
-(void)setKeyData:(NSData *)arg1 ;
-(unsigned)rollingPeriod;
-(void)setRollingPeriod:(unsigned)arg1 ;
-(unsigned)rollingStartNumber;
-(void)setRollingStartNumber:(unsigned)arg1 ;
-(unsigned char)transmissionRiskLevel;
-(void)setTransmissionRiskLevel:(unsigned char)arg1 ;
@end

