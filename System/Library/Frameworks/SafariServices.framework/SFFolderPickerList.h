/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject {

	unsigned long long _style;
	WebBookmarkCollection* _bookmarkCollection;

}
-(id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2 ;
-(id)folderListItemsIgnoringIdentifiers:(id)arg1 ;
-(void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
-(void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
@end

