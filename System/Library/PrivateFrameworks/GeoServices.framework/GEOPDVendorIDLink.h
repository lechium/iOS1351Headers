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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDVendorIDLink : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _reservationTypes;
	NSString* _externalItemId;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_reservationTypes : 1;
		unsigned read_externalItemId : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_reservationTypes : 1;
		unsigned wrote_externalItemId : 1;
		unsigned wrote_vendorId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId; 
@property (nonatomic,readonly) unsigned long long reservationTypesCount; 
@property (nonatomic,readonly) int* reservationTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
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
-(NSString *)vendorId;
-(NSString *)externalItemId;
-(unsigned long long)reservationTypesCount;
-(int)reservationTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExternalItemId;
-(BOOL)hasVendorId;
-(void)_readVendorId;
-(void)_readExternalItemId;
-(void)_readReservationTypes;
-(void)_addNoFlagsReservationType:(int)arg1 ;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)clearReservationTypes;
-(void)addReservationType:(int)arg1 ;
-(int*)reservationTypes;
-(void)setReservationTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)reservationTypesAsString:(int)arg1 ;
-(int)StringAsReservationTypes:(id)arg1 ;
@end
