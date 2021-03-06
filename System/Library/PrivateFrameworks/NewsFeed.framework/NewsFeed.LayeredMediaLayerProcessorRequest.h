/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NewsFeed.LayeredMediaLayerProcessorRequest : _UKNOWN_SUPERCLASS_ <TSProcessedImageRequestType> {

	 assetHandles;
	 size;
	 scale;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
@end

