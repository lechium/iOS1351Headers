/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileSafariSettings/SafariSettingsListController.h>

@class WebBookmarkCollection, _SFFolderPickerTableViewCellLayoutManager;

@interface SafariFavoritesFolderPickerContoller : SafariSettingsListController {

	WebBookmarkCollection* _bookmarkCollection;
	_SFFolderPickerTableViewCellLayoutManager* _cellLayoutManager;

}
-(id)init;
-(void)dealloc;
-(void)willBecomeActive;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(void)_showBookmarksBeingSyncedAlert;
@end
