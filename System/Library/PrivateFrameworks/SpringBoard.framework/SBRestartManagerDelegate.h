/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBRestartManagerDelegate <NSObject>
@optional
-(void)restartManagerWillShutdown:(id)arg1;
-(void)restartManagerWillReboot:(id)arg1;
-(void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
-(void)restartManagerExitImminent:(id)arg1;

@end
