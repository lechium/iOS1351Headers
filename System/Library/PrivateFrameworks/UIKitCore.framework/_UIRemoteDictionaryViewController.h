/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@class NSArray, _UIDictionaryManager, NSMutableDictionary;

@interface _UIRemoteDictionaryViewController : UITableViewController {

	NSArray* _availableDictionaries;
	_UIDictionaryManager* _dictionaryAssetManager;
	NSMutableDictionary* _downloadingAssets;

}

@property (nonatomic,retain) _UIDictionaryManager * dictionaryAssetManager;              //@synthesize dictionaryAssetManager=_dictionaryAssetManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadingAssets;                    //@synthesize downloadingAssets=_downloadingAssets - In the implementation block
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)_cloudBackgroundImage;
-(id)_downloadArrowImage;
-(id)_downloadImageWithTintColor:(id)arg1 ;
-(void)_handleDownloadButton:(id)arg1 ;
-(void)_startDownloadForDictionary:(id)arg1 ;
-(void)setDownloadingAssets:(NSMutableDictionary *)arg1 ;
-(id)_downloadButton;
-(_UIDictionaryManager *)dictionaryAssetManager;
-(void)setDictionaryAssetManager:(_UIDictionaryManager *)arg1 ;
-(NSMutableDictionary *)downloadingAssets;
@end

