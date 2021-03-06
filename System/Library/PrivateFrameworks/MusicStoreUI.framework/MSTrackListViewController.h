/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicStoreUI/MSStructuredPageViewController.h>
#import <libobjc.A.dylib/MSTrackListHeaderDelegate.h>

@class MSTrackListHeaderView, NSString;

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate> {

	MSTrackListHeaderView* _headerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadData;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_reloadHeaderView;
-(id)newTermsAndConditionsFooter;
-(void)_webViewsLoaded:(id)arg1 ;
-(void)_reloadFooterView;
-(void)_delayedReloadForWebViews;
-(id)_headerArtworkItemImage;
-(id)_newImageDataProvider;
-(id)_newPlaceholderImage;
-(id)_headerArtworkImage;
-(id)purchasableItemsForHeaderView:(id)arg1 ;
@end

