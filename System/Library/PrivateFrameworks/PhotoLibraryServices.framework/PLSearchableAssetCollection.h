/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate;


@protocol PLSearchableAssetCollection <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@required
-(id)uuid;
-(NSString *)title;
-(NSString *)subtitle;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
-(NSString *)keyAssetUUID;
-(unsigned long long)numberOfAssets;
-(unsigned long long)searchIndexCategory;
-(NSDate *)keyAssetCreationDate;
-(NSDate *)searchableEndDate;
-(NSDate *)searchableStartDate;
-(id)searchIndexContents;

@end
