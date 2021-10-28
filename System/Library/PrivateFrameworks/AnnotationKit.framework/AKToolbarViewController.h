/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController {

	AKController* _controller;

}

@property (__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (readonly) BOOL isPresentingPopover; 
+(id)imageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)titleForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1 ;
-(void)teardown;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)revalidateItems;
-(BOOL)isPresentingPopover;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned long long)arg1 ;
@end
