/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, CLLocation, NSDate;

@interface PLAssetCluster : NSObject {

	NSArray* _assets;
	CLLocation* _location;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * assets;                   //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
+(id)mergedCluster:(id)arg1 ;
+(id)sortByTimeSortDescriptors;
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(CLLocation *)location;
-(NSArray *)assets;
-(id)initWithAssetsSortedByDate:(id)arg1 region:(id)arg2 ;
@end
