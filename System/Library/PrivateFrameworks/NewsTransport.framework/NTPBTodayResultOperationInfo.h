/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBSectionSlotCostInfo;

@interface NTPBTodayResultOperationInfo : PBCodable <NSCopying> {

	long long _embedsLimit;
	long long _leadingCellThumbnailSizePreset;
	long long _nonLeadingCellThumbnailSizePreset;
	long long _qualityOfService;
	double _scale;
	double _slotsLimit;
	long long _sourceNameImageSizePreset;
	NSString* _assetsDirectoryFileURLString;
	unsigned _dynamicThumbnailSizePresetMinimumHeightInPixels;
	unsigned _dynamicThumbnailSizePresetMinimumWidthInPixels;
	NSString* _keyboardInputMode;
	NTPBSectionSlotCostInfo* _nonVideoSectionSlotCostInfo;
	NTPBSectionSlotCostInfo* _videoSectionSlotCostInfo;
	BOOL _allowLeadingCell;
	BOOL _allowOnlyWatchEligibleSections;
	BOOL _allowSectionTitles;
	BOOL _fetchWidgetConfig;
	BOOL _preferCompactSectionName;
	BOOL _preferCompactSourceName;
	BOOL _respectsWidgetSlotsLimit;
	BOOL _respectsWidgetVisibleSectionsPerQueueLimit;
	SCD_Struct_NT33 _has;

}

@property (assign,nonatomic) BOOL hasSlotsLimit; 
@property (assign,nonatomic) double slotsLimit;                                                     //@synthesize slotsLimit=_slotsLimit - In the implementation block
@property (assign,nonatomic) BOOL hasRespectsWidgetSlotsLimit; 
@property (assign,nonatomic) BOOL respectsWidgetSlotsLimit;                                         //@synthesize respectsWidgetSlotsLimit=_respectsWidgetSlotsLimit - In the implementation block
@property (assign,nonatomic) BOOL hasPreferCompactSectionName; 
@property (assign,nonatomic) BOOL preferCompactSectionName;                                         //@synthesize preferCompactSectionName=_preferCompactSectionName - In the implementation block
@property (assign,nonatomic) BOOL hasPreferCompactSourceName; 
@property (assign,nonatomic) BOOL preferCompactSourceName;                                          //@synthesize preferCompactSourceName=_preferCompactSourceName - In the implementation block
@property (assign,nonatomic) BOOL hasNonLeadingCellThumbnailSizePreset; 
@property (assign,nonatomic) long long nonLeadingCellThumbnailSizePreset;                           //@synthesize nonLeadingCellThumbnailSizePreset=_nonLeadingCellThumbnailSizePreset - In the implementation block
@property (assign,nonatomic) BOOL hasSourceNameImageSizePreset; 
@property (assign,nonatomic) long long sourceNameImageSizePreset;                                   //@synthesize sourceNameImageSizePreset=_sourceNameImageSizePreset - In the implementation block
@property (assign,nonatomic) BOOL hasQualityOfService; 
@property (assign,nonatomic) long long qualityOfService;                                            //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoSectionSlotCostInfo; 
@property (nonatomic,retain) NTPBSectionSlotCostInfo * videoSectionSlotCostInfo;                    //@synthesize videoSectionSlotCostInfo=_videoSectionSlotCostInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasNonVideoSectionSlotCostInfo; 
@property (nonatomic,retain) NTPBSectionSlotCostInfo * nonVideoSectionSlotCostInfo;                 //@synthesize nonVideoSectionSlotCostInfo=_nonVideoSectionSlotCostInfo - In the implementation block
@property (assign,nonatomic) BOOL hasFetchWidgetConfig; 
@property (assign,nonatomic) BOOL fetchWidgetConfig;                                                //@synthesize fetchWidgetConfig=_fetchWidgetConfig - In the implementation block
@property (assign,nonatomic) BOOL hasAllowOnlyWatchEligibleSections; 
@property (assign,nonatomic) BOOL allowOnlyWatchEligibleSections;                                   //@synthesize allowOnlyWatchEligibleSections=_allowOnlyWatchEligibleSections - In the implementation block
@property (assign,nonatomic) BOOL hasRespectsWidgetVisibleSectionsPerQueueLimit; 
@property (assign,nonatomic) BOOL respectsWidgetVisibleSectionsPerQueueLimit;                       //@synthesize respectsWidgetVisibleSectionsPerQueueLimit=_respectsWidgetVisibleSectionsPerQueueLimit - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsDirectoryFileURLString; 
@property (nonatomic,retain) NSString * assetsDirectoryFileURLString;                               //@synthesize assetsDirectoryFileURLString=_assetsDirectoryFileURLString - In the implementation block
@property (assign,nonatomic) BOOL hasAllowLeadingCell; 
@property (assign,nonatomic) BOOL allowLeadingCell;                                                 //@synthesize allowLeadingCell=_allowLeadingCell - In the implementation block
@property (assign,nonatomic) BOOL hasLeadingCellThumbnailSizePreset; 
@property (assign,nonatomic) long long leadingCellThumbnailSizePreset;                              //@synthesize leadingCellThumbnailSizePreset=_leadingCellThumbnailSizePreset - In the implementation block
@property (assign,nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumWidthInPixels; 
@property (assign,nonatomic) unsigned dynamicThumbnailSizePresetMinimumWidthInPixels;               //@synthesize dynamicThumbnailSizePresetMinimumWidthInPixels=_dynamicThumbnailSizePresetMinimumWidthInPixels - In the implementation block
@property (assign,nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumHeightInPixels; 
@property (assign,nonatomic) unsigned dynamicThumbnailSizePresetMinimumHeightInPixels;              //@synthesize dynamicThumbnailSizePresetMinimumHeightInPixels=_dynamicThumbnailSizePresetMinimumHeightInPixels - In the implementation block
@property (assign,nonatomic) BOOL hasAllowSectionTitles; 
@property (assign,nonatomic) BOOL allowSectionTitles;                                               //@synthesize allowSectionTitles=_allowSectionTitles - In the implementation block
@property (assign,nonatomic) BOOL hasEmbedsLimit; 
@property (assign,nonatomic) long long embedsLimit;                                                 //@synthesize embedsLimit=_embedsLimit - In the implementation block
@property (assign,nonatomic) BOOL hasScale; 
@property (assign,nonatomic) double scale;                                                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyboardInputMode; 
@property (nonatomic,retain) NSString * keyboardInputMode;                                          //@synthesize keyboardInputMode=_keyboardInputMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(double)scale;
-(void)writeTo:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasQualityOfService;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(void)setHasScale:(BOOL)arg1 ;
-(BOOL)hasScale;
-(NSString *)keyboardInputMode;
-(void)setKeyboardInputMode:(NSString *)arg1 ;
-(void)setVideoSectionSlotCostInfo:(NTPBSectionSlotCostInfo *)arg1 ;
-(void)setNonVideoSectionSlotCostInfo:(NTPBSectionSlotCostInfo *)arg1 ;
-(void)setAssetsDirectoryFileURLString:(NSString *)arg1 ;
-(void)setSlotsLimit:(double)arg1 ;
-(void)setHasSlotsLimit:(BOOL)arg1 ;
-(BOOL)hasSlotsLimit;
-(void)setRespectsWidgetSlotsLimit:(BOOL)arg1 ;
-(void)setHasRespectsWidgetSlotsLimit:(BOOL)arg1 ;
-(BOOL)hasRespectsWidgetSlotsLimit;
-(void)setPreferCompactSectionName:(BOOL)arg1 ;
-(void)setHasPreferCompactSectionName:(BOOL)arg1 ;
-(BOOL)hasPreferCompactSectionName;
-(void)setPreferCompactSourceName:(BOOL)arg1 ;
-(void)setHasPreferCompactSourceName:(BOOL)arg1 ;
-(BOOL)hasPreferCompactSourceName;
-(void)setNonLeadingCellThumbnailSizePreset:(long long)arg1 ;
-(void)setHasNonLeadingCellThumbnailSizePreset:(BOOL)arg1 ;
-(BOOL)hasNonLeadingCellThumbnailSizePreset;
-(void)setSourceNameImageSizePreset:(long long)arg1 ;
-(void)setHasSourceNameImageSizePreset:(BOOL)arg1 ;
-(BOOL)hasSourceNameImageSizePreset;
-(BOOL)hasVideoSectionSlotCostInfo;
-(BOOL)hasNonVideoSectionSlotCostInfo;
-(void)setFetchWidgetConfig:(BOOL)arg1 ;
-(void)setHasFetchWidgetConfig:(BOOL)arg1 ;
-(BOOL)hasFetchWidgetConfig;
-(void)setAllowOnlyWatchEligibleSections:(BOOL)arg1 ;
-(void)setHasAllowOnlyWatchEligibleSections:(BOOL)arg1 ;
-(BOOL)hasAllowOnlyWatchEligibleSections;
-(void)setRespectsWidgetVisibleSectionsPerQueueLimit:(BOOL)arg1 ;
-(void)setHasRespectsWidgetVisibleSectionsPerQueueLimit:(BOOL)arg1 ;
-(BOOL)hasRespectsWidgetVisibleSectionsPerQueueLimit;
-(BOOL)hasAssetsDirectoryFileURLString;
-(void)setAllowLeadingCell:(BOOL)arg1 ;
-(void)setHasAllowLeadingCell:(BOOL)arg1 ;
-(BOOL)hasAllowLeadingCell;
-(void)setLeadingCellThumbnailSizePreset:(long long)arg1 ;
-(void)setHasLeadingCellThumbnailSizePreset:(BOOL)arg1 ;
-(BOOL)hasLeadingCellThumbnailSizePreset;
-(void)setDynamicThumbnailSizePresetMinimumWidthInPixels:(unsigned)arg1 ;
-(void)setHasDynamicThumbnailSizePresetMinimumWidthInPixels:(BOOL)arg1 ;
-(BOOL)hasDynamicThumbnailSizePresetMinimumWidthInPixels;
-(void)setDynamicThumbnailSizePresetMinimumHeightInPixels:(unsigned)arg1 ;
-(void)setHasDynamicThumbnailSizePresetMinimumHeightInPixels:(BOOL)arg1 ;
-(BOOL)hasDynamicThumbnailSizePresetMinimumHeightInPixels;
-(void)setAllowSectionTitles:(BOOL)arg1 ;
-(void)setHasAllowSectionTitles:(BOOL)arg1 ;
-(BOOL)hasAllowSectionTitles;
-(void)setEmbedsLimit:(long long)arg1 ;
-(void)setHasEmbedsLimit:(BOOL)arg1 ;
-(BOOL)hasEmbedsLimit;
-(BOOL)hasKeyboardInputMode;
-(double)slotsLimit;
-(BOOL)respectsWidgetSlotsLimit;
-(BOOL)preferCompactSectionName;
-(BOOL)preferCompactSourceName;
-(long long)nonLeadingCellThumbnailSizePreset;
-(long long)sourceNameImageSizePreset;
-(NTPBSectionSlotCostInfo *)videoSectionSlotCostInfo;
-(NTPBSectionSlotCostInfo *)nonVideoSectionSlotCostInfo;
-(BOOL)fetchWidgetConfig;
-(BOOL)allowOnlyWatchEligibleSections;
-(BOOL)respectsWidgetVisibleSectionsPerQueueLimit;
-(NSString *)assetsDirectoryFileURLString;
-(BOOL)allowLeadingCell;
-(long long)leadingCellThumbnailSizePreset;
-(unsigned)dynamicThumbnailSizePresetMinimumWidthInPixels;
-(unsigned)dynamicThumbnailSizePresetMinimumHeightInPixels;
-(BOOL)allowSectionTitles;
-(long long)embedsLimit;
@end

