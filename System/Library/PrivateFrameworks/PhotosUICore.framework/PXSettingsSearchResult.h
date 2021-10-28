/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PXSettingsIndexEntry, NSString;

@interface PXSettingsSearchResult : NSObject {

	_PXSettingsIndexEntry* _entry;

}

@property (nonatomic,readonly) _PXSettingsIndexEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(id)init;
-(NSString *)title;
-(NSString *)subtitle;
-(_PXSettingsIndexEntry *)entry;
-(void)revealInSettingsController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithEntry:(id)arg1 ;
@end
