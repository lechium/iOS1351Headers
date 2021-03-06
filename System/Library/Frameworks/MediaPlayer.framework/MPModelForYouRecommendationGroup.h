/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelObject.h>

@class NSURL, NSDate, NSString, MPSectionedCollection, NSArray;

@interface MPModelForYouRecommendationGroup : MPModelObject {

	NSURL* _refreshURL;
	BOOL _groupRecommendation;

}

@property (assign,nonatomic) unsigned long long groupType; 
@property (nonatomic,retain) NSDate * lastUpdatedDate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) MPSectionedCollection * sectionedItems; 
@property (assign,nonatomic) long long sectionIndex; 
@property (nonatomic,copy) NSArray * subgroups; 
@property (nonatomic,copy) NSURL * loadAdditionalContentURL; 
@property (nonatomic,copy) NSURL * refreshURL; 
@property (assign,getter=isGroupRecommendation,nonatomic) BOOL groupRecommendation;              //@synthesize groupRecommendation=_groupRecommendation - In the implementation block
@property (assign,nonatomic) BOOL displaysAsGridCellInCarPlay; 
+(id)__title_KEY;
+(id)classesForSecureCoding;
+(id)__groupType_KEY;
+(id)__lastUpdatedDate_KEY;
+(id)__sectionedItems_KEY;
+(id)__sectionIndex_KEY;
+(id)__subgroups_KEY;
+(id)__loadAdditionalContentURL_KEY;
+(id)__refreshURL_KEY;
+(id)__displaysAsGridCellInCarPlay_KEY;
-(long long)numberOfItems;
-(id)itemAtIndex:(long long)arg1 ;
-(NSURL *)refreshURL;
-(void)setRefreshURL:(NSURL *)arg1 ;
-(BOOL)isGroupRecommendation;
-(void)setGroupRecommendation:(BOOL)arg1 ;
@end

