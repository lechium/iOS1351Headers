/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSPredicate, NSString, UIPickerView;

@interface PUBehavioralCurationCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSPredicate* _predicate;
	NSString* _selectionName;
	BOOL _sortAscending;
	UIPickerView* _scorePickerView;
	UIPickerView* _sortPickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_update;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_editSettings:(id)arg1 ;
-(void)_doneEditingSettings:(id)arg1 ;
-(BOOL)shouldShowToolbar;
-(id)newToolbarItems;
-(id)selectionNames;
-(id)_goldAssetUUIDs;
-(id)predicateForSelectionName:(id)arg1 ;
-(id)sortDescriptorForSelectionName:(id)arg1 ;
-(id)phScoreKeyPathsForSelectionName:(id)arg1 ;
-(double)semanticScoreFromBehavioralScore:(double)arg1 ;
@end

