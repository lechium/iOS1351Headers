/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EKRecurrenceChooserController.h>
#import <libobjc.A.dylib/EKUIDividedGridViewControllerDelegate.h>

@class EKUIDividedGridViewTableViewCell, NSString;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {

	EKUIDividedGridViewTableViewCell* _tableViewCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForDisplay;
-(id)tableViewCell;
-(void)refreshCells;
-(id)allCells;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)dividedGridViewControllerDidLayout:(id)arg1 ;
-(void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3 ;
@end

