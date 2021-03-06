/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/JDCameraCalibrationData.h>

@class NSData;

@interface JDMutableCameraCalibrationData : JDCameraCalibrationData

@property (assign,nonatomic) SCD_Struct_JD24 intrinsicMatrix; 
@property (assign,nonatomic) CGSize referenceDimensions; 
@property (assign,nonatomic) SCD_Struct_JD25 cameraToPlatformTransform; 
@property (assign,nonatomic) float pixelSize; 
@property (assign,nonatomic) CGPoint lensDistortionCenter; 
@property (assign,nonatomic) int distortionModel; 
@property (nonatomic,retain) NSData * distortedRadii; 
@property (nonatomic,retain) NSData * undistortedRadii; 
@property (assign,nonatomic) JDGDCPolynomials* distortionPolynomials; 
-(void)setPixelSize:(float)arg1 ;
-(void)setIntrinsicMatrix:(SCD_Struct_JD24)arg1 ;
-(void)setLensDistortionCenter:(CGPoint)arg1 ;
-(void)setReferenceDimensions:(CGSize)arg1 ;
-(void)setCameraToPlatformTransform:(SCD_Struct_JD25)arg1 ;
-(void)setDistortionModel:(int)arg1 ;
-(void)setDistortedRadii:(NSData *)arg1 ;
-(void)setUndistortedRadii:(NSData *)arg1 ;
-(void)setDistortionPolynomials:(JDGDCPolynomials*)arg1 ;
@end

