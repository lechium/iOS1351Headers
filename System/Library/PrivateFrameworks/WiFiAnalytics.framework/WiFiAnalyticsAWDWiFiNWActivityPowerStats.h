/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityPowerStats : PBCodable <NSCopying> {

	unsigned long long _kRadioPhyReportRxDur;
	unsigned long long _kRadioPhyReportTxDur;
	SCD_Struct_Wi9 _has;

}

@property (assign,nonatomic) BOOL hasKRadioPhyReportTxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportTxDur;              //@synthesize kRadioPhyReportTxDur=_kRadioPhyReportTxDur - In the implementation block
@property (assign,nonatomic) BOOL hasKRadioPhyReportRxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportRxDur;              //@synthesize kRadioPhyReportRxDur=_kRadioPhyReportRxDur - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setKRadioPhyReportTxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportTxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportTxDur;
-(void)setKRadioPhyReportRxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportRxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportRxDur;
-(unsigned long long)kRadioPhyReportTxDur;
-(unsigned long long)kRadioPhyReportRxDur;
@end
