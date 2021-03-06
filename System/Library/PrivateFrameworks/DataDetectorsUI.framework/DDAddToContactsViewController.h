/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DDRemoteActionViewService.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol DDRemoteActionPresenter;
@class DDAction, CNContactViewController, NSString;

@interface DDAddToContactsViewController : UINavigationController <DDRemoteActionViewService, CNContactViewControllerDelegate> {

	id<DDRemoteActionPresenter> _proxy;
	DDAction* _action;
	CNContactViewController* _personViewController;

}

@property (retain) DDAction * action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(id)alternateNameForContact:(id)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(DDAction *)action;
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setAction:(DDAction *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(id)arg1 ;
-(void)contactViewControllerForUnknownContactDidEndAddingToContacts:(id)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(void)prepareForAction:(id)arg1 ;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(void)doneWithAddingContact;
@end

