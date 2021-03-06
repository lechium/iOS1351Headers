/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsFeed/NewsFeed-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEThumbnailProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 thumbnailFrame;
	 focalFrame;
	 scale;
	 roundedCorners;
	 cornerRadius;

}

@property (readonly,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(id)init;
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(id)initWithThumbnailAssetHandle:(id)arg1 thumbnailFrame:(CGRect)arg2 focalFrame:(CGRect)arg3 scale:(double)arg4 byRoundingCorners:(unsigned long long)arg5 cornerRadius:(double)arg6 ;
@end

