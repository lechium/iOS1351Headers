/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying> {

	int _flag;
	BOOL _correctedValue;
	BOOL _originalValue;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasFlag; 
@property (assign,nonatomic) int flag; 
@property (assign,nonatomic) BOOL hasOriginalValue; 
@property (assign,nonatomic) BOOL originalValue; 
@property (assign,nonatomic) BOOL hasCorrectedValue; 
@property (assign,nonatomic) BOOL correctedValue; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFlag:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)originalValue;
-(BOOL)correctedValue;
-(void)setOriginalValue:(BOOL)arg1 ;
-(void)setCorrectedValue:(BOOL)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(int)flag;
-(void)setHasFlag:(BOOL)arg1 ;
-(BOOL)hasFlag;
-(id)flagAsString:(int)arg1 ;
-(int)StringAsFlag:(id)arg1 ;
-(void)setHasOriginalValue:(BOOL)arg1 ;
-(void)setHasCorrectedValue:(BOOL)arg1 ;
@end

