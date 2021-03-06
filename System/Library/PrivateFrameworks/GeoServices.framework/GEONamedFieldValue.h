/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEONamedField, NSString;

@interface GEONamedFieldValue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _doubleValue;
	long long _intValue;
	GEONamedField* _mapValue;
	NSString* _stringValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _boolValue;
	struct {
		unsigned has_doubleValue : 1;
		unsigned has_intValue : 1;
		unsigned has_boolValue : 1;
		unsigned read_unknownFields : 1;
		unsigned read_mapValue : 1;
		unsigned read_stringValue : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_doubleValue : 1;
		unsigned wrote_intValue : 1;
		unsigned wrote_mapValue : 1;
		unsigned wrote_stringValue : 1;
		unsigned wrote_boolValue : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue; 
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue; 
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,readonly) BOOL hasMapValue; 
@property (nonatomic,retain) GEONamedField * mapValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(double)doubleValue;
-(id)init;
-(long long)intValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readStringValue;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(void)_readMapValue;
-(GEONamedField *)mapValue;
-(void)setMapValue:(GEONamedField *)arg1 ;
-(BOOL)hasMapValue;
@end

