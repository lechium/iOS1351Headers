/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSPredicate;


@protocol WDDataListViewControllerDataProvider <NSObject>
@property (nonatomic,retain) NSPredicate * defaultQueryPredicate; 
@property (nonatomic,readonly) long long cellStyle; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) BOOL textAdjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) double customCellHeight; 
@property (nonatomic,readonly) double customEstimatedCellHeight; 
@property (readonly) BOOL hasCompleteDataSet; 
@property (readonly) BOOL calendarDateSelectorVisible; 
@optional
-(void)viewControllerWantsDataIncludingDate:(id)arg1;
-(BOOL)calendarDateSelectorVisible;
-(BOOL)canEditRowAtIndexPath:(id)arg1;
-(id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
-(BOOL)hasCompleteDataSet;

@required
-(unsigned long long)numberOfSections;
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1;
-(void)deleteAllData;
-(void)stopCollectingData;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2;
-(id)textForObject:(id)arg1;
-(double)customCellHeight;
-(double)customEstimatedCellHeight;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
-(void)customizeTableView:(id)arg1;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
-(id)viewControllerForItemAtIndexPath:(id)arg1;
-(id)secondaryTextForObject:(id)arg1;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3;
-(void)startCollectingDataWithUpdateHandler:(/*^block*/id)arg1;
-(void)viewControllerIsNearEndOfScreen;
-(BOOL)textAdjustsFontSizeToFitWidth;
-(void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(NSPredicate *)defaultQueryPredicate;
-(void)setDefaultQueryPredicate:(id)arg1;

@end

