/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VideosExtrasPlaybackDelegate <NSObject>
@optional
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)extrasBackButtonPressed;

@required
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2;
-(void)extrasRequestReloadWithContext:(id)arg1;
-(void)extrasRequestsPlaybackStop;

@end
