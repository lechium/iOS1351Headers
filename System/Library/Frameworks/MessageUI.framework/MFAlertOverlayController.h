/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIWindowScene, UIWindow, UIAlertController;

@interface MFAlertOverlayController : NSObject {

	UIWindowScene* _scene;
	UIWindow* _overlayWindow;

}

@property (nonatomic,retain) UIWindow * overlayWindow;                                 //@synthesize overlayWindow=_overlayWindow - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingAlert; 
@property (nonatomic,readonly) UIAlertController * topmostPresentedAlert; 
+(id)log;
-(void)dealloc;
-(id)initWithWindowScene:(id)arg1 ;
-(UIWindowScene *)scene;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_teardownOverlayWindow;
-(id)_topmostViewController;
-(void)_setupOverlayWindowWithScene:(id)arg1 ;
-(UIWindow *)overlayWindow;
-(void)_handlePresentationDismissalNotification:(id)arg1 ;
-(id)_bottomPresentedAlert;
-(void)setOverlayWindow:(UIWindow *)arg1 ;
-(BOOL)isPresentingAlert;
-(UIAlertController *)topmostPresentedAlert;
@end
