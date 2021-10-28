/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {

	unsigned _dataVersion;
	unsigned _formatVersion;
	unsigned _patchVersion;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasDataVersion; 
@property (assign,nonatomic) unsigned dataVersion; 
@property (assign,nonatomic) BOOL hasFormatVersion; 
@property (assign,nonatomic) unsigned formatVersion; 
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) unsigned patchVersion; 
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
-(unsigned)patchVersion;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)dataVersion;
-(void)setDataVersion:(unsigned)arg1 ;
-(BOOL)hasDataVersion;
-(void)setHasDataVersion:(BOOL)arg1 ;
-(unsigned)formatVersion;
-(void)setFormatVersion:(unsigned)arg1 ;
-(void)setHasFormatVersion:(BOOL)arg1 ;
-(BOOL)hasFormatVersion;
-(void)setPatchVersion:(unsigned)arg1 ;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
@end
