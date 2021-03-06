/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView {

	BOOL _hasImage;
	id _surface;

}

@property (nonatomic,__weak,readonly) id surface; 
-(id)surface;
-(id)_initWithFrame:(CGRect)arg1 ;
-(void)_addBlackBackground;
-(id)_initWithView:(id)arg1 displayConfiguration:(id)arg2 ;
-(id)initWithContainingBounds:(CGRect)arg1 contentFrame:(CGRect)arg2 statusBarFrame:(CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(BOOL)arg7 preventSplit:(BOOL)arg8 needsZoomFilter:(BOOL)arg9 asyncDecodeImage:(BOOL)arg10 forJail:(BOOL)arg11 ;
-(id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3 ;
@end

