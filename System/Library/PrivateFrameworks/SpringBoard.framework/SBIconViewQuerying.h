/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBIconViewQuerying
@required
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
-(BOOL)isDisplayingIconView:(id)arg1;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1;

@end
