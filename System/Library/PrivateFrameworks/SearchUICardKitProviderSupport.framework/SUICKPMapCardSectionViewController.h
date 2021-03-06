/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUICardKitProviderSupport/SearchUICardKitProviderSupport-Structs.h>
#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>
#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate.h>

@protocol CRKCardSectionView;
@class UIView, CRKContainerCardSectionView, NSString;

@interface SUICKPMapCardSectionViewController : SUICKPInteractiveCardSectionViewController <SearchUIFeedbackDelegate> {

	BOOL _needsToLoadCardSectionView;
	BOOL _inTrackingRunLoopMode;
	UIView*<CRKCardSectionView> _mapSectionView;
	CFRunLoopObserverRef _mainRunLoopObserverRef;

}

@property (nonatomic,retain) CRKContainerCardSectionView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateContentSize;
-(void)didEngageCardSection:(id)arg1 ;
-(id)_mapCardSection;
-(void)_loadCardSectionView;
-(id)_initWithCardSection:(id)arg1 ;
-(void)_loadCardSectionViewIfNeeded;
-(void)_snapshotCardSectionView;
-(BOOL)_shouldAttemptToSnapshotMapView;
-(id)_viewSnapshot;
-(void)_loadMapCardSectionView;
@end

