/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewControllerSpec.h>

@class PUSlideshowViewControllerSpecChange;

@interface PUSlideshowViewControllerSpec : PUViewControllerSpec {

	BOOL _isChromeVisible;
	BOOL _isAirplayScreenAvailable;
	BOOL _isAirplayRouteAvailable;
	BOOL _shouldShowChromeBars;
	BOOL _shouldShowPlaceholder;
	BOOL _shouldObserveAirplayRoute;
	BOOL _shouldShowAirplayButton;
	unsigned long long _mode;

}

@property (nonatomic,readonly) PUSlideshowViewControllerSpecChange * currentChange; 
@property (assign,setter=_setShouldShowPlaceholder:,nonatomic) BOOL shouldShowPlaceholder;                      //@synthesize shouldShowPlaceholder=_shouldShowPlaceholder - In the implementation block
@property (assign,setter=_setShouldShowChromeBars:,nonatomic) BOOL shouldShowChromeBars;                        //@synthesize shouldShowChromeBars=_shouldShowChromeBars - In the implementation block
@property (assign,setter=_setShouldObserveAirplayRoute:,nonatomic) BOOL shouldObserveAirplayRoute;              //@synthesize shouldObserveAirplayRoute=_shouldObserveAirplayRoute - In the implementation block
@property (assign,setter=_setShouldShowAirplayButton:,nonatomic) BOOL shouldShowAirplayButton;                  //@synthesize shouldShowAirplayButton=_shouldShowAirplayButton - In the implementation block
@property (assign,setter=setChromeVisible:,nonatomic) BOOL isChromeVisible;                                     //@synthesize isChromeVisible=_isChromeVisible - In the implementation block
@property (assign,setter=setAirplayScreenAvailable:,nonatomic) BOOL isAirplayScreenAvailable;                   //@synthesize isAirplayScreenAvailable=_isAirplayScreenAvailable - In the implementation block
@property (assign,setter=setAirplayRouteAvailable:,nonatomic) BOOL isAirplayRouteAvailable;                     //@synthesize isAirplayRouteAvailable=_isAirplayRouteAvailable - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseChromeBars; 
@property (nonatomic,readonly) BOOL shouldUseTapGesture; 
@property (nonatomic,readonly) BOOL shouldRegisterToAirplay; 
@property (nonatomic,readonly) BOOL shouldPauseWhenAppResignsActive; 
-(id)init;
-(unsigned long long)mode;
-(id)initWithMode:(unsigned long long)arg1 ;
-(void)updateIfNeeded;
-(BOOL)shouldShowPlaceholder;
-(PUSlideshowViewControllerSpecChange *)currentChange;
-(BOOL)isChromeVisible;
-(void)setChromeVisible:(BOOL)arg1 ;
-(id)newSpecChange;
-(BOOL)shouldShowChromeBars;
-(void)setAirplayRouteAvailable:(BOOL)arg1 ;
-(void)setAirplayScreenAvailable:(BOOL)arg1 ;
-(BOOL)shouldShowAirplayButton;
-(BOOL)shouldObserveAirplayRoute;
-(BOOL)isAirplayScreenAvailable;
-(BOOL)shouldRegisterToAirplay;
-(BOOL)shouldPauseWhenAppResignsActive;
-(BOOL)shouldUseTapGesture;
-(BOOL)shouldUseChromeBars;
-(void)_setShouldShowPlaceholder:(BOOL)arg1 ;
-(void)_setShouldShowChromeBars:(BOOL)arg1 ;
-(void)_setShouldObserveAirplayRoute:(BOOL)arg1 ;
-(void)_setShouldShowAirplayButton:(BOOL)arg1 ;
-(BOOL)isAirplayRouteAvailable;
@end

