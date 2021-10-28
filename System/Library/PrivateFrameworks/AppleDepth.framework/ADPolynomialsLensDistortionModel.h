/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleDepth/AppleDepth-Structs.h>
#import <libobjc.A.dylib/ADLensDistortionModel.h>

@class NSString;

@interface ADPolynomialsLensDistortionModel : NSObject <ADLensDistortionModel> {

	ADDistortionPolynomials _polynomials;
	const ADDistortionPolynomials* _distortionPolynomials;
	CGPoint _distortionCenter;

}

@property (nonatomic,readonly) CGPoint distortionCenter;                                          //@synthesize distortionCenter=_distortionCenter - In the implementation block
@property (nonatomic,readonly) const ADDistortionPolynomials* distortionPolynomials;              //@synthesize distortionPolynomials=_distortionPolynomials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
-(CGPoint)distortionCenter;
-(id)initWithDistortionCenter:(CGPoint)arg1 andPloynomials:(const ADDistortionPolynomials*)arg2 ;
-(const ADDistortionPolynomials*)distortionPolynomials;
@end
