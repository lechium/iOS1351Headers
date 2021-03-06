/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/BWLandmarksInferenceConfiguration.h>

@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration {

	BOOL _detectFacesInFullSizeInput;
	BOOL _skipFaceLandmarkDetection;
	BOOL _includesInvalidContent;

}

@property (assign,nonatomic) BOOL detectFacesInFullSizeInput;              //@synthesize detectFacesInFullSizeInput=_detectFacesInFullSizeInput - In the implementation block
@property (assign,nonatomic) BOOL skipFaceLandmarkDetection;               //@synthesize skipFaceLandmarkDetection=_skipFaceLandmarkDetection - In the implementation block
@property (assign,nonatomic) BOOL includesInvalidContent;                  //@synthesize includesInvalidContent=_includesInvalidContent - In the implementation block
+(id)configuration;
-(BOOL)includesInvalidContent;
-(id)initWithInferenceType:(int)arg1 ;
-(void)setIncludesInvalidContent:(BOOL)arg1 ;
-(void)setDetectFacesInFullSizeInput:(BOOL)arg1 ;
-(BOOL)detectFacesInFullSizeInput;
-(BOOL)skipFaceLandmarkDetection;
-(void)setSkipFaceLandmarkDetection:(BOOL)arg1 ;
@end

