/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEORPPlaceRequestResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlaceResponse* _placeResponse;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_placeRequest : 1;
		unsigned read_placeResponse : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_placeRequest : 1;
		unsigned wrote_placeResponse : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (nonatomic,readonly) BOOL hasPlaceResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * placeResponse; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPlaceRequest;
-(void)_readPlaceResponse;
-(GEOPDPlaceRequest *)placeRequest;
-(GEOPDPlaceResponse *)placeResponse;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)setPlaceResponse:(GEOPDPlaceResponse *)arg1 ;
-(BOOL)hasPlaceRequest;
-(BOOL)hasPlaceResponse;
@end

