/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineDeletionRecordStats : PBCodable <NSCopying> {

	unsigned _ageInDays;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasAgeInDays; 
@property (assign,nonatomic) unsigned ageInDays;              //@synthesize ageInDays=_ageInDays - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAgeInDays:(unsigned)arg1 ;
-(void)setHasAgeInDays:(BOOL)arg1 ;
-(BOOL)hasAgeInDays;
-(unsigned)ageInDays;
@end
