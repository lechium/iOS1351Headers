/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARResultData.h>

@class ARLightEstimate, NSString;

@interface ARLightEstimationData : NSObject <ARResultData> {

	ARLightEstimate* _lightEstimate;

}

@property (nonatomic,retain) ARLightEstimate * lightEstimate;              //@synthesize lightEstimate=_lightEstimate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(ARLightEstimate *)lightEstimate;
-(void)setLightEstimate:(ARLightEstimate *)arg1 ;
@end
