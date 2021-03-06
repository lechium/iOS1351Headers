/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOStorefrontImagery;

@interface GEOStorefrontView : NSObject {

	unsigned long long _identifier;
	GEOStorefrontImagery* _imageryInfo;
	GEOOrientedPosition _lookAt;

}

@property (nonatomic,readonly) unsigned long long identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) GEOStorefrontImagery * imageryInfo;              //@synthesize imageryInfo=_imageryInfo - In the implementation block
@property (nonatomic,readonly) GEOOrientedPosition lookAt;                      //@synthesize lookAt=_lookAt - In the implementation block
-(id)init;
-(unsigned long long)identifier;
-(id)initWithStorefrontView:(id)arg1 ;
-(GEOOrientedPosition)lookAt;
-(GEOStorefrontImagery *)imageryInfo;
@end

