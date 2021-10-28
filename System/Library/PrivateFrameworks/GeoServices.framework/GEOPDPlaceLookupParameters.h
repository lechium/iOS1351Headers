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

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _muids;
	NSMutableArray* _identifiers;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _resultProviderId;
	BOOL _enablePartialClientization;
	struct {
		unsigned has_resultProviderId : 1;
		unsigned has_enablePartialClientization : 1;
		unsigned read_unknownFields : 1;
		unsigned read_muids : 1;
		unsigned read_identifiers : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_muids : 1;
		unsigned wrote_identifiers : 1;
		unsigned wrote_resultProviderId : 1;
		unsigned wrote_enablePartialClientization : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * identifiers; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (nonatomic,readonly) unsigned long long muidsCount; 
@property (nonatomic,readonly) unsigned long long* muids; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)identifierType;
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
-(NSMutableArray *)identifiers;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)enablePartialClientization;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(int)resultProviderId;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)_readMuids;
-(void)_addNoFlagsMuid:(unsigned long long)arg1 ;
-(void)_addNoFlagsIdentifier:(id)arg1 ;
-(unsigned long long)muidsCount;
-(void)clearMuids;
-(unsigned long long)muidAtIndex:(unsigned long long)arg1 ;
-(void)addMuid:(unsigned long long)arg1 ;
-(unsigned long long)identifiersCount;
-(void)clearIdentifiers;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)addIdentifier:(id)arg1 ;
-(void)_readIdentifiers;
-(unsigned long long*)muids;
-(void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 ;
@end
