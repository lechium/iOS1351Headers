/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionFetchDescriptor.h>

@class NTPBItemsTodaySectionSpecificConfig, NTCatchUpOperationArticleIDsRequest, NSString;

@interface NTItemsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {

	NTPBItemsTodaySectionSpecificConfig* _itemsConfiguration;
	NTCatchUpOperationArticleIDsRequest* _itemsArticlesRequest;

}

@property (nonatomic,copy) NTPBItemsTodaySectionSpecificConfig * itemsConfiguration;                //@synthesize itemsConfiguration=_itemsConfiguration - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationArticleIDsRequest * itemsArticlesRequest;              //@synthesize itemsArticlesRequest=_itemsArticlesRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(NTCatchUpOperationArticleIDsRequest *)itemsArticlesRequest;
-(NTPBItemsTodaySectionSpecificConfig *)itemsConfiguration;
-(id)initWithItemsConfiguration:(id)arg1 ;
-(void)setItemsConfiguration:(NTPBItemsTodaySectionSpecificConfig *)arg1 ;
-(void)setItemsArticlesRequest:(NTCatchUpOperationArticleIDsRequest *)arg1 ;
@end

