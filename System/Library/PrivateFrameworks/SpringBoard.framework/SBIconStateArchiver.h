/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SBHIconStateArchiver.h>

@interface SBIconStateArchiver : SBHIconStateArchiver
+(id)modernizeRootArchive:(id)arg1 ;
+(id)iTunesRepresentationFromRootArchive:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)rootArchiveFromITunesRepresentation:(id)arg1 ;
+(id)_iTunesIconListForList:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)_iTunesIconListsForLists:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)_modernIconListsForLists:(id)arg1 allowFolders:(BOOL)arg2 ;
+(id)_modernIconListForList:(id)arg1 allowFolders:(BOOL)arg2 ;
+(id)_migrateLeafIdentifierIfNecessary:(id)arg1 ;
+(id)_modernIconCellForCell:(id)arg1 allowFolders:(BOOL)arg2 ;
+(id)_iTunesIconCellForCell:(id)arg1 preApex:(BOOL)arg2 pending:(BOOL)arg3 iconSource:(id)arg4 ;
+(id)_iTunesDictionaryForLeafIcon:(id)arg1 withIdentifier:(id)arg2 ;
+(id)_iTunesDictionaryForDownloadingIcon:(id)arg1 ;
+(id)_iTunesDictionaryForLeafIdentifier:(id)arg1 ;
@end

