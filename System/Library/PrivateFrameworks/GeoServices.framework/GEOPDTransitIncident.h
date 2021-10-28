/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDTransitIncident : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _transitIncidents;

}

@property (nonatomic,retain) NSMutableArray * transitIncidents; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)transitIncidentsForPlaceData:(id)arg1 hasTransitIncidentComponent:(BOOL*)arg2 ;
+(id)transitIncidentsTTLExpirationDateForPlaceData:(id)arg1 ;
+(Class)transitIncidentType;
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
-(NSMutableArray *)transitIncidents;
-(void)addTransitIncident:(id)arg1 ;
-(unsigned long long)transitIncidentsCount;
-(void)clearTransitIncidents;
-(id)transitIncidentAtIndex:(unsigned long long)arg1 ;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
@end
