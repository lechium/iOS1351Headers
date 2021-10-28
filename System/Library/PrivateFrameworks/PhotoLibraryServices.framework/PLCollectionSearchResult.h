/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLSearchResult.h>

@class PSICollectionResult, NSString, NSDate, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult {

	PSICollectionResult* _collectionResult;

}

@property (nonatomic,readonly) PSICollectionResult * collectionResult;              //@synthesize collectionResult=_collectionResult - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) PSIDate * startDate; 
@property (nonatomic,readonly) PSIDate * endDate; 
@property (nonatomic,readonly) unsigned long long collectionType; 
-(unsigned long long)type;
-(PSIDate *)startDate;
-(PSIDate *)endDate;
-(NSString *)uuid;
-(NSString *)title;
-(NSString *)subtitle;
-(unsigned long long)assetCount;
-(NSDate *)sortDate;
-(id)keyAssetUUID;
-(id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2 ;
-(unsigned long long)collectionType;
-(PSICollectionResult *)collectionResult;
@end
