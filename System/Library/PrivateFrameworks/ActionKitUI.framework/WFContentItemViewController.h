/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class WFContentItem, NSString;

@interface WFContentItemViewController : UITableViewController <UIDocumentInteractionControllerDelegate> {

	WFContentItem* _contentItem;

}

@property (nonatomic,readonly) WFContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(WFContentItem *)contentItem;
-(id)initWithContentItem:(id)arg1 ;
@end
