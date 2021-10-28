/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/_TVShelfViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <libobjc.A.dylib/VUISeasonPickerButtonDelegate.h>

@class NSString;

@interface VUIEpisodeShelfViewController : _TVShelfViewController <__TVShelfViewControllerDelegate, VUISeasonPickerButtonDelegate> {

	BOOL _isInitialLoad;

}

@property (assign,nonatomic) BOOL isInitialLoad;                    //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)isInitialLoad;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(void)seasonPickerButtonTapped:(id)arg1 ;
-(void)_updateEpisodeHeaderWithLeftMostItem;
-(id)_episodeHeaderView;
-(unsigned long long)selectedIndexTitleForItemIndexPath:(id)arg1 ;
@end
