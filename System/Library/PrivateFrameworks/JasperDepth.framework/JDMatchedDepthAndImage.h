/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class JDTimestampedImage, JDTimestampedPointCloud, NSArray;

@interface JDMatchedDepthAndImage : NSObject {

	JDTimestampedImage* _image;
	JDTimestampedPointCloud* _pointCloud;
	NSArray* _originalPointClouds;

}

@property (nonatomic,retain) JDTimestampedImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) JDTimestampedPointCloud * pointCloud;              //@synthesize pointCloud=_pointCloud - In the implementation block
@property (nonatomic,retain) NSArray * originalPointClouds;                     //@synthesize originalPointClouds=_originalPointClouds - In the implementation block
-(JDTimestampedImage *)image;
-(void)setImage:(JDTimestampedImage *)arg1 ;
-(JDTimestampedPointCloud *)pointCloud;
-(void)setPointCloud:(JDTimestampedPointCloud *)arg1 ;
-(NSArray *)originalPointClouds;
-(void)setOriginalPointClouds:(NSArray *)arg1 ;
@end
