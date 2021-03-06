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

@class PBDataReader, PBUnknownFields, GEOPDAutocompleteEntryAddress, GEOPDAutocompleteEntryBrandProfile, GEOPDAutocompleteEntryBusiness, GEOPDAutocompleteEntryCategory, GEOPDAutocompleteEntryClientResolved, GEOPDAutocompleteEntryDirectionIntent, GEOPDAutocompleteEntryHighlightLine, GEOPDAutocompleteEntryOfflineArea, GEOPDParsecRankingFeatures, NSString, GEOPDAutocompleteEntryQuery, GEOPDRetainedSearchMetadata, GEOPDServerResultScoreMetadata;

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteEntryAddress* _address;
	GEOPDAutocompleteEntryBrandProfile* _brandProfile;
	GEOPDAutocompleteEntryBusiness* _business;
	GEOPDAutocompleteEntryCategory* _category;
	GEOPDAutocompleteEntryClientResolved* _clientResolved;
	GEOPDAutocompleteEntryDirectionIntent* _directionIntent;
	GEOPDAutocompleteEntryHighlightLine* _highlightExtra;
	GEOPDAutocompleteEntryHighlightLine* _highlightMain;
	GEOPDAutocompleteEntryOfflineArea* _offlineArea;
	GEOPDParsecRankingFeatures* _parsecRankingFeatures;
	NSString* _queryAcceleratorCompletionString;
	GEOPDAutocompleteEntryQuery* _query;
	GEOPDRetainedSearchMetadata* _retainSearch;
	GEOPDServerResultScoreMetadata* _serverResultScoreMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _autocompleteResultCellType;
	int _sortPriority;
	int _type;
	BOOL _enableQueryAcceleratorAffordance;
	struct {
		unsigned has_autocompleteResultCellType : 1;
		unsigned has_sortPriority : 1;
		unsigned has_type : 1;
		unsigned has_enableQueryAcceleratorAffordance : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_brandProfile : 1;
		unsigned read_business : 1;
		unsigned read_category : 1;
		unsigned read_clientResolved : 1;
		unsigned read_directionIntent : 1;
		unsigned read_highlightExtra : 1;
		unsigned read_highlightMain : 1;
		unsigned read_offlineArea : 1;
		unsigned read_parsecRankingFeatures : 1;
		unsigned read_queryAcceleratorCompletionString : 1;
		unsigned read_query : 1;
		unsigned read_retainSearch : 1;
		unsigned read_serverResultScoreMetadata : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_address : 1;
		unsigned wrote_brandProfile : 1;
		unsigned wrote_business : 1;
		unsigned wrote_category : 1;
		unsigned wrote_clientResolved : 1;
		unsigned wrote_directionIntent : 1;
		unsigned wrote_highlightExtra : 1;
		unsigned wrote_highlightMain : 1;
		unsigned wrote_offlineArea : 1;
		unsigned wrote_parsecRankingFeatures : 1;
		unsigned wrote_queryAcceleratorCompletionString : 1;
		unsigned wrote_query : 1;
		unsigned wrote_retainSearch : 1;
		unsigned wrote_serverResultScoreMetadata : 1;
		unsigned wrote_autocompleteResultCellType : 1;
		unsigned wrote_sortPriority : 1;
		unsigned wrote_type : 1;
		unsigned wrote_enableQueryAcceleratorAffordance : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHighlightMain; 
@property (nonatomic,retain) GEOPDAutocompleteEntryHighlightLine * highlightMain; 
@property (nonatomic,readonly) BOOL hasHighlightExtra; 
@property (nonatomic,retain) GEOPDAutocompleteEntryHighlightLine * highlightExtra; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) GEOPDAutocompleteEntryQuery * query; 
@property (nonatomic,readonly) BOOL hasBusiness; 
@property (nonatomic,retain) GEOPDAutocompleteEntryBusiness * business; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOPDAutocompleteEntryAddress * address; 
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEOPDAutocompleteEntryCategory * category; 
@property (nonatomic,readonly) BOOL hasBrandProfile; 
@property (nonatomic,retain) GEOPDAutocompleteEntryBrandProfile * brandProfile; 
@property (nonatomic,readonly) BOOL hasOfflineArea; 
@property (nonatomic,retain) GEOPDAutocompleteEntryOfflineArea * offlineArea; 
@property (nonatomic,readonly) BOOL hasClientResolved; 
@property (nonatomic,retain) GEOPDAutocompleteEntryClientResolved * clientResolved; 
@property (nonatomic,readonly) BOOL hasDirectionIntent; 
@property (nonatomic,retain) GEOPDAutocompleteEntryDirectionIntent * directionIntent; 
@property (nonatomic,readonly) BOOL hasRetainSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainSearch; 
@property (nonatomic,readonly) BOOL hasParsecRankingFeatures; 
@property (nonatomic,retain) GEOPDParsecRankingFeatures * parsecRankingFeatures; 
@property (assign,nonatomic) BOOL hasSortPriority; 
@property (assign,nonatomic) int sortPriority; 
@property (assign,nonatomic) BOOL hasAutocompleteResultCellType; 
@property (assign,nonatomic) int autocompleteResultCellType; 
@property (nonatomic,readonly) BOOL hasServerResultScoreMetadata; 
@property (nonatomic,retain) GEOPDServerResultScoreMetadata * serverResultScoreMetadata; 
@property (assign,nonatomic) BOOL hasEnableQueryAcceleratorAffordance; 
@property (assign,nonatomic) BOOL enableQueryAcceleratorAffordance; 
@property (nonatomic,readonly) BOOL hasQueryAcceleratorCompletionString; 
@property (nonatomic,retain) NSString * queryAcceleratorCompletionString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOPDAutocompleteEntryQuery *)query;
-(GEOPDAutocompleteEntryCategory *)category;
-(void)setCategory:(GEOPDAutocompleteEntryCategory *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDAutocompleteEntryAddress *)address;
-(void)setQuery:(GEOPDAutocompleteEntryQuery *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasCategory;
-(void)setAddress:(GEOPDAutocompleteEntryAddress *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasAddress;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readQuery;
-(BOOL)hasQuery;
-(void)_readCategory;
-(void)clearSensitiveFields;
-(GEOPDAutocompleteEntryDirectionIntent *)directionIntent;
-(void)setDirectionIntent:(GEOPDAutocompleteEntryDirectionIntent *)arg1 ;
-(BOOL)hasDirectionIntent;
-(void)_readDirectionIntent;
-(void)_readAddress;
-(void)_readBusiness;
-(GEOPDAutocompleteEntryBusiness *)business;
-(void)setBusiness:(GEOPDAutocompleteEntryBusiness *)arg1 ;
-(BOOL)hasBusiness;
-(BOOL)hasHighlightMain;
-(GEOPDAutocompleteEntryHighlightLine *)highlightMain;
-(BOOL)hasHighlightExtra;
-(GEOPDAutocompleteEntryHighlightLine *)highlightExtra;
-(GEOPDAutocompleteEntryClientResolved *)clientResolved;
-(GEOPDRetainedSearchMetadata *)retainSearch;
-(BOOL)hasSortPriority;
-(int)sortPriority;
-(int)autocompleteResultCellType;
-(GEOPDServerResultScoreMetadata *)serverResultScoreMetadata;
-(BOOL)enableQueryAcceleratorAffordance;
-(NSString *)queryAcceleratorCompletionString;
-(void)setSortPriority:(int)arg1 ;
-(void)setHasSortPriority:(BOOL)arg1 ;
-(void)_readHighlightMain;
-(void)_readHighlightExtra;
-(void)_readBrandProfile;
-(void)_readOfflineArea;
-(void)_readClientResolved;
-(void)_readRetainSearch;
-(void)_readParsecRankingFeatures;
-(void)_readServerResultScoreMetadata;
-(void)_readQueryAcceleratorCompletionString;
-(GEOPDAutocompleteEntryBrandProfile *)brandProfile;
-(GEOPDAutocompleteEntryOfflineArea *)offlineArea;
-(GEOPDParsecRankingFeatures *)parsecRankingFeatures;
-(void)setHighlightMain:(GEOPDAutocompleteEntryHighlightLine *)arg1 ;
-(void)setHighlightExtra:(GEOPDAutocompleteEntryHighlightLine *)arg1 ;
-(void)setBrandProfile:(GEOPDAutocompleteEntryBrandProfile *)arg1 ;
-(void)setOfflineArea:(GEOPDAutocompleteEntryOfflineArea *)arg1 ;
-(void)setClientResolved:(GEOPDAutocompleteEntryClientResolved *)arg1 ;
-(void)setRetainSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(void)setParsecRankingFeatures:(GEOPDParsecRankingFeatures *)arg1 ;
-(void)setServerResultScoreMetadata:(GEOPDServerResultScoreMetadata *)arg1 ;
-(void)setQueryAcceleratorCompletionString:(NSString *)arg1 ;
-(BOOL)hasBrandProfile;
-(BOOL)hasOfflineArea;
-(BOOL)hasClientResolved;
-(BOOL)hasRetainSearch;
-(BOOL)hasParsecRankingFeatures;
-(void)setAutocompleteResultCellType:(int)arg1 ;
-(void)setHasAutocompleteResultCellType:(BOOL)arg1 ;
-(BOOL)hasAutocompleteResultCellType;
-(id)autocompleteResultCellTypeAsString:(int)arg1 ;
-(int)StringAsAutocompleteResultCellType:(id)arg1 ;
-(BOOL)hasServerResultScoreMetadata;
-(void)setEnableQueryAcceleratorAffordance:(BOOL)arg1 ;
-(void)setHasEnableQueryAcceleratorAffordance:(BOOL)arg1 ;
-(BOOL)hasEnableQueryAcceleratorAffordance;
-(BOOL)hasQueryAcceleratorCompletionString;
@end

