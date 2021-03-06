/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOStorageRouteRequestStorage;

@interface MSPRouteBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOStorageRouteRequestStorage* _routeRequestStorage;

}

@property (nonatomic,readonly) BOOL hasRouteRequestStorage; 
@property (nonatomic,retain) GEOStorageRouteRequestStorage * routeRequestStorage;              //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(BOOL)hasRouteRequestStorage;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
@end

