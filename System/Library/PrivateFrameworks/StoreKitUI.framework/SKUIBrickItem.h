/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SKUIArtwork, SKUICountdown, SKUIEditorialComponent, SKUILink;

@interface SKUIBrickItem : NSObject {

	NSString* _accessibilityLabel;
	SKUIArtwork* _artwork;
	long long _brickIdentifier;
	SKUICountdown* _countdown;
	SKUIEditorialComponent* _editorial;
	SKUILink* _link;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                   //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * artwork;                           //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long brickIdentifier;                       //@synthesize brickIdentifier=_brickIdentifier - In the implementation block
@property (nonatomic,readonly) SKUICountdown * countdown;                       //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,readonly) SKUIEditorialComponent * editorial;              //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                                 //@synthesize link=_link - In the implementation block
-(id)description;
-(NSString *)accessibilityLabel;
-(SKUILink *)link;
-(SKUIArtwork *)artwork;
-(id)initWithCustomPageContext:(id)arg1 ;
-(SKUICountdown *)countdown;
-(id)initWithBannerRoomContext:(id)arg1 ;
-(SKUIEditorialComponent *)editorial;
-(void)_setLinkItem:(id)arg1 ;
-(id)initWithComponentContext:(id)arg1 ;
-(long long)brickIdentifier;
-(void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2 ;
@end

