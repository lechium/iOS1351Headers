/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL;

@interface SKUIAssetViewElement : SKUIViewElement {

	double _initialPlaybackTime;
	long long _itemIdentifier;
	NSString* _secureKeyDeliveryType;
	double _playbackDuration;
	NSURL* _url;
	BOOL _ITunesStream;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;

}

@property (assign,nonatomic) double initialPlaybackTime;                             //@synthesize initialPlaybackTime=_initialPlaybackTime - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * secureKeyDeliveryType;                //@synthesize secureKeyDeliveryType=_secureKeyDeliveryType - In the implementation block
@property (getter=isITunesStream,nonatomic,readonly) BOOL ITunesStream;              //@synthesize ITunesStream=_ITunesStream - In the implementation block
@property (nonatomic,retain,readonly) NSURL * keyCertificateURL;                     //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * keyServerURL;                          //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (nonatomic,readonly) double playbackDuration;                              //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                          //@synthesize url=_url - In the implementation block
-(long long)itemIdentifier;
-(NSURL *)URL;
-(double)playbackDuration;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)secureKeyDeliveryType;
-(BOOL)isITunesStream;
@end

