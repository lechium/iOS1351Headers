/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol SUIKSearchResultsCollectionViewControllerDelegate;
@class NSArray, UICollectionViewDiffableDataSource;

@interface _SUIKSearchResultsUpdateOperation : NSOperation {

	NSArray* _results;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	id<SUIKSearchResultsCollectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewDiffableDataSource * diffableDataSource;                     //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SUIKSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(NSArray *)results;
-(void)main;
-(void)setResults:(NSArray *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3 ;
@end

