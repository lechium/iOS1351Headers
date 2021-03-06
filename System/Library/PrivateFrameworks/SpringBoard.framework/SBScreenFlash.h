/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, UIScreen, UIWindow, UIView;

@interface SBScreenFlash : NSObject {

	NSMutableArray* _flashCompletionBlocks;
	UIScreen* _screen;
	UIWindow* _flashWindow;
	UIView* _flashView;
	BOOL _windowVisible;

}
+(id)mainScreenFlasher;
-(void)_tearDown;
-(id)initWithScreen:(id)arg1 ;
-(void)flashColor:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2 ;
-(void)_orderWindowOut:(id)arg1 ;
-(void)_createUIWithColor:(id)arg1 ;
-(void)flashWhiteWithCompletion:(/*^block*/id)arg1 ;
@end

