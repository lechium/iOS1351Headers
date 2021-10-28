/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol PKTransitTicketDetailDataSource;
@class UIColor;

@interface PKTransitTicketDetailViewController : UITableViewController {

	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	id<PKTransitTicketDetailDataSource> _dataSource;

}

@property (nonatomic,retain) UIColor * primaryTextColor;                                         //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                                       //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (assign,nonatomic,__weak) id<PKTransitTicketDetailDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<PKTransitTicketDetailDataSource>)dataSource;
-(void)setDataSource:(id<PKTransitTicketDetailDataSource>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(id)initWithTransitTicketDetailDataSource:(id)arg1 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg1 ;
@end
