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

@class WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences;

@interface WiFiAnalyticsAWDWiFiDPSEpilogue : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	int _afterRecommendedAction;
	int _beforeAction;
	WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences* _changes;
	SCD_Struct_Wi7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBeforeAction; 
@property (assign,nonatomic) int beforeAction;                                                               //@synthesize beforeAction=_beforeAction - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasAfterRecommendedAction; 
@property (assign,nonatomic) int afterRecommendedAction;                                                     //@synthesize afterRecommendedAction=_afterRecommendedAction - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences * changes;              //@synthesize changes=_changes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences *)changes;
-(BOOL)hasChanges;
-(int)action;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setChanges:(WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences *)arg1 ;
-(int)beforeAction;
-(void)setBeforeAction:(int)arg1 ;
-(void)setHasBeforeAction:(BOOL)arg1 ;
-(BOOL)hasBeforeAction;
-(id)beforeActionAsString:(int)arg1 ;
-(int)StringAsBeforeAction:(id)arg1 ;
-(int)afterRecommendedAction;
-(void)setAfterRecommendedAction:(int)arg1 ;
-(void)setHasAfterRecommendedAction:(BOOL)arg1 ;
-(BOOL)hasAfterRecommendedAction;
-(id)afterRecommendedActionAsString:(int)arg1 ;
-(int)StringAsAfterRecommendedAction:(id)arg1 ;
@end

