/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXInitialHysteresisNumberFilter, PXChangeDirectionNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject {

	BOOL _didHandleInitialPinch;
	PXInitialHysteresisNumberFilter* _initialDirectionFilter;
	PXChangeDirectionNumberFilter* _scaleDirectionFilter;
	double _lastDirection;
	BOOL _isTrackingPinch;

}

@property (nonatomic,readonly) BOOL isTrackingPinch;              //@synthesize isTrackingPinch=_isTrackingPinch - In the implementation block
-(id)init;
-(void)reset;
-(void)filterPinchGestureWithScale:(double)arg1 initialPinchHandler:(/*^block*/id)arg2 subsequentDirectionChangeHandler:(/*^block*/id)arg3 ;
-(BOOL)isTrackingPinch;
@end
