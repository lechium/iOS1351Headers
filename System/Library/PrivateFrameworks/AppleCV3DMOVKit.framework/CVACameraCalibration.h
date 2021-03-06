/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSNumber;

@interface CVACameraCalibration : NSObject <NSSecureCoding> {

	unsigned _imageWidth;
	unsigned _imageHeight;
	NSString* _metadataID;
	double _principalPointX;
	double _principalPointY;
	double _focalLengthX;
	double _focalLengthY;
	long long _lensDistortionModel;
	NSArray* _radialDistortion;
	NSArray* _tangentialDistortion;
	NSArray* _lensOffset;
	NSArray* _chipOffset;
	double _timestampCorrection;
	NSNumber* _readoutTime;
	NSArray* _cameraToIMURotation;
	NSArray* _cameraToIMUTranslation;

}

@property (nonatomic,retain) NSString * metadataID;                         //@synthesize metadataID=_metadataID - In the implementation block
@property (assign,nonatomic) unsigned imageWidth;                           //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) unsigned imageHeight;                          //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) double principalPointX;                        //@synthesize principalPointX=_principalPointX - In the implementation block
@property (assign,nonatomic) double principalPointY;                        //@synthesize principalPointY=_principalPointY - In the implementation block
@property (assign,nonatomic) double focalLengthX;                           //@synthesize focalLengthX=_focalLengthX - In the implementation block
@property (assign,nonatomic) double focalLengthY;                           //@synthesize focalLengthY=_focalLengthY - In the implementation block
@property (assign,nonatomic) long long lensDistortionModel;                 //@synthesize lensDistortionModel=_lensDistortionModel - In the implementation block
@property (nonatomic,retain) NSArray * radialDistortion;                    //@synthesize radialDistortion=_radialDistortion - In the implementation block
@property (nonatomic,retain) NSArray * tangentialDistortion;                //@synthesize tangentialDistortion=_tangentialDistortion - In the implementation block
@property (nonatomic,retain) NSArray * lensOffset;                          //@synthesize lensOffset=_lensOffset - In the implementation block
@property (nonatomic,retain) NSArray * chipOffset;                          //@synthesize chipOffset=_chipOffset - In the implementation block
@property (assign,nonatomic) double timestampCorrection;                    //@synthesize timestampCorrection=_timestampCorrection - In the implementation block
@property (nonatomic,retain) NSNumber * readoutTime;                        //@synthesize readoutTime=_readoutTime - In the implementation block
@property (nonatomic,retain) NSArray * cameraToIMURotation;                 //@synthesize cameraToIMURotation=_cameraToIMURotation - In the implementation block
@property (nonatomic,retain) NSArray * cameraToIMUTranslation;              //@synthesize cameraToIMUTranslation=_cameraToIMUTranslation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)imageHeight;
-(unsigned)imageWidth;
-(void)setImageWidth:(unsigned)arg1 ;
-(void)setImageHeight:(unsigned)arg1 ;
-(NSArray *)radialDistortion;
-(NSArray *)tangentialDistortion;
-(void)setRadialDistortion:(NSArray *)arg1 ;
-(void)setTangentialDistortion:(NSArray *)arg1 ;
-(void)setMetadataID:(NSString *)arg1 ;
-(void)setPrincipalPointX:(double)arg1 ;
-(void)setPrincipalPointY:(double)arg1 ;
-(void)setFocalLengthX:(double)arg1 ;
-(void)setFocalLengthY:(double)arg1 ;
-(void)setLensDistortionModel:(long long)arg1 ;
-(void)setLensOffset:(NSArray *)arg1 ;
-(void)setChipOffset:(NSArray *)arg1 ;
-(void)setTimestampCorrection:(double)arg1 ;
-(void)setReadoutTime:(NSNumber *)arg1 ;
-(void)setCameraToIMURotation:(NSArray *)arg1 ;
-(void)setCameraToIMUTranslation:(NSArray *)arg1 ;
-(NSString *)metadataID;
-(double)principalPointX;
-(double)principalPointY;
-(double)focalLengthX;
-(double)focalLengthY;
-(long long)lensDistortionModel;
-(NSArray *)lensOffset;
-(NSArray *)chipOffset;
-(double)timestampCorrection;
-(NSNumber *)readoutTime;
-(NSArray *)cameraToIMURotation;
-(NSArray *)cameraToIMUTranslation;
@end

