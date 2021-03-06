/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKSystemControllerOpenURLDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject {

	id<MKSystemControllerOpenURLDelegate> _openURLDelegate;

}

@property (assign,nonatomic,__weak) id<MKSystemControllerOpenURLDelegate> openURLDelegate;              //@synthesize openURLDelegate=_openURLDelegate - In the implementation block
+(id)sharedInstance;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)isInternalInstall;
-(int)userInterfaceIdiom;
-(double)screenScale;
-(BOOL)isWifiEnabled;
-(CGSize)screenSize;
-(BOOL)reduceMotionEnabled;
-(BOOL)supportsPitchAPI;
-(BOOL)requiresRTT;
-(BOOL)overrideBlurStyle;
-(BOOL)supports3DImagery;
-(BOOL)supportsAlwaysOnCompass;
-(BOOL)supports3DMaps;
-(BOOL)isDevicePluggedIn;
-(BOOL)isHiDPI;
-(void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)placeDialRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_openURLsOnBackgroundThread;
-(BOOL)_isRunningInLockScreen;
-(BOOL)_shouldUseLaunchServices;
-(id)_defaultOpenURLOptions;
-(id)_transformURLIfNecessary:(id)arg1 ;
-(BOOL)isPhone6PlusOrLarger;
-(void)openURL:(id)arg1 fromScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldCaptureMapViewGestureAnalytics;
-(id<MKSystemControllerOpenURLDelegate>)openURLDelegate;
-(void)setOpenURLDelegate:(id<MKSystemControllerOpenURLDelegate>)arg1 ;
@end

