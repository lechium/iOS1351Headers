/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@class CLLocation;

@interface PXMemoriesBlacklistPlaceLocationAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec {

	CLLocation* _location;
	double _regionRadius;

}

@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double regionRadius;                //@synthesize regionRadius=_regionRadius - In the implementation block
+(id)specWithLocation:(id)arg1 regionRadius:(double)arg2 ;
-(CLLocation *)location;
-(id)initWithLocation:(id)arg1 regionRadius:(double)arg2 ;
-(double)regionRadius;
@end
