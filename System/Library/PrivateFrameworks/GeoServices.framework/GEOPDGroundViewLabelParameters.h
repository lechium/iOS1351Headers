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

@class PBUnknownFields, GEOLocation;

@interface GEOPDGroundViewLabelParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _locationId;
	GEOLocation* _location;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasLocationId; 
@property (assign,nonatomic) unsigned long long locationId; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)locationId;
-(void)setLocationId:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)clearSensitiveFields;
-(void)setHasLocationId:(BOOL)arg1 ;
-(BOOL)hasLocationId;
@end
