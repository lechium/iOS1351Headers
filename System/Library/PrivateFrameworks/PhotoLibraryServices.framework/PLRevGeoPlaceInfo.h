/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding> {

	BOOL _hasArea;
	NSString* _placeName;
	double _minimumArea;
	double _maximumArea;

}

@property (nonatomic,copy,readonly) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
@property (nonatomic,readonly) BOOL hasArea;                           //@synthesize hasArea=_hasArea - In the implementation block
@property (nonatomic,readonly) double minimumArea;                     //@synthesize minimumArea=_minimumArea - In the implementation block
@property (nonatomic,readonly) double maximumArea;                     //@synthesize maximumArea=_maximumArea - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasArea;
-(NSString *)placeName;
-(double)maximumArea;
-(id)initWithPlaceName:(id)arg1 ;
-(void)addPlaceInfoArea:(double)arg1 ;
-(double)minimumArea;
@end
