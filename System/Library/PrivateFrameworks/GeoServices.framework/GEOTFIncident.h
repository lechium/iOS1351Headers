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

@class PBDataReader, NSString, NSMutableArray, NSData;

@interface GEOTFIncident : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE77* _geoids;
	NSString* _crossStreet;
	unsigned long long _durationMin;
	double _endOffset;
	NSString* _incidentId;
	NSMutableArray* _infos;
	double _latitude;
	double _longitude;
	NSData* _openlr;
	double _startOffset;
	long long _startTime;
	NSString* _street;
	long long _updateTime;
	NSData* _zilch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _alertCCode;
	int _color;
	float _delay;
	unsigned _laneClosureCount;
	int _laneClosureType;
	unsigned _maxZoomLevel;
	unsigned _minZoomLevel;
	int _significance;
	float _speed;
	int _trafficTrend;
	int _type;
	BOOL _blocked;
	BOOL _endTimeReliable;
	BOOL _hardBlocked;
	BOOL _hidden;
	BOOL _navigationAlert;
	struct {
		unsigned has_durationMin : 1;
		unsigned has_endOffset : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_startOffset : 1;
		unsigned has_startTime : 1;
		unsigned has_updateTime : 1;
		unsigned has_alertCCode : 1;
		unsigned has_color : 1;
		unsigned has_delay : 1;
		unsigned has_laneClosureCount : 1;
		unsigned has_laneClosureType : 1;
		unsigned has_maxZoomLevel : 1;
		unsigned has_minZoomLevel : 1;
		unsigned has_significance : 1;
		unsigned has_speed : 1;
		unsigned has_trafficTrend : 1;
		unsigned has_type : 1;
		unsigned has_blocked : 1;
		unsigned has_endTimeReliable : 1;
		unsigned has_hardBlocked : 1;
		unsigned has_hidden : 1;
		unsigned has_navigationAlert : 1;
		unsigned read_geoids : 1;
		unsigned read_crossStreet : 1;
		unsigned read_incidentId : 1;
		unsigned read_infos : 1;
		unsigned read_openlr : 1;
		unsigned read_street : 1;
		unsigned read_zilch : 1;
		unsigned wrote_geoids : 1;
		unsigned wrote_crossStreet : 1;
		unsigned wrote_durationMin : 1;
		unsigned wrote_endOffset : 1;
		unsigned wrote_incidentId : 1;
		unsigned wrote_infos : 1;
		unsigned wrote_latitude : 1;
		unsigned wrote_longitude : 1;
		unsigned wrote_openlr : 1;
		unsigned wrote_startOffset : 1;
		unsigned wrote_startTime : 1;
		unsigned wrote_street : 1;
		unsigned wrote_updateTime : 1;
		unsigned wrote_zilch : 1;
		unsigned wrote_alertCCode : 1;
		unsigned wrote_color : 1;
		unsigned wrote_delay : 1;
		unsigned wrote_laneClosureCount : 1;
		unsigned wrote_laneClosureType : 1;
		unsigned wrote_maxZoomLevel : 1;
		unsigned wrote_minZoomLevel : 1;
		unsigned wrote_significance : 1;
		unsigned wrote_speed : 1;
		unsigned wrote_trafficTrend : 1;
		unsigned wrote_type : 1;
		unsigned wrote_blocked : 1;
		unsigned wrote_endTimeReliable : 1;
		unsigned wrote_hardBlocked : 1;
		unsigned wrote_hidden : 1;
		unsigned wrote_navigationAlert : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) unsigned long long geoidsCount; 
@property (nonatomic,readonly) long long* geoids; 
@property (nonatomic,retain) NSMutableArray * infos; 
@property (nonatomic,readonly) BOOL hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId; 
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime; 
@property (assign,nonatomic) BOOL hasUpdateTime; 
@property (assign,nonatomic) long long updateTime; 
@property (assign,nonatomic) BOOL hasBlocked; 
@property (assign,nonatomic) BOOL blocked; 
@property (nonatomic,readonly) BOOL hasStreet; 
@property (nonatomic,retain) NSString * street; 
@property (nonatomic,readonly) BOOL hasCrossStreet; 
@property (nonatomic,retain) NSString * crossStreet; 
@property (assign,nonatomic) BOOL hasLaneClosureCount; 
@property (assign,nonatomic) unsigned laneClosureCount; 
@property (assign,nonatomic) BOOL hasEndTimeReliable; 
@property (assign,nonatomic) BOOL endTimeReliable; 
@property (assign,nonatomic) BOOL hasLaneClosureType; 
@property (assign,nonatomic) int laneClosureType; 
@property (assign,nonatomic) BOOL hasHardBlocked; 
@property (assign,nonatomic) BOOL hardBlocked; 
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) double startOffset; 
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) double endOffset; 
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) float delay; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) int significance; 
@property (assign,nonatomic) BOOL hasMinZoomLevel; 
@property (assign,nonatomic) unsigned minZoomLevel; 
@property (assign,nonatomic) BOOL hasMaxZoomLevel; 
@property (assign,nonatomic) unsigned maxZoomLevel; 
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) float speed; 
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL hasTrafficTrend; 
@property (assign,nonatomic) int trafficTrend; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasDurationMin; 
@property (assign,nonatomic) unsigned long long durationMin; 
@property (nonatomic,readonly) BOOL hasZilch; 
@property (nonatomic,retain) NSData * zilch; 
@property (assign,nonatomic) BOOL hasAlertCCode; 
@property (assign,nonatomic) unsigned alertCCode; 
@property (assign,nonatomic) BOOL hasNavigationAlert; 
@property (assign,nonatomic) BOOL navigationAlert; 
@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
+(BOOL)isValid:(id)arg1 ;
+(Class)infoType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(float)delay;
-(void)setDelay:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)color;
-(void)setColor:(int)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(long long)startTime;
-(NSString *)street;
-(void)setStartTime:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(double)startOffset;
-(double)endOffset;
-(void)addInfo:(id)arg1 ;
-(BOOL)hidden;
-(void)setStartOffset:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasColor;
-(void)_readOpenlr;
-(NSData *)openlr;
-(void)setOpenlr:(NSData *)arg1 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setEndOffset:(double)arg1 ;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(BOOL)hasOpenlr;
-(void)_readIncidentId;
-(NSString *)incidentId;
-(void)setIncidentId:(NSString *)arg1 ;
-(BOOL)hasIncidentId;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(long long)updateTime;
-(void)setUpdateTime:(long long)arg1 ;
-(void)setHasUpdateTime:(BOOL)arg1 ;
-(BOOL)hasUpdateTime;
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
-(int)significance;
-(void)_readZilch;
-(NSData *)zilch;
-(void)setZilch:(NSData *)arg1 ;
-(BOOL)hasZilch;
-(void)_readStreet;
-(void)_readCrossStreet;
-(NSString *)crossStreet;
-(void)setStreet:(NSString *)arg1 ;
-(void)setCrossStreet:(NSString *)arg1 ;
-(BOOL)hasStreet;
-(BOOL)hasCrossStreet;
-(BOOL)endTimeReliable;
-(void)setEndTimeReliable:(BOOL)arg1 ;
-(void)setHasEndTimeReliable:(BOOL)arg1 ;
-(BOOL)hasEndTimeReliable;
-(void)setSignificance:(int)arg1 ;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(id)significanceAsString:(int)arg1 ;
-(int)StringAsSignificance:(id)arg1 ;
-(void)_readGeoids;
-(void)_addNoFlagsGeoid:(long long)arg1 ;
-(void)_readInfos;
-(void)_addNoFlagsInfo:(id)arg1 ;
-(unsigned long long)geoidsCount;
-(void)clearGeoids;
-(long long)geoidAtIndex:(unsigned long long)arg1 ;
-(void)addGeoid:(long long)arg1 ;
-(unsigned long long)infosCount;
-(void)clearInfos;
-(id)infoAtIndex:(unsigned long long)arg1 ;
-(long long*)geoids;
-(void)setGeoids:(long long*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)infos;
-(void)setInfos:(NSMutableArray *)arg1 ;
-(BOOL)blocked;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setHasBlocked:(BOOL)arg1 ;
-(BOOL)hasBlocked;
-(BOOL)hardBlocked;
-(void)setHardBlocked:(BOOL)arg1 ;
-(void)setHasHardBlocked:(BOOL)arg1 ;
-(BOOL)hasHardBlocked;
-(void)setHasDelay:(BOOL)arg1 ;
-(BOOL)hasDelay;
-(unsigned)minZoomLevel;
-(void)setMinZoomLevel:(unsigned)arg1 ;
-(void)setHasMinZoomLevel:(BOOL)arg1 ;
-(BOOL)hasMinZoomLevel;
-(unsigned)maxZoomLevel;
-(void)setMaxZoomLevel:(unsigned)arg1 ;
-(void)setHasMaxZoomLevel:(BOOL)arg1 ;
-(BOOL)hasMaxZoomLevel;
-(int)trafficTrend;
-(void)setTrafficTrend:(int)arg1 ;
-(void)setHasTrafficTrend:(BOOL)arg1 ;
-(BOOL)hasTrafficTrend;
-(id)trafficTrendAsString:(int)arg1 ;
-(int)StringAsTrafficTrend:(id)arg1 ;
-(unsigned long long)durationMin;
-(void)setDurationMin:(unsigned long long)arg1 ;
-(void)setHasDurationMin:(BOOL)arg1 ;
-(BOOL)hasDurationMin;
-(unsigned)alertCCode;
-(void)setAlertCCode:(unsigned)arg1 ;
-(void)setHasAlertCCode:(BOOL)arg1 ;
-(BOOL)hasAlertCCode;
@end
