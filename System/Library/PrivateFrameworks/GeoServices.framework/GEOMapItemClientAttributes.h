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

@class PBDataReader, PBUnknownFields, GEOMapItemAddressBookAttributes, GEOMapItemCorrectedLocationAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapItemAddressBookAttributes* _addressBookAttributes;
	GEOMapItemCorrectedLocationAttributes* _correctedLocationAttributes;
	GEOMapItemRoutineAttributes* _routineAttributes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addressBookAttributes : 1;
		unsigned read_correctedLocationAttributes : 1;
		unsigned read_routineAttributes : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressBookAttributes : 1;
		unsigned wrote_correctedLocationAttributes : 1;
		unsigned wrote_routineAttributes : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressBookAttributes; 
@property (nonatomic,retain) GEOMapItemAddressBookAttributes * addressBookAttributes; 
@property (nonatomic,readonly) BOOL hasRoutineAttributes; 
@property (nonatomic,retain) GEOMapItemRoutineAttributes * routineAttributes; 
@property (nonatomic,readonly) BOOL hasCorrectedLocationAttributes; 
@property (nonatomic,retain) GEOMapItemCorrectedLocationAttributes * correctedLocationAttributes; 
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
-(void)_readAddressBookAttributes;
-(void)_readRoutineAttributes;
-(void)_readCorrectedLocationAttributes;
-(GEOMapItemAddressBookAttributes *)addressBookAttributes;
-(GEOMapItemRoutineAttributes *)routineAttributes;
-(GEOMapItemCorrectedLocationAttributes *)correctedLocationAttributes;
-(void)setAddressBookAttributes:(GEOMapItemAddressBookAttributes *)arg1 ;
-(void)setRoutineAttributes:(GEOMapItemRoutineAttributes *)arg1 ;
-(void)setCorrectedLocationAttributes:(GEOMapItemCorrectedLocationAttributes *)arg1 ;
-(BOOL)hasAddressBookAttributes;
-(BOOL)hasRoutineAttributes;
-(BOOL)hasCorrectedLocationAttributes;
@end

