/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoInteractionHandlerFactory.h>

@protocol SVVideoPlaybackController, SVVideoProviderProviding;
@class NSString;

@interface SVLearnMoreInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory> {

	id<SVVideoPlaybackController> _playbackController;
	id<SVVideoProviderProviding> _videoProviderProviding;

}

@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                 //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) id<SVVideoProviderProviding> videoProviderProviding;              //@synthesize videoProviderProviding=_videoProviderProviding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SVVideoProviderProviding>)videoProviderProviding;
-(id<SVVideoPlaybackController>)playbackController;
-(id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2 ;
@end
