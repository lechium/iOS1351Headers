/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class NSURL;

@interface VUIActionAppPunchout : VUIAction {

	NSURL* _punchoutURLWithoutAssociatedPlayable;

}

@property (nonatomic,readonly) NSURL * punchoutURLWithoutAssociatedPlayable;              //@synthesize punchoutURLWithoutAssociatedPlayable=_punchoutURLWithoutAssociatedPlayable - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_openPunchoutURL:(id)arg1 isPlaybackURL:(BOOL)arg2 ;
-(NSURL *)punchoutURLWithoutAssociatedPlayable;
@end
