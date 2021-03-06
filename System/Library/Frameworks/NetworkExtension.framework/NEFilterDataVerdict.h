/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying> {

	long long _statisticsReportFrequency;
	unsigned long long _passBytes;
	unsigned long long _peekBytes;

}

@property (assign) unsigned long long passBytes;                     //@synthesize passBytes=_passBytes - In the implementation block
@property (assign) unsigned long long peekBytes;                     //@synthesize peekBytes=_peekBytes - In the implementation block
@property (assign) long long statisticsReportFrequency;              //@synthesize statisticsReportFrequency=_statisticsReportFrequency - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dropVerdict;
+(id)allowVerdict;
+(id)needRulesVerdict;
+(id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2 ;
+(id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2 ;
+(id)pauseVerdict;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)statisticsReportFrequency;
-(long long)filterAction;
-(void)setStatisticsReportFrequency:(long long)arg1 ;
-(unsigned long long)passBytes;
-(unsigned long long)peekBytes;
-(void)setPassBytes:(unsigned long long)arg1 ;
-(void)setPeekBytes:(unsigned long long)arg1 ;
@end

