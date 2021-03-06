/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <OnBoardingKit/OBTableWelcomeController.h>

@class UITableViewController, NSLayoutConstraint;

@interface STTableWelcomeController : OBTableWelcomeController {

	UITableViewController* _tableViewController;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                    //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) UITableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTableView:(id)arg1 ;
-(UITableViewController *)tableViewController;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(void)_contentSizeDidChangeFrom:(CGSize)arg1 to:(CGSize)arg2 ;
@end

