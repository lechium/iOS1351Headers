/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, GEOMapItemAttribution;


@protocol GEOEncyclopedicInfo <NSObject>
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) BOOL hasStandAloneFactoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@required
-(NSString *)textBlockText;
-(BOOL)hasTextBlock;
-(NSString *)textBlockTitle;
-(BOOL)hasPairOfFactoids;
-(NSArray *)factoids;
-(BOOL)hasStandAloneFactoids;
-(GEOMapItemAttribution *)encyclopedicAttribution;

@end
