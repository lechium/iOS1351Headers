/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEOArrivalRegion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _arrivalRegion;
	int _arrivalRegionAction;
	unsigned _endNavigationTimeoutThreshold;
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,readonly) BOOL hasArrivalRegion; 
@property (nonatomic,retain) GEOMapRegion * arrivalRegion; 
@property (assign,nonatomic) BOOL hasArrivalRegionAction; 
@property (assign,nonatomic) int arrivalRegionAction; 
@property (assign,nonatomic) BOOL hasEndNavigationTimeoutThreshold; 
@property (assign,nonatomic) unsigned endNavigationTimeoutThreshold; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOMapRegion *)arrivalRegion;
-(void)setArrivalRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasArrivalRegion;
-(int)arrivalRegionAction;
-(void)setArrivalRegionAction:(int)arg1 ;
-(void)setHasArrivalRegionAction:(BOOL)arg1 ;
-(BOOL)hasArrivalRegionAction;
-(id)arrivalRegionActionAsString:(int)arg1 ;
-(int)StringAsArrivalRegionAction:(id)arg1 ;
-(unsigned)endNavigationTimeoutThreshold;
-(void)setEndNavigationTimeoutThreshold:(unsigned)arg1 ;
-(void)setHasEndNavigationTimeoutThreshold:(BOOL)arg1 ;
-(BOOL)hasEndNavigationTimeoutThreshold;
@end

