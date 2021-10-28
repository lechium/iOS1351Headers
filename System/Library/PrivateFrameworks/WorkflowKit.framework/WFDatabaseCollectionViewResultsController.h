/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDatabaseSectionedResultsController.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSString;

@interface WFDatabaseCollectionViewResultsController : WFDatabaseSectionedResultsController <UICollectionViewDataSource> {

	BOOL _lastChangeIsUserDriven;
	BOOL _loaded;

}

@property (assign,getter=isLoaded,nonatomic) BOOL loaded;              //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) BOOL lastChangeIsUserDriven;              //@synthesize lastChangeIsUserDriven=_lastChangeIsUserDriven - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLoaded;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setLoaded:(BOOL)arg1 ;
-(id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 inCollectionView:(id)arg4 ;
-(void)completedBatchUpdateForSection:(unsigned long long)arg1 ;
-(id)collectionView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)shouldScrollToInsertionAtIndexPath:(id)arg1 ;
-(BOOL)lastChangeIsUserDriven;
-(void)setLastChangeIsUserDriven:(BOOL)arg1 ;
@end
