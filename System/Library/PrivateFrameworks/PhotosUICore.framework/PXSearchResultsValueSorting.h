/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate;


@protocol PXSearchResultsValueSorting
@property (nonatomic,readonly) NSString * collectionUUID; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@required
-(NSDate *)date;
-(unsigned long long)numberOfAssets;
-(NSString *)collectionUUID;

@end

