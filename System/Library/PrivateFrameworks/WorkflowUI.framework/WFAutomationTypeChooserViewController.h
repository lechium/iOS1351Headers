/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@protocol WFAutomationTypeChooserViewControllerDelegate;
@class WFHomeManager, NSString;

@interface WFAutomationTypeChooserViewController : UITableViewController <WFHomeManagerEventObserver> {

	id<WFAutomationTypeChooserViewControllerDelegate> _delegate;
	WFHomeManager* _homeManager;

}

@property (nonatomic,readonly) WFHomeManager * homeManager;                                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) id<WFAutomationTypeChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)automationTypeForHomeManager:(id)arg1 ;
-(id<WFAutomationTypeChooserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAutomationTypeChooserViewControllerDelegate>)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)isModalInPresentation;
-(WFHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)choosePersonalAutomation:(id)arg1 ;
-(void)chooseHomeAutomation:(id)arg1 ;
@end

