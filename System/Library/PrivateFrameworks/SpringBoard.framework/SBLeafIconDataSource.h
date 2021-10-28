/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBLeafIconDataSource <NSObject>
@optional
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2;
-(id)icon:(id)arg1 defaultImageWithInfo:(SBIconImageInfo)arg2;
-(id)icon:(id)arg1 unmaskedImageWithInfo:(SBIconImageInfo)arg2;
-(BOOL)iconCanTruncateLabel:(id)arg1;
-(BOOL)iconCanTightenLabel:(id)arg1;
-(long long)progressStateForIcon:(id)arg1;
-(double)progressPercentForIcon:(id)arg1;
-(BOOL)isProgressPausedForIcon:(id)arg1;
-(id)badgeNumberOrStringForIcon:(id)arg1;
-(id)formattedAccessoryStringForIcon:(id)arg1;
-(long long)accessoryTypeForIcon:(id)arg1;
-(long long)labelAccessoryTypeForIcon:(id)arg1;
-(BOOL)isTimedOutForIcon:(id)arg1;
-(BOOL)iconSupportsUninstall:(id)arg1;
-(BOOL)iconCompleteUninstall:(id)arg1;
-(BOOL)iconAllowsLaunch:(id)arg1;
-(BOOL)iconDisallowsLaunchForObscuredReason:(id)arg1;
-(id)icon:(id)arg1 displayNameForObscuredDisabledLaunchForLocation:(id)arg2;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;

@required
-(unsigned long long)priorityForIcon:(id)arg1;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2;

@end
