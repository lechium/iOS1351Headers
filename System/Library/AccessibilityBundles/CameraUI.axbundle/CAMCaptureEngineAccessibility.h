/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/__CAMCaptureEngineAccessibility_super.h>

@interface CAMCaptureEngineAccessibility : __CAMCaptureEngineAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_handleSessionDidStartRunning:(id)arg1 ;
-(void)_handleSessionDidStopRunning:(id)arg1 ;
-(void)_updateCurrentlyConfiguredObjects;
-(void)_accessibilityDetectFaces:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

