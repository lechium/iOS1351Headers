/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXOneUpPresentationImplementationDelegate.h>

@class NSString;

@interface PUPXOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)oneUpPresentation:(id)arg1 handlePresentingPinchGestureRecognizer:(id)arg2 ;
-(void)oneUpPresentationInvalidatePresentingGeometry:(id)arg1 ;
-(BOOL)oneUpPresentationCanStop:(id)arg1 ;
-(BOOL)oneUpPresentationCanStart:(id)arg1 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidDisappear:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillDisappear:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidAppear:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillAppear:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg1 stopAnimated:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg1 commitPreviewViewController:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(BOOL)arg3 ;
-(id)previewViewControllerForOneUpPresentation:(id)arg1 allowingActions:(BOOL)arg2 ;
-(BOOL)oneUpPresentation:(id)arg1 startAnimated:(BOOL)arg2 interactiveMode:(long long)arg3 ;
@end
