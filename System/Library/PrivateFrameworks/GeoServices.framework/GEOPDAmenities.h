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

@class PBUnknownFields;

@interface GEOPDAmenities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAmenityValue* _amenitys;
	unsigned long long _amenitysCount;
	unsigned long long _amenitysSpace;

}

@property (nonatomic,readonly) unsigned long long amenitysCount; 
@property (nonatomic,readonly) GEOPDAmenityValue* amenitys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)amentiesForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasAmenityType:(int)arg1 ;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(unsigned long long)amenitysCount;
-(GEOPDAmenityValue*)amenitys;
-(void)clearAmenitys;
-(GEOPDAmenityValue)amenityAtIndex:(unsigned long long)arg1 ;
-(void)addAmenity:(GEOPDAmenityValue)arg1 ;
-(void)setAmenitys:(GEOPDAmenityValue*)arg1 count:(unsigned long long)arg2 ;
@end

