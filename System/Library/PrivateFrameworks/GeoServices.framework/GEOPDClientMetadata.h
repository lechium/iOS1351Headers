/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOABSecondPartyPlaceRequestClientMetaData, GEOAdditionalEnabledMarkets, NSMutableArray, NSString, GEOLocation, GEOLocalizationCapabilities;

@interface GEOPDClientMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _knownClientResolvedTypeDeprecateds;
	SCD_Struct_GE1* _knownClientResolvedTypes;
	GEOABSecondPartyPlaceRequestClientMetaData* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	NSMutableArray* _businessChatPreflightIdentifiers;
	NSString* _debugApiKey;
	NSString* _deviceCountryCode;
	NSString* _deviceDisplayLanguage;
	GEOLocation* _deviceExtendedLocation;
	NSMutableArray* _deviceHistoricalLocations;
	NSString* _deviceKeyboardLanguage;
	NSString* _deviceSku;
	NSString* _deviceSpokenLanguage;
	GEOLocalizationCapabilities* _localizationCapabilities;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _clientRevision;
	unsigned _dayOfWeek;
	unsigned _hourOfDay;
	int _requiredVersion;
	int _resultListAttributionSupport;
	unsigned _timeSinceMapEnteredForeground;
	BOOL _enablePreflightVenues;
	struct {
		unsigned has_clientRevision : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_hourOfDay : 1;
		unsigned has_requiredVersion : 1;
		unsigned has_resultListAttributionSupport : 1;
		unsigned has_timeSinceMapEnteredForeground : 1;
		unsigned has_enablePreflightVenues : 1;
		unsigned read_unknownFields : 1;
		unsigned read_knownClientResolvedTypeDeprecateds : 1;
		unsigned read_knownClientResolvedTypes : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_businessChatPreflightIdentifiers : 1;
		unsigned read_debugApiKey : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceDisplayLanguage : 1;
		unsigned read_deviceExtendedLocation : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_deviceKeyboardLanguage : 1;
		unsigned read_deviceSku : 1;
		unsigned read_deviceSpokenLanguage : 1;
		unsigned read_localizationCapabilities : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_knownClientResolvedTypeDeprecateds : 1;
		unsigned wrote_knownClientResolvedTypes : 1;
		unsigned wrote_abClientMetadata : 1;
		unsigned wrote_additionalEnabledMarkets : 1;
		unsigned wrote_businessChatPreflightIdentifiers : 1;
		unsigned wrote_debugApiKey : 1;
		unsigned wrote_deviceCountryCode : 1;
		unsigned wrote_deviceDisplayLanguage : 1;
		unsigned wrote_deviceExtendedLocation : 1;
		unsigned wrote_deviceHistoricalLocations : 1;
		unsigned wrote_deviceKeyboardLanguage : 1;
		unsigned wrote_deviceSku : 1;
		unsigned wrote_deviceSpokenLanguage : 1;
		unsigned wrote_localizationCapabilities : 1;
		unsigned wrote_clientRevision : 1;
		unsigned wrote_dayOfWeek : 1;
		unsigned wrote_hourOfDay : 1;
		unsigned wrote_requiredVersion : 1;
		unsigned wrote_resultListAttributionSupport : 1;
		unsigned wrote_timeSinceMapEnteredForeground : 1;
		unsigned wrote_enablePreflightVenues : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abClientMetadata; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceDisplayLanguage; 
@property (nonatomic,retain) NSString * deviceDisplayLanguage; 
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLanguage; 
@property (nonatomic,retain) NSString * deviceKeyboardLanguage; 
@property (nonatomic,readonly) BOOL hasDeviceSpokenLanguage; 
@property (nonatomic,retain) NSString * deviceSpokenLanguage; 
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (assign,nonatomic) BOOL hasResultListAttributionSupport; 
@property (assign,nonatomic) int resultListAttributionSupport; 
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (nonatomic,readonly) BOOL hasDeviceExtendedLocation; 
@property (nonatomic,retain) GEOLocation * deviceExtendedLocation; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
@property (assign,nonatomic) BOOL hasRequiredVersion; 
@property (assign,nonatomic) int requiredVersion; 
@property (nonatomic,readonly) BOOL hasDebugApiKey; 
@property (nonatomic,retain) NSString * debugApiKey; 
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypeDeprecatedsCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypeDeprecateds; 
@property (assign,nonatomic) BOOL hasEnablePreflightVenues; 
@property (assign,nonatomic) BOOL enablePreflightVenues; 
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypesCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypes; 
@property (nonatomic,retain) NSMutableArray * businessChatPreflightIdentifiers; 
@property (assign,nonatomic) BOOL hasClientRevision; 
@property (assign,nonatomic) int clientRevision; 
@property (nonatomic,readonly) BOOL hasLocalizationCapabilities; 
@property (nonatomic,retain) GEOLocalizationCapabilities * localizationCapabilities; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)deviceHistoricalLocationType;
+(Class)businessChatPreflightIdentifierType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)dayOfWeek;
-(unsigned)hourOfDay;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(int)requiredVersion;
-(void)setRequiredVersion:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(BOOL)hasDeviceExtendedLocation;
-(GEOLocation *)deviceExtendedLocation;
-(unsigned long long)deviceHistoricalLocationsCount;
-(NSMutableArray *)deviceHistoricalLocations;
-(void)_readAdditionalEnabledMarkets;
-(void)_readAbClientMetadata;
-(void)_readDeviceHistoricalLocations;
-(void)_addNoFlagsDeviceHistoricalLocation:(id)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abClientMetadata;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasAbClientMetadata;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(void)_readDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(unsigned)timeSinceMapEnteredForeground;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)_readDeviceDisplayLanguage;
-(void)_readDeviceKeyboardLanguage;
-(void)_readDeviceSpokenLanguage;
-(void)_readDeviceExtendedLocation;
-(void)_readDebugApiKey;
-(void)_readKnownClientResolvedTypeDeprecateds;
-(void)_addNoFlagsKnownClientResolvedTypeDeprecated:(int)arg1 ;
-(void)_readKnownClientResolvedTypes;
-(void)_addNoFlagsKnownClientResolvedType:(int)arg1 ;
-(void)_readBusinessChatPreflightIdentifiers;
-(void)_addNoFlagsBusinessChatPreflightIdentifier:(id)arg1 ;
-(void)_readLocalizationCapabilities;
-(void)_readDeviceSku;
-(NSString *)deviceDisplayLanguage;
-(NSString *)deviceKeyboardLanguage;
-(NSString *)deviceSpokenLanguage;
-(NSString *)debugApiKey;
-(NSMutableArray *)businessChatPreflightIdentifiers;
-(GEOLocalizationCapabilities *)localizationCapabilities;
-(NSString *)deviceSku;
-(void)setDeviceExtendedLocation:(GEOLocation *)arg1 ;
-(void)setDeviceDisplayLanguage:(NSString *)arg1 ;
-(void)setDeviceKeyboardLanguage:(NSString *)arg1 ;
-(void)setDeviceSpokenLanguage:(NSString *)arg1 ;
-(void)setDebugApiKey:(NSString *)arg1 ;
-(unsigned long long)knownClientResolvedTypeDeprecatedsCount;
-(void)clearKnownClientResolvedTypeDeprecateds;
-(int)knownClientResolvedTypeDeprecatedAtIndex:(unsigned long long)arg1 ;
-(void)addKnownClientResolvedTypeDeprecated:(int)arg1 ;
-(unsigned long long)knownClientResolvedTypesCount;
-(void)clearKnownClientResolvedTypes;
-(int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1 ;
-(void)addKnownClientResolvedType:(int)arg1 ;
-(unsigned long long)businessChatPreflightIdentifiersCount;
-(void)clearBusinessChatPreflightIdentifiers;
-(id)businessChatPreflightIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)addBusinessChatPreflightIdentifier:(id)arg1 ;
-(void)setLocalizationCapabilities:(GEOLocalizationCapabilities *)arg1 ;
-(void)setDeviceSku:(NSString *)arg1 ;
-(BOOL)hasDeviceDisplayLanguage;
-(BOOL)hasDeviceKeyboardLanguage;
-(BOOL)hasDeviceSpokenLanguage;
-(int)resultListAttributionSupport;
-(void)setResultListAttributionSupport:(int)arg1 ;
-(void)setHasResultListAttributionSupport:(BOOL)arg1 ;
-(BOOL)hasResultListAttributionSupport;
-(id)resultListAttributionSupportAsString:(int)arg1 ;
-(int)StringAsResultListAttributionSupport:(id)arg1 ;
-(void)setHourOfDay:(unsigned)arg1 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(BOOL)hasHourOfDay;
-(void)setHasRequiredVersion:(BOOL)arg1 ;
-(BOOL)hasRequiredVersion;
-(id)requiredVersionAsString:(int)arg1 ;
-(int)StringAsRequiredVersion:(id)arg1 ;
-(BOOL)hasDebugApiKey;
-(int*)knownClientResolvedTypeDeprecateds;
-(void)setKnownClientResolvedTypeDeprecateds:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypeDeprecatedsAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg1 ;
-(BOOL)enablePreflightVenues;
-(void)setEnablePreflightVenues:(BOOL)arg1 ;
-(void)setHasEnablePreflightVenues:(BOOL)arg1 ;
-(BOOL)hasEnablePreflightVenues;
-(int*)knownClientResolvedTypes;
-(void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypesAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypes:(id)arg1 ;
-(void)setBusinessChatPreflightIdentifiers:(NSMutableArray *)arg1 ;
-(int)clientRevision;
-(void)setClientRevision:(int)arg1 ;
-(void)setHasClientRevision:(BOOL)arg1 ;
-(BOOL)hasClientRevision;
-(id)clientRevisionAsString:(int)arg1 ;
-(int)StringAsClientRevision:(id)arg1 ;
-(BOOL)hasLocalizationCapabilities;
-(BOOL)hasDeviceSku;
-(void)clearLocations;
@end

