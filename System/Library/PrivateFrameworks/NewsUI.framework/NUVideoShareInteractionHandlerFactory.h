/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVShareInteractionHandlerFactory.h>

@protocol NUVideoActivityViewControllerFactory, NSSNewsAnalyticsArticleViewingSessionTracker, SVVideoViewControllerProviding, SVVideoPlaybackController, NUURLHandling;
@class NSString;

@interface NUVideoShareInteractionHandlerFactory : NSObject <SVShareInteractionHandlerFactory> {

	id<NUVideoActivityViewControllerFactory> _activityViewControllerFactory;
	id<NSSNewsAnalyticsArticleViewingSessionTracker> _articleViewingSessionTracker;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoPlaybackController> _playbackController;
	id<NUURLHandling> _URLHandler;

}

@property (nonatomic,readonly) id<NUVideoActivityViewControllerFactory> activityViewControllerFactory;                     //@synthesize activityViewControllerFactory=_activityViewControllerFactory - In the implementation block
@property (nonatomic,readonly) id<NSSNewsAnalyticsArticleViewingSessionTracker> articleViewingSessionTracker;              //@synthesize articleViewingSessionTracker=_articleViewingSessionTracker - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;                             //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                                           //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) id<NUURLHandling> URLHandler;                                                               //@synthesize URLHandler=_URLHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SVVideoPlaybackController>)playbackController;
-(id<NUURLHandling>)URLHandler;
-(id)initWithVideoViewControllerProvider:(id)arg1 playbackController:(id)arg2 activityViewControllerFactory:(id)arg3 articleViewingSessionTracker:(id)arg4 URLHandler:(id)arg5 ;
-(id<NUVideoActivityViewControllerFactory>)activityViewControllerFactory;
-(id<NSSNewsAnalyticsArticleViewingSessionTracker>)articleViewingSessionTracker;
@end
