/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {

	NSMutableDictionary* _iconURLStringToInfoDictionary;
	NSMutableDictionary* _iconUUIDToURLStringDictionary;

}
-(id)init;
-(void)removeAllRecords;
-(void)removeRecordForIconUUIDs:(id)arg1 ;
-(void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 ;
-(id)iconInfoForURLString:(id)arg1 ;
-(id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id*)arg2 size:(CGSize*)arg3 ;
@end
