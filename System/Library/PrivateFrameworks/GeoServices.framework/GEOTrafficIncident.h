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

@class PBDataReader, NSString, NSMutableArray, GEOLatLng;

@interface GEOTrafficIncident : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE19* _alertCCodes;
	SCD_Struct_GE1* _types;
	NSString* _area;
	NSString* _crossStreetName;
	unsigned long long _durationSeconds;
	NSMutableArray* _incidentDescriptions;
	NSString* _incidentId;
	NSMutableArray* _laneMessages;
	GEOLatLng* _location;
	NSString* _name;
	NSMutableArray* _paths;
	NSString* _primaryStreetName;
	unsigned long long _startTime;
	unsigned long long _updateTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _advisoryType;
	int _color;
	unsigned _delaySeconds;
	unsigned _laneClosureCount;
	int _laneClosureType;
	unsigned _maxZoom;
	unsigned _minZoom;
	float _speedKph;
	int _vendor;
	BOOL _curated;
	BOOL _hidden;
	BOOL _ignored;
	BOOL _navigationAlert;
	struct {
		unsigned has_durationSeconds : 1;
		unsigned has_startTime : 1;
		unsigned has_updateTime : 1;
		unsigned has_advisoryType : 1;
		unsigned has_color : 1;
		unsigned has_delaySeconds : 1;
		unsigned has_laneClosureCount : 1;
		unsigned has_laneClosureType : 1;
		unsigned has_maxZoom : 1;
		unsigned has_minZoom : 1;
		unsigned has_speedKph : 1;
		unsigned has_vendor : 1;
		unsigned has_curated : 1;
		unsigned has_hidden : 1;
		unsigned has_ignored : 1;
		unsigned has_navigationAlert : 1;
		unsigned read_alertCCodes : 1;
		unsigned read_types : 1;
		unsigned read_area : 1;
		unsigned read_crossStreetName : 1;
		unsigned read_incidentDescriptions : 1;
		unsigned read_incidentId : 1;
		unsigned read_laneMessages : 1;
		unsigned read_location : 1;
		unsigned read_name : 1;
		unsigned read_paths : 1;
		unsigned read_primaryStreetName : 1;
		unsigned wrote_alertCCodes : 1;
		unsigned wrote_types : 1;
		unsigned wrote_area : 1;
		unsigned wrote_crossStreetName : 1;
		unsigned wrote_durationSeconds : 1;
		unsigned wrote_incidentDescriptions : 1;
		unsigned wrote_incidentId : 1;
		unsigned wrote_laneMessages : 1;
		unsigned wrote_location : 1;
		unsigned wrote_name : 1;
		unsigned wrote_paths : 1;
		unsigned wrote_primaryStreetName : 1;
		unsigned wrote_startTime : 1;
		unsigned wrote_updateTime : 1;
		unsigned wrote_advisoryType : 1;
		unsigned wrote_color : 1;
		unsigned wrote_delaySeconds : 1;
		unsigned wrote_laneClosureCount : 1;
		unsigned wrote_laneClosureType : 1;
		unsigned wrote_maxZoom : 1;
		unsigned wrote_minZoom : 1;
		unsigned wrote_speedKph : 1;
		unsigned wrote_vendor : 1;
		unsigned wrote_curated : 1;
		unsigned wrote_hidden : 1;
		unsigned wrote_ignored : 1;
		unsigned wrote_navigationAlert : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * paths; 
@property (nonatomic,readonly) unsigned long long typesCount; 
@property (nonatomic,readonly) int* types; 
@property (nonatomic,retain) NSMutableArray * incidentDescriptions; 
@property (nonatomic,readonly) BOOL hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) unsigned long long startTime; 
@property (assign,nonatomic) BOOL hasUpdateTime; 
@property (assign,nonatomic) unsigned long long updateTime; 
@property (assign,nonatomic) BOOL hasDurationSeconds; 
@property (assign,nonatomic) unsigned long long durationSeconds; 
@property (assign,nonatomic) BOOL hasNavigationAlert; 
@property (assign,nonatomic) BOOL navigationAlert; 
@property (assign,nonatomic) BOOL hasLaneClosureCount; 
@property (assign,nonatomic) unsigned laneClosureCount; 
@property (assign,nonatomic) BOOL hasLaneClosureType; 
@property (assign,nonatomic) int laneClosureType; 
@property (assign,nonatomic) BOOL hasDelaySeconds; 
@property (assign,nonatomic) unsigned delaySeconds; 
@property (nonatomic,readonly) unsigned long long alertCCodesCount; 
@property (nonatomic,readonly) unsigned* alertCCodes; 
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL hasSpeedKph; 
@property (assign,nonatomic) float speedKph; 
@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) unsigned minZoom; 
@property (assign,nonatomic) BOOL hasMaxZoom; 
@property (assign,nonatomic) unsigned maxZoom; 
@property (nonatomic,readonly) BOOL hasPrimaryStreetName; 
@property (nonatomic,retain) NSString * primaryStreetName; 
@property (nonatomic,readonly) BOOL hasCrossStreetName; 
@property (nonatomic,retain) NSString * crossStreetName; 
@property (nonatomic,retain) NSMutableArray * laneMessages; 
@property (assign,nonatomic) BOOL hasVendor; 
@property (assign,nonatomic) int vendor; 
@property (assign,nonatomic) BOOL hasCurated; 
@property (assign,nonatomic) BOOL curated; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasIgnored; 
@property (assign,nonatomic) BOOL ignored; 
@property (nonatomic,readonly) BOOL hasArea; 
@property (nonatomic,retain) NSString * area; 
@property (assign,nonatomic) BOOL hasAdvisoryType; 
@property (assign,nonatomic) int advisoryType; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
+(BOOL)isValid:(id)arg1 ;
+(Class)pathType;
+(Class)incidentDescriptionType;
+(Class)laneMessagesType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)writeTo:(id)arg1 ;
-(int)color;
-(void)setColor:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(unsigned long long)startTime;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)paths;
-(int*)types;
-(void)addPath:(id)arg1 ;
-(BOOL)hidden;
-(void)readAll:(BOOL)arg1 ;
-(void)_readPaths;
-(void)_addNoFlagsPath:(id)arg1 ;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocation;
-(void)_readName;
-(NSString *)area;
-(void)setArea:(NSString *)arg1 ;
-(BOOL)hasArea;
-(void)_readLocation;
-(BOOL)hasColor;
-(int)vendor;
-(void)setVendor:(int)arg1 ;
-(void)setHasVendor:(BOOL)arg1 ;
-(BOOL)hasVendor;
-(id)vendorAsString:(int)arg1 ;
-(int)StringAsVendor:(id)arg1 ;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(float)speedKph;
-(void)setSpeedKph:(float)arg1 ;
-(void)setHasSpeedKph:(BOOL)arg1 ;
-(BOOL)hasSpeedKph;
-(void)setMinZoom:(unsigned)arg1 ;
-(unsigned)minZoom;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)hasMinZoom;
-(unsigned)maxZoom;
-(void)setMaxZoom:(unsigned)arg1 ;
-(void)setHasMaxZoom:(BOOL)arg1 ;
-(BOOL)hasMaxZoom;
-(int)advisoryType;
-(void)_readTypes;
-(void)_addNoFlagsType:(int)arg1 ;
-(void)_readIncidentDescriptions;
-(void)_addNoFlagsIncidentDescription:(id)arg1 ;
-(void)_readIncidentId;
-(void)_readAlertCCodes;
-(void)_addNoFlagsAlertCCode:(unsigned)arg1 ;
-(void)_readPrimaryStreetName;
-(void)_readCrossStreetName;
-(void)_readLaneMessages;
-(void)_addNoFlagsLaneMessages:(id)arg1 ;
-(void)_readArea;
-(NSString *)incidentId;
-(NSString *)primaryStreetName;
-(NSString *)crossStreetName;
-(NSMutableArray *)laneMessages;
-(unsigned long long)typesCount;
-(void)clearTypes;
-(int)typeAtIndex:(unsigned long long)arg1 ;
-(void)addType:(int)arg1 ;
-(unsigned long long)incidentDescriptionsCount;
-(void)clearIncidentDescriptions;
-(id)incidentDescriptionAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentDescription:(id)arg1 ;
-(void)setIncidentId:(NSString *)arg1 ;
-(unsigned long long)alertCCodesCount;
-(void)clearAlertCCodes;
-(unsigned)alertCCodeAtIndex:(unsigned long long)arg1 ;
-(void)addAlertCCode:(unsigned)arg1 ;
-(void)setPrimaryStreetName:(NSString *)arg1 ;
-(void)setCrossStreetName:(NSString *)arg1 ;
-(unsigned long long)laneMessagesCount;
-(void)clearLaneMessages;
-(id)laneMessagesAtIndex:(unsigned long long)arg1 ;
-(void)addLaneMessages:(id)arg1 ;
-(void)setTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)typesAsString:(int)arg1 ;
-(int)StringAsTypes:(id)arg1 ;
-(NSMutableArray *)incidentDescriptions;
-(void)setIncidentDescriptions:(NSMutableArray *)arg1 ;
-(BOOL)hasIncidentId;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(unsigned long long)updateTime;
-(void)setUpdateTime:(unsigned long long)arg1 ;
-(void)setHasUpdateTime:(BOOL)arg1 ;
-(BOOL)hasUpdateTime;
-(unsigned long long)durationSeconds;
-(void)setDurationSeconds:(unsigned long long)arg1 ;
-(void)setHasDurationSeconds:(BOOL)arg1 ;
-(BOOL)hasDurationSeconds;
-(BOOL)navigationAlert;
-(void)setNavigationAlert:(BOOL)arg1 ;
-(void)setHasNavigationAlert:(BOOL)arg1 ;
-(BOOL)hasNavigationAlert;
-(unsigned)laneClosureCount;
-(void)setLaneClosureCount:(unsigned)arg1 ;
-(void)setHasLaneClosureCount:(BOOL)arg1 ;
-(BOOL)hasLaneClosureCount;
-(int)laneClosureType;
-(void)setLaneClosureType:(int)arg1 ;
-(void)setHasLaneClosureType:(BOOL)arg1 ;
-(BOOL)hasLaneClosureType;
-(id)laneClosureTypeAsString:(int)arg1 ;
-(int)StringAsLaneClosureType:(id)arg1 ;
-(unsigned)delaySeconds;
-(void)setDelaySeconds:(unsigned)arg1 ;
-(void)setHasDelaySeconds:(BOOL)arg1 ;
-(BOOL)hasDelaySeconds;
-(unsigned*)alertCCodes;
-(void)setAlertCCodes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasPrimaryStreetName;
-(BOOL)hasCrossStreetName;
-(void)setLaneMessages:(NSMutableArray *)arg1 ;
-(BOOL)curated;
-(void)setCurated:(BOOL)arg1 ;
-(void)setHasCurated:(BOOL)arg1 ;
-(BOOL)hasCurated;
-(BOOL)ignored;
-(void)setIgnored:(BOOL)arg1 ;
-(void)setHasIgnored:(BOOL)arg1 ;
-(BOOL)hasIgnored;
-(void)setAdvisoryType:(int)arg1 ;
-(void)setHasAdvisoryType:(BOOL)arg1 ;
-(BOOL)hasAdvisoryType;
-(id)advisoryTypeAsString:(int)arg1 ;
-(int)StringAsAdvisoryType:(id)arg1 ;
@end

