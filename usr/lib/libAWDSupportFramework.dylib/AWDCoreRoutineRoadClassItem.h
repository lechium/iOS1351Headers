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

@interface AWDCoreRoutineRoadClassItem : PBCodable <NSCopying> {

	int _percentage;
	int _roadClass;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasRoadClass; 
@property (assign,nonatomic) int roadClass;                   //@synthesize roadClass=_roadClass - In the implementation block
@property (assign,nonatomic) BOOL hasPercentage; 
@property (assign,nonatomic) int percentage;                  //@synthesize percentage=_percentage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)percentage;
-(int)roadClass;
-(BOOL)hasRoadClass;
-(void)setRoadClass:(int)arg1 ;
-(void)setHasRoadClass:(BOOL)arg1 ;
-(void)setPercentage:(int)arg1 ;
-(void)setHasPercentage:(BOOL)arg1 ;
-(BOOL)hasPercentage;
@end
