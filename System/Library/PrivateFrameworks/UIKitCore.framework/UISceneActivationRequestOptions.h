/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIScene;

@interface UISceneActivationRequestOptions : NSObject {

	BOOL _preserveLayout;
	BOOL __requestFullscreen;
	UIScene* _requestingScene;

}

@property (assign,nonatomic) BOOL preserveLayout;                                                //@synthesize preserveLayout=_preserveLayout - In the implementation block
@property (assign,setter=_setRequestFullscreen:,nonatomic) BOOL _requestFullscreen;              //@synthesize _requestFullscreen=__requestFullscreen - In the implementation block
@property (nonatomic,retain) UIScene * requestingScene;                                          //@synthesize requestingScene=_requestingScene - In the implementation block
-(UIScene *)requestingScene;
-(BOOL)preserveLayout;
-(void)setPreserveLayout:(BOOL)arg1 ;
-(BOOL)_requestFullscreen;
-(void)setRequestingScene:(UIScene *)arg1 ;
-(void)_setRequestFullscreen:(BOOL)arg1 ;
@end
