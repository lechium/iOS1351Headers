/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject {

	BOOL _animated;
	UIViewController* _viewController;
	unsigned long long _preferredPresentationType;

}

@property (nonatomic,readonly) UIViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) unsigned long long preferredPresentationType;              //@synthesize preferredPresentationType=_preferredPresentationType - In the implementation block
@property (assign,nonatomic) BOOL animated;                                             //@synthesize animated=_animated - In the implementation block
+(id)requestWithViewController:(id)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(unsigned long long)preferredPresentationType;
-(void)setPreferredPresentationType:(unsigned long long)arg1 ;
@end
