/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSMutableArray, NSArray, NSString;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {

	NSMutableArray* _cumulativeRowOffsets;
	NSArray* _allSubItems;
	NSArray* _subitems;
	NSString* _titleForHeader;

}

@property (nonatomic,retain) NSArray * subitems;                     //@synthesize subitems=_subitems - In the implementation block
@property (nonatomic,retain) NSString * titleForHeader;              //@synthesize titleForHeader=_titleForHeader - In the implementation block
-(void)setData:(id)arg1 ;
-(long long)numberOfRows;
-(NSArray *)subitems;
-(void)setSubitems:(NSArray *)arg1 ;
-(void)setOwningViewController:(id)arg1 ;
-(void)commitEditing;
-(NSString *)titleForHeader;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)setTitleForHeader:(NSString *)arg1 ;
-(void)_getSubitem:(id*)arg1 andSubitemRow:(long long*)arg2 forTableViewRow:(long long)arg3 ;
@end

