/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSUUID;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _eventDate;
	NSString* _eventName;
	NSString* _loiIdentifierString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _loiType;
	BOOL _isEventAllDay;
	struct {
		unsigned has_eventDate : 1;
		unsigned has_loiType : 1;
		unsigned has_isEventAllDay : 1;
		unsigned read_unknownFields : 1;
		unsigned read_eventName : 1;
		unsigned read_loiIdentifierString : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_eventDate : 1;
		unsigned wrote_eventName : 1;
		unsigned wrote_loiIdentifierString : 1;
		unsigned wrote_loiType : 1;
		unsigned wrote_isEventAllDay : 1;
	}  _flags;

}

@property (nonatomic,retain) NSUUID * loiIdentifier; 
@property (assign,nonatomic) BOOL hasLoiType; 
@property (assign,nonatomic) int loiType; 
@property (nonatomic,readonly) BOOL hasEventName; 
@property (nonatomic,retain) NSString * eventName; 
@property (assign,nonatomic) BOOL hasEventDate; 
@property (assign,nonatomic) double eventDate; 
@property (assign,nonatomic) BOOL hasIsEventAllDay; 
@property (assign,nonatomic) BOOL isEventAllDay; 
@property (nonatomic,readonly) BOOL hasLoiIdentifierString; 
@property (nonatomic,retain) NSString * loiIdentifierString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readEventName;
-(void)_readLoiIdentifierString;
-(NSString *)loiIdentifierString;
-(void)setLoiIdentifierString:(NSString *)arg1 ;
-(int)loiType;
-(void)setLoiType:(int)arg1 ;
-(void)setHasLoiType:(BOOL)arg1 ;
-(BOOL)hasLoiType;
-(id)loiTypeAsString:(int)arg1 ;
-(int)StringAsLoiType:(id)arg1 ;
-(BOOL)hasEventName;
-(double)eventDate;
-(void)setEventDate:(double)arg1 ;
-(void)setHasEventDate:(BOOL)arg1 ;
-(BOOL)hasEventDate;
-(BOOL)isEventAllDay;
-(void)setIsEventAllDay:(BOOL)arg1 ;
-(void)setHasIsEventAllDay:(BOOL)arg1 ;
-(BOOL)hasIsEventAllDay;
-(BOOL)hasLoiIdentifierString;
-(NSUUID *)loiIdentifier;
-(void)setLoiIdentifier:(NSUUID *)arg1 ;
@end

