/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SBBulletinWindow, NSMutableSet, SBBulletinRootViewController, UIViewController, UIWindow;

@interface SBBulletinWindowController : NSObject {

	SBBulletinWindow* _bulletinWindow;
	BOOL _rotatingKeyboard;
	BOOL _aboveAssistant;
	NSMutableSet* _windowClients;
	NSMutableSet* _keyClients;
	NSMutableSet* _busyClients;
	NSMutableSet* _busyReasons;
	SBBulletinRootViewController* _rootVC;
	BOOL _wantsKeyWindow;

}

@property (assign,setter=_setWantsKeyWindow:,getter=_wantsKeyWindow,nonatomic) BOOL wantsKeyWindow;              //@synthesize wantsKeyWindow=_wantsKeyWindow - In the implementation block
@property (nonatomic,readonly) UIViewController * rootViewController;                                            //@synthesize rootVC=_rootVC - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                                                                //@synthesize bulletinWindow=_bulletinWindow - In the implementation block
@property (assign,getter=isWindowAboveAssistant,nonatomic) BOOL windowAboveAssistant;                            //@synthesize aboveAssistant=_aboveAssistant - In the implementation block
+(id)sharedInstance;
+(BOOL)_isSecure;
-(id)init;
-(void)dealloc;
-(BOOL)isBusy;
-(UIWindow *)window;
-(UIViewController *)rootViewController;
-(void)setBusy:(BOOL)arg1 forReason:(id)arg2 ;
-(void)addBusyClient:(id)arg1 ;
-(void)removeBusyClient:(id)arg1 ;
-(void)setWindowAboveAssistant:(BOOL)arg1 ;
-(void)addWindowClient:(id)arg1 ;
-(void)removeWindowClient:(id)arg1 ;
-(void)_resignAsKeyWindow;
-(void)_setWantsKeyWindow:(BOOL)arg1 ;
-(void)_becomeKeyWindow;
-(void)_didBecomeKeyWindow:(id)arg1 ;
-(void)_didResignKeyWindow:(id)arg1 ;
-(void)updateKeyWindowStatusIfNecessary;
-(BOOL)_isBusyForReason:(id)arg1 ;
-(void)addWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2 ;
-(BOOL)_hasKeyWindowClients;
-(BOOL)isWindowAboveAssistant;
-(BOOL)_wantsKeyWindow;
@end

