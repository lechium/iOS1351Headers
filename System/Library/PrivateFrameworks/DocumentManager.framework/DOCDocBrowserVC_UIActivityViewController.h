/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivityViewController.h>

@protocol DOCServicePopoverTrackerProtocol;
@class UIBarButtonItem;

@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController {

	id<DOCServicePopoverTrackerProtocol> _popoverTracker;
	UIBarButtonItem* _barButtonItem;

}

@property (retain) id<DOCServicePopoverTrackerProtocol> popoverTracker;              //@synthesize popoverTracker=_popoverTracker - In the implementation block
@property (__weak) UIBarButtonItem * barButtonItem;                                  //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id<DOCServicePopoverTrackerProtocol>)popoverTracker;
-(void)setPopoverTracker:(id<DOCServicePopoverTrackerProtocol>)arg1 ;
@end

