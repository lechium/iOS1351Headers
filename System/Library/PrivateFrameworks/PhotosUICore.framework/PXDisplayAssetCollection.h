/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, NSDate;


@protocol PXDisplayAssetCollection <PXDisplayCollection>
@property (nonatomic,readonly) BOOL isEnriched; 
@property (nonatomic,readonly) BOOL isEnrichmentComplete; 
@property (nonatomic,readonly) double promotionScore; 
@property (nonatomic,readonly) BOOL isAggregation; 
@property (nonatomic,readonly) BOOL isRecent; 
@property (nonatomic,readonly) unsigned short px_highlightEnrichmentState; 
@property (nonatomic,readonly) long long px_highlightKind; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedDebugDescription; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSString * localizedDateDescription; 
@property (nonatomic,readonly) NSString * localizedSmartDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSArray *)localizedLocationNames;
-(double)promotionScore;
-(BOOL)isRecent;
-(unsigned long long)estimatedAssetCount;
-(BOOL)isEnriched;
-(id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;
-(BOOL)isEnrichmentComplete;
-(BOOL)isAggregation;
-(unsigned short)px_highlightEnrichmentState;
-(long long)px_highlightKind;
-(NSString *)localizedDebugDescription;
-(NSString *)localizedDateDescription;
-(NSString *)localizedSmartDescription;

@end

