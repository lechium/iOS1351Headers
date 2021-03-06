/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWidgetConfig : PBCodable <NSCopying> {

	double _alternativeButlerWidgetConfigPopulationCeiling;
	double _alternativeButlerWidgetConfigPopulationFloor;
	long long _articleListBackgroundMinimumUpdateInterval;
	long long _articleListForegroundMinimumUpdateInterval;
	long long _backgroundMinimumUpdateInterval;
	long long _forYouBackgroundMinimumUpdateInterval;
	long long _forYouCutoffTime;
	long long _forYouForegroundMinimumUpdateInterval;
	long long _foregroundMinimumUpdateInterval;
	long long _minimumArticleExposureDurationToBePreseen;
	double _parsecPopulationCeiling;
	double _parsecPopulationFloor;
	long long _parsecTrendingCutoffTime;
	long long _topStoriesBackgroundMinimumUpdateInterval;
	long long _topStoriesCutoffTime;
	long long _topStoriesForegroundMinimumUpdateInterval;
	long long _trendingBackgroundMinimumUpdateInterval;
	long long _trendingByParsecBackgroundMinimumUpdateInterval;
	long long _trendingByParsecForegroundMinimumUpdateInterval;
	long long _trendingCutoffTime;
	long long _trendingForegroundMinimumUpdateInterval;
	long long _widgetSectionConfigBackgroundMinimumUpdateInterval;
	long long _widgetSectionConfigForegroundMinimumUpdateInterval;
	unsigned _enabledSections;
	NSString* _identifier;
	unsigned _minimumNumberOfTimesPreseenToBeSeen;
	SCD_Struct_NT29 _has;

}

@property (assign,nonatomic) BOOL hasTopStoriesCutoffTime; 
@property (assign,nonatomic) long long topStoriesCutoffTime;                                            //@synthesize topStoriesCutoffTime=_topStoriesCutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasForYouCutoffTime; 
@property (assign,nonatomic) long long forYouCutoffTime;                                                //@synthesize forYouCutoffTime=_forYouCutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingCutoffTime; 
@property (assign,nonatomic) long long trendingCutoffTime;                                              //@synthesize trendingCutoffTime=_trendingCutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledSections; 
@property (assign,nonatomic) unsigned enabledSections;                                                  //@synthesize enabledSections=_enabledSections - In the implementation block
@property (assign,nonatomic) BOOL hasParsecPopulationFloor; 
@property (assign,nonatomic) double parsecPopulationFloor;                                              //@synthesize parsecPopulationFloor=_parsecPopulationFloor - In the implementation block
@property (assign,nonatomic) BOOL hasParsecPopulationCeiling; 
@property (assign,nonatomic) double parsecPopulationCeiling;                                            //@synthesize parsecPopulationCeiling=_parsecPopulationCeiling - In the implementation block
@property (assign,nonatomic) BOOL hasForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long foregroundMinimumUpdateInterval;                                 //@synthesize foregroundMinimumUpdateInterval=_foregroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long backgroundMinimumUpdateInterval;                                 //@synthesize backgroundMinimumUpdateInterval=_backgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoriesForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long topStoriesForegroundMinimumUpdateInterval;                       //@synthesize topStoriesForegroundMinimumUpdateInterval=_topStoriesForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoriesBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long topStoriesBackgroundMinimumUpdateInterval;                       //@synthesize topStoriesBackgroundMinimumUpdateInterval=_topStoriesBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasForYouForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long forYouForegroundMinimumUpdateInterval;                           //@synthesize forYouForegroundMinimumUpdateInterval=_forYouForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasForYouBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long forYouBackgroundMinimumUpdateInterval;                           //@synthesize forYouBackgroundMinimumUpdateInterval=_forYouBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long trendingForegroundMinimumUpdateInterval;                         //@synthesize trendingForegroundMinimumUpdateInterval=_trendingForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long trendingBackgroundMinimumUpdateInterval;                         //@synthesize trendingBackgroundMinimumUpdateInterval=_trendingBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationFloor; 
@property (assign,nonatomic) double alternativeButlerWidgetConfigPopulationFloor;                       //@synthesize alternativeButlerWidgetConfigPopulationFloor=_alternativeButlerWidgetConfigPopulationFloor - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationCeiling; 
@property (assign,nonatomic) double alternativeButlerWidgetConfigPopulationCeiling;                     //@synthesize alternativeButlerWidgetConfigPopulationCeiling=_alternativeButlerWidgetConfigPopulationCeiling - In the implementation block
@property (assign,nonatomic) BOOL hasParsecTrendingCutoffTime; 
@property (assign,nonatomic) long long parsecTrendingCutoffTime;                                        //@synthesize parsecTrendingCutoffTime=_parsecTrendingCutoffTime - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasArticleListForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long articleListForegroundMinimumUpdateInterval;                      //@synthesize articleListForegroundMinimumUpdateInterval=_articleListForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasArticleListBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long articleListBackgroundMinimumUpdateInterval;                      //@synthesize articleListBackgroundMinimumUpdateInterval=_articleListBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingByParsecForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long trendingByParsecForegroundMinimumUpdateInterval;                 //@synthesize trendingByParsecForegroundMinimumUpdateInterval=_trendingByParsecForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingByParsecBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long trendingByParsecBackgroundMinimumUpdateInterval;                 //@synthesize trendingByParsecBackgroundMinimumUpdateInterval=_trendingByParsecBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionConfigForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long widgetSectionConfigForegroundMinimumUpdateInterval;              //@synthesize widgetSectionConfigForegroundMinimumUpdateInterval=_widgetSectionConfigForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionConfigBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long widgetSectionConfigBackgroundMinimumUpdateInterval;              //@synthesize widgetSectionConfigBackgroundMinimumUpdateInterval=_widgetSectionConfigBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumArticleExposureDurationToBePreseen; 
@property (assign,nonatomic) long long minimumArticleExposureDurationToBePreseen;                       //@synthesize minimumArticleExposureDurationToBePreseen=_minimumArticleExposureDurationToBePreseen - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNumberOfTimesPreseenToBeSeen; 
@property (assign,nonatomic) unsigned minimumNumberOfTimesPreseenToBeSeen;                              //@synthesize minimumNumberOfTimesPreseenToBeSeen=_minimumNumberOfTimesPreseenToBeSeen - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned)enabledSections;
-(long long)forYouForegroundMinimumUpdateInterval;
-(long long)forYouBackgroundMinimumUpdateInterval;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(long long)minimumArticleExposureDurationToBePreseen;
-(unsigned)minimumNumberOfTimesPreseenToBeSeen;
-(long long)foregroundMinimumUpdateInterval;
-(long long)backgroundMinimumUpdateInterval;
-(long long)articleListForegroundMinimumUpdateInterval;
-(long long)articleListBackgroundMinimumUpdateInterval;
-(void)setMinimumArticleExposureDurationToBePreseen:(long long)arg1 ;
-(void)setHasMinimumArticleExposureDurationToBePreseen:(BOOL)arg1 ;
-(BOOL)hasMinimumArticleExposureDurationToBePreseen;
-(void)setMinimumNumberOfTimesPreseenToBeSeen:(unsigned)arg1 ;
-(void)setHasMinimumNumberOfTimesPreseenToBeSeen:(BOOL)arg1 ;
-(BOOL)hasMinimumNumberOfTimesPreseenToBeSeen;
-(void)setTopStoriesCutoffTime:(long long)arg1 ;
-(void)setHasTopStoriesCutoffTime:(BOOL)arg1 ;
-(BOOL)hasTopStoriesCutoffTime;
-(void)setForYouCutoffTime:(long long)arg1 ;
-(void)setHasForYouCutoffTime:(BOOL)arg1 ;
-(BOOL)hasForYouCutoffTime;
-(void)setTrendingCutoffTime:(long long)arg1 ;
-(void)setHasTrendingCutoffTime:(BOOL)arg1 ;
-(BOOL)hasTrendingCutoffTime;
-(void)setEnabledSections:(unsigned)arg1 ;
-(void)setHasEnabledSections:(BOOL)arg1 ;
-(BOOL)hasEnabledSections;
-(void)setParsecPopulationFloor:(double)arg1 ;
-(void)setHasParsecPopulationFloor:(BOOL)arg1 ;
-(BOOL)hasParsecPopulationFloor;
-(void)setParsecPopulationCeiling:(double)arg1 ;
-(void)setHasParsecPopulationCeiling:(BOOL)arg1 ;
-(BOOL)hasParsecPopulationCeiling;
-(void)setForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForegroundMinimumUpdateInterval;
-(void)setBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasBackgroundMinimumUpdateInterval;
-(void)setTopStoriesForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTopStoriesForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTopStoriesForegroundMinimumUpdateInterval;
-(void)setTopStoriesBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTopStoriesBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTopStoriesBackgroundMinimumUpdateInterval;
-(void)setForYouForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasForYouForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForYouForegroundMinimumUpdateInterval;
-(void)setForYouBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasForYouBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForYouBackgroundMinimumUpdateInterval;
-(void)setTrendingForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTrendingForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTrendingForegroundMinimumUpdateInterval;
-(void)setTrendingBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTrendingBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTrendingBackgroundMinimumUpdateInterval;
-(void)setAlternativeButlerWidgetConfigPopulationFloor:(double)arg1 ;
-(void)setHasAlternativeButlerWidgetConfigPopulationFloor:(BOOL)arg1 ;
-(BOOL)hasAlternativeButlerWidgetConfigPopulationFloor;
-(void)setAlternativeButlerWidgetConfigPopulationCeiling:(double)arg1 ;
-(void)setHasAlternativeButlerWidgetConfigPopulationCeiling:(BOOL)arg1 ;
-(BOOL)hasAlternativeButlerWidgetConfigPopulationCeiling;
-(void)setParsecTrendingCutoffTime:(long long)arg1 ;
-(void)setHasParsecTrendingCutoffTime:(BOOL)arg1 ;
-(BOOL)hasParsecTrendingCutoffTime;
-(void)setArticleListForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasArticleListForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasArticleListForegroundMinimumUpdateInterval;
-(void)setArticleListBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasArticleListBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasArticleListBackgroundMinimumUpdateInterval;
-(long long)trendingByParsecForegroundMinimumUpdateInterval;
-(void)setTrendingByParsecForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTrendingByParsecForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTrendingByParsecForegroundMinimumUpdateInterval;
-(long long)trendingByParsecBackgroundMinimumUpdateInterval;
-(void)setTrendingByParsecBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTrendingByParsecBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTrendingByParsecBackgroundMinimumUpdateInterval;
-(long long)widgetSectionConfigForegroundMinimumUpdateInterval;
-(void)setWidgetSectionConfigForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasWidgetSectionConfigForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasWidgetSectionConfigForegroundMinimumUpdateInterval;
-(long long)widgetSectionConfigBackgroundMinimumUpdateInterval;
-(void)setWidgetSectionConfigBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasWidgetSectionConfigBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
-(long long)topStoriesCutoffTime;
-(long long)forYouCutoffTime;
-(long long)trendingCutoffTime;
-(long long)topStoriesForegroundMinimumUpdateInterval;
-(long long)topStoriesBackgroundMinimumUpdateInterval;
-(long long)trendingForegroundMinimumUpdateInterval;
-(long long)trendingBackgroundMinimumUpdateInterval;
-(double)alternativeButlerWidgetConfigPopulationFloor;
-(double)alternativeButlerWidgetConfigPopulationCeiling;
-(long long)parsecTrendingCutoffTime;
@end

