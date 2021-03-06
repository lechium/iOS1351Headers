/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewControllerSpecChange.h>

@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange {

	BOOL _chromeVisibilityChanged;
	BOOL _shouldShowPlaceholderChanged;
	BOOL _shouldShowChromeBarsChanged;
	BOOL _shouldObserveAirplayRouteChanged;
	BOOL _shouldShowAirplayButtonChanged;

}

@property (assign,setter=_setShouldShowPlaceholderChanged:,nonatomic) BOOL shouldShowPlaceholderChanged;                      //@synthesize shouldShowPlaceholderChanged=_shouldShowPlaceholderChanged - In the implementation block
@property (assign,setter=_setShouldShowChromeBarsChanged:,nonatomic) BOOL shouldShowChromeBarsChanged;                        //@synthesize shouldShowChromeBarsChanged=_shouldShowChromeBarsChanged - In the implementation block
@property (assign,setter=_setShouldObserveAirplayRouteChanged:,nonatomic) BOOL shouldObserveAirplayRouteChanged;              //@synthesize shouldObserveAirplayRouteChanged=_shouldObserveAirplayRouteChanged - In the implementation block
@property (assign,setter=_setShouldShowAirplayButtonChanged:,nonatomic) BOOL shouldShowAirplayButtonChanged;                  //@synthesize shouldShowAirplayButtonChanged=_shouldShowAirplayButtonChanged - In the implementation block
@property (nonatomic,readonly) BOOL chromeVisibilityChanged;                                                                  //@synthesize chromeVisibilityChanged=_chromeVisibilityChanged - In the implementation block
-(BOOL)changed;
-(BOOL)chromeVisibilityChanged;
-(BOOL)shouldShowPlaceholderChanged;
-(BOOL)shouldShowAirplayButtonChanged;
-(BOOL)shouldObserveAirplayRouteChanged;
-(BOOL)shouldShowChromeBarsChanged;
-(void)_setShouldShowPlaceholderChanged:(BOOL)arg1 ;
-(void)_setShouldShowChromeBarsChanged:(BOOL)arg1 ;
-(void)_setShouldObserveAirplayRouteChanged:(BOOL)arg1 ;
-(void)_setShouldShowAirplayButtonChanged:(BOOL)arg1 ;
@end

