/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying> {

	long long _activityType;
	long long _locationType;
	double _wLengthValue;
	long long _wLocationType;
	NSString* _wLengthUnitString;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasActivityType; 
@property (assign,nonatomic) long long activityType;                    //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) long long locationType;                    //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL hasWLocationType; 
@property (assign,nonatomic) long long wLocationType;                   //@synthesize wLocationType=_wLocationType - In the implementation block
@property (assign,nonatomic) BOOL hasWLengthValue; 
@property (assign,nonatomic) double wLengthValue;                       //@synthesize wLengthValue=_wLengthValue - In the implementation block
@property (nonatomic,readonly) BOOL hasWLengthUnitString; 
@property (nonatomic,retain) NSString * wLengthUnitString;              //@synthesize wLengthUnitString=_wLengthUnitString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)activityType;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(long long)locationType;
-(BOOL)hasActivityType;
-(void)setLocationType:(long long)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(void)setHasActivityType:(BOOL)arg1 ;
-(long long)wLocationType;
-(BOOL)hasWLengthUnitString;
-(NSString *)wLengthUnitString;
-(double)wLengthValue;
-(void)setWLocationType:(long long)arg1 ;
-(void)setWLengthValue:(double)arg1 ;
-(void)setWLengthUnitString:(NSString *)arg1 ;
-(void)setHasWLocationType:(BOOL)arg1 ;
-(BOOL)hasWLocationType;
-(void)setHasWLengthValue:(BOOL)arg1 ;
-(BOOL)hasWLengthValue;
@end

