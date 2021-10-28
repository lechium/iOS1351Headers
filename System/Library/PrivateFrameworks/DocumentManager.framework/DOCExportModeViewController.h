/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManager/UIDocumentBrowserViewController.h>
#import <libobjc.A.dylib/DOCTargetSelectionBrowserViewControllerDelegate.h>

@class NSURL, DOCTargetSelectionBrowserViewController;

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate> {

	NSURL* _directoryURLToReveal;
	DOCTargetSelectionBrowserViewController* _moveVC;

}

@property (nonatomic,retain) DOCTargetSelectionBrowserViewController * moveVC;              //@synthesize moveVC=_moveVC - In the implementation block
@property (nonatomic,copy) NSURL * directoryURLToReveal;                                    //@synthesize directoryURLToReveal=_directoryURLToReveal - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDirectoryURLToReveal:(NSURL *)arg1 ;
-(DOCTargetSelectionBrowserViewController *)moveVC;
-(void)setMoveVC:(DOCTargetSelectionBrowserViewController *)arg1 ;
-(NSURL *)directoryURLToReveal;
-(void)targetSelectionControllerWasCancelled:(id)arg1 ;
-(void)targetSelectionController:(id)arg1 didExportToURLs:(id)arg2 ;
@end
