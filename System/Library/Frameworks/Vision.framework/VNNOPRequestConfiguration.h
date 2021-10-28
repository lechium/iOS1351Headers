/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSupportedImageSize;

@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _detectorWantsAnisotropicScaling;
	VNSupportedImageSize* _detectorPreferredImageSize;
	double _detectorExecutionTimeInterval;

}

@property (nonatomic,retain) VNSupportedImageSize * detectorPreferredImageSize;              //@synthesize detectorPreferredImageSize=_detectorPreferredImageSize - In the implementation block
@property (assign,nonatomic) BOOL detectorWantsAnisotropicScaling;                           //@synthesize detectorWantsAnisotropicScaling=_detectorWantsAnisotropicScaling - In the implementation block
@property (assign,nonatomic) double detectorExecutionTimeInterval;                           //@synthesize detectorExecutionTimeInterval=_detectorExecutionTimeInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(VNSupportedImageSize *)detectorPreferredImageSize;
-(void)setDetectorPreferredImageSize:(VNSupportedImageSize *)arg1 ;
-(BOOL)detectorWantsAnisotropicScaling;
-(void)setDetectorWantsAnisotropicScaling:(BOOL)arg1 ;
-(double)detectorExecutionTimeInterval;
-(void)setDetectorExecutionTimeInterval:(double)arg1 ;
@end
