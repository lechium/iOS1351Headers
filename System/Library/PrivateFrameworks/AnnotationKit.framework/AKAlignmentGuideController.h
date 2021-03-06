/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKPageController;

@interface AKAlignmentGuideController : NSObject {

	CGPoint _initialDraggedAnnotationsCombinedCenter;
	CGPoint* _otherAnnotationCenters;
	unsigned long long _otherAnnotationCentersCount;
	BOOL _exifHasFlippedAxes;
	AKPageController* _pageController;
	double _screenToModelScaleFactor;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (assign) BOOL exifHasFlippedAxes;                        //@synthesize exifHasFlippedAxes=_exifHasFlippedAxes - In the implementation block
@property (assign) double screenToModelScaleFactor;                //@synthesize screenToModelScaleFactor=_screenToModelScaleFactor - In the implementation block
-(void)dealloc;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(id)initWithPageController:(id)arg1 ;
-(void)setExifHasFlippedAxes:(BOOL)arg1 ;
-(void)setScreenToModelScaleFactor:(double)arg1 ;
-(double)screenToModelScaleFactor;
-(CGPoint)guideAlignedPointForPoint:(CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3 ;
-(BOOL)exifHasFlippedAxes;
@end

