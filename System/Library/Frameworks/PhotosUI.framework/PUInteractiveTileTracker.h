/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUInteractiveTileTrackerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class PUTilingView, PUTileHider, PUTileController;

@interface PUInteractiveTileTracker : NSObject {

	SCD_Struct_PU15 _delegateFlags;
	BOOL _shouldEnd;
	BOOL _shouldFinish;
	PUTilingView* _tilingView;
	id<PUInteractiveTileTrackerDelegate> _delegate;
	double _progress;
	long long __state;
	PUTileHider* __tileHider;
	PUTileController* _trackedTileController;
	PUDisplayVelocity _currentVelocity;

}

@property (assign,setter=_setState:,nonatomic) long long _state;                                //@synthesize _state=__state - In the implementation block
@property (setter=_setTileHider:,nonatomic,retain) PUTileHider * _tileHider;                    //@synthesize _tileHider=__tileHider - In the implementation block
@property (assign,nonatomic) double progress;                                                   //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL shouldEnd;                                                    //@synthesize shouldEnd=_shouldEnd - In the implementation block
@property (assign,nonatomic) BOOL shouldFinish;                                                 //@synthesize shouldFinish=_shouldFinish - In the implementation block
@property (assign,nonatomic) PUDisplayVelocity currentVelocity;                                 //@synthesize currentVelocity=_currentVelocity - In the implementation block
@property (nonatomic,readonly) PUTileController * trackedTileController;                        //@synthesize trackedTileController=_trackedTileController - In the implementation block
@property (nonatomic,readonly) PUTilingView * tilingView;                                       //@synthesize tilingView=_tilingView - In the implementation block
@property (assign,nonatomic,__weak) id<PUInteractiveTileTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PUInteractiveTileTrackerDelegate>)delegate;
-(void)setDelegate:(id<PUInteractiveTileTrackerDelegate>)arg1 ;
-(long long)_state;
-(double)progress;
-(void)update;
-(void)_setState:(long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(PUDisplayVelocity)currentVelocity;
-(PUTilingView *)tilingView;
-(BOOL)shouldFinish;
-(id)initWithTilingView:(id)arg1 ;
-(void)updateGestureRecognizerTracking;
-(void)startTileControllerTracking;
-(void)updateTileControllerTracking;
-(void)stopTileControllerTracking;
-(void)completeTracking;
-(void)configureTileReattachmentContext:(id)arg1 ;
-(id)tileControllerToTrack;
-(void)_updateTrackedTileController;
-(void)_setTrackedTileController:(id)arg1 ;
-(BOOL)shouldEnd;
-(void)setShouldEnd:(BOOL)arg1 ;
-(void)setShouldFinish:(BOOL)arg1 ;
-(void)setCurrentVelocity:(PUDisplayVelocity)arg1 ;
-(PUTileHider *)_tileHider;
-(void)_setTileHider:(id)arg1 ;
-(PUTileController *)trackedTileController;
@end

