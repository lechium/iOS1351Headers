/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPlaceFormattedString, GEOFormattedString;

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceFormattedString* _body;
	GEOFormattedString* _responseAlertPrimary;
	GEOFormattedString* _responseAlertSecondary;
	GEOPlaceFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_body : 1;
		unsigned read_responseAlertPrimary : 1;
		unsigned read_responseAlertSecondary : 1;
		unsigned read_title : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_body : 1;
		unsigned wrote_responseAlertPrimary : 1;
		unsigned wrote_responseAlertSecondary : 1;
		unsigned wrote_title : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasResponseAlertPrimary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertPrimary; 
@property (nonatomic,readonly) BOOL hasResponseAlertSecondary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertSecondary; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * title; 
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) GEOPlaceFormattedString * body; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPlaceFormattedString *)title;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)setBody:(GEOPlaceFormattedString *)arg1 ;
-(GEOPlaceFormattedString *)body;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTitle;
-(void)_readResponseAlertPrimary;
-(void)_readResponseAlertSecondary;
-(void)_readBody;
-(GEOFormattedString *)responseAlertPrimary;
-(GEOFormattedString *)responseAlertSecondary;
-(void)setResponseAlertPrimary:(GEOFormattedString *)arg1 ;
-(void)setResponseAlertSecondary:(GEOFormattedString *)arg1 ;
-(BOOL)hasResponseAlertPrimary;
-(BOOL)hasResponseAlertSecondary;
-(BOOL)hasBody;
@end

