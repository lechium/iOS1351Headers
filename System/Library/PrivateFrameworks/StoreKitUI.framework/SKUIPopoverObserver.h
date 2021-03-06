/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSString;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {

	UIPopoverController* _popoverController;
	SEL _selector;
	id _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(id)initWithPopoverController:(id)arg1 ;
-(void)setTarget:(id)arg1 selector:(SEL)arg2 ;
@end

