/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UIBarButtonItem, UINavigationController, PXNavigationListDataSectionManager;


@protocol PXNavigationRoot <NSObject>
@property (nonatomic,readonly) NSString * navigationTitle; 
@property (nonatomic,readonly) NSString * navigationIdentifier; 
@property (nonatomic,retain) UIBarButtonItem * navigationDisplayModeButtonItem; 
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) PXNavigationListDataSectionManager * navigationListDataSourceManager; 
@optional
-(void)selectNavigationListItem:(id)arg1 hintIndex:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(PXNavigationListDataSectionManager *)navigationListDataSourceManager;

@required
-(UINavigationController *)navigationController;
-(NSString *)navigationTitle;
-(NSString *)navigationIdentifier;
-(UIBarButtonItem *)navigationDisplayModeButtonItem;
-(void)setNavigationDisplayModeButtonItem:(id)arg1;

@end

