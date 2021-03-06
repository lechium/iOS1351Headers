/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, BPSMultipleWatchMigrationPickerTableView, NSMutableDictionary, NSString;

@interface BPSMultipleWatchMigrationView : UIView <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _migratableDevices;
	unsigned long long _style;
	BPSMultipleWatchMigrationPickerTableView* _devicesTable;
	NSMutableDictionary* _selectedStates;

}

@property (assign,nonatomic) unsigned long long style;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) BPSMultipleWatchMigrationPickerTableView * devicesTable;              //@synthesize devicesTable=_devicesTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedStates;                                 //@synthesize selectedStates=_selectedStates - In the implementation block
@property (nonatomic,retain) NSArray * migratableDevices;                                          //@synthesize migratableDevices=_migratableDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 andStyle:(unsigned long long)arg2 ;
-(void)setMigratableDevices:(NSArray *)arg1 ;
-(id)selectedMigrationDevices;
-(NSArray *)migratableDevices;
-(double)tableHeight;
-(BPSMultipleWatchMigrationPickerTableView *)devicesTable;
-(void)setDevicesTable:(BPSMultipleWatchMigrationPickerTableView *)arg1 ;
-(NSMutableDictionary *)selectedStates;
-(void)setSelectedStates:(NSMutableDictionary *)arg1 ;
@end

