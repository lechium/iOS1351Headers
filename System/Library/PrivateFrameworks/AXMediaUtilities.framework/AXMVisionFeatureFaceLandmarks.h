/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding> {

	BOOL _is3DLandmarks;
	NSDictionary* _results;

}

@property (assign,nonatomic) BOOL is3DLandmarks;                  //@synthesize is3DLandmarks=_is3DLandmarks - In the implementation block
@property (nonatomic,retain) NSDictionary * results;              //@synthesize results=_results - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unitTestingFaceLandmarksIs3D:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(id)initWithVisionFaceLandmarks:(id)arg1 ;
-(void)setIs3DLandmarks:(BOOL)arg1 ;
-(BOOL)is3DLandmarks;
-(id)pointsArrayForRegion:(id)arg1 ;
-(id)pointValuesForFaceLandmarkType:(unsigned long long)arg1 ;
-(id)localizedStringForLandmarkType:(unsigned long long)arg1 ;
@end
