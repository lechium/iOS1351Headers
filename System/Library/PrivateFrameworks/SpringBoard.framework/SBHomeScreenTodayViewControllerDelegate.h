/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBHomeScreenTodayViewControllerDelegate <NSObject>
@required
-(BOOL)todayViewControllerCanBeginInteractivePullToSearch:(id)arg1;
-(void)todayViewControllerDidBeginInteractivePullToSearch:(id)arg1;
-(void)todayViewController:(id)arg1 didUpdateInteractivePullToSearchWithProgress:(double)arg2;
-(void)todayViewController:(id)arg1 didEndInteractivePullToSearchSuccessfully:(BOOL)arg2;
-(void)todayViewControllerDidFocusSearchField:(id)arg1;

@end

