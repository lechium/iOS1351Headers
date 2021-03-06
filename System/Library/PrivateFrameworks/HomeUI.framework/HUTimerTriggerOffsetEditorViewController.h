/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSignificantEventOffsetPickerDelegate.h>

@protocol HUTimerTriggerOffsetEditorDelegate;
@class NSString, NSDateComponents;

@interface HUTimerTriggerOffsetEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate> {

	NSString* _significantEvent;
	NSDateComponents* _currentOffset;
	id<HUTimerTriggerOffsetEditorDelegate> _delegate;
	NSDateComponents* _selectedOffset;

}

@property (nonatomic,retain) NSDateComponents * selectedOffset;                                   //@synthesize selectedOffset=_selectedOffset - In the implementation block
@property (nonatomic,readonly) NSString * significantEvent;                                       //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,readonly) NSDateComponents * currentOffset;                                  //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<HUTimerTriggerOffsetEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUTimerTriggerOffsetEditorDelegate>)delegate;
-(void)setDelegate:(id<HUTimerTriggerOffsetEditorDelegate>)arg1 ;
-(void)viewDidLoad;
-(NSDateComponents *)currentOffset;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(NSString *)significantEvent;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithSignificantEvent:(id)arg1 currentOffset:(id)arg2 delegate:(id)arg3 ;
-(void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2 ;
-(NSDateComponents *)selectedOffset;
-(void)setSelectedOffset:(NSDateComponents *)arg1 ;
@end

