/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VUIPostPlayConfig, VUINowPlayingConfig, VUIAutoPlayConfig, VUIInAppMessagesConfig;

@interface VUIFeaturesConfiguration : NSObject {

	VUIPostPlayConfig* _postPlayConfig;
	VUINowPlayingConfig* _nowPlayingConfig;
	VUIAutoPlayConfig* _autoPlayConfig;
	VUIInAppMessagesConfig* _inAppMessagesConfig;

}

@property (nonatomic,readonly) VUIPostPlayConfig * postPlayConfig;                        //@synthesize postPlayConfig=_postPlayConfig - In the implementation block
@property (nonatomic,readonly) VUINowPlayingConfig * nowPlayingConfig;                    //@synthesize nowPlayingConfig=_nowPlayingConfig - In the implementation block
@property (nonatomic,readonly) VUIAutoPlayConfig * autoPlayConfig;                        //@synthesize autoPlayConfig=_autoPlayConfig - In the implementation block
@property (nonatomic,readonly) VUIInAppMessagesConfig * inAppMessagesConfig;              //@synthesize inAppMessagesConfig=_inAppMessagesConfig - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)updateWithDictionary:(id)arg1 ;
-(VUIPostPlayConfig *)postPlayConfig;
-(VUINowPlayingConfig *)nowPlayingConfig;
-(VUIInAppMessagesConfig *)inAppMessagesConfig;
-(VUIAutoPlayConfig *)autoPlayConfig;
@end

