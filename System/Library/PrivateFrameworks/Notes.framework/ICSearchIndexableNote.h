/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol ICSearchIndexableNote <ICSearchIndexable>
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSArray * noteCellKeyPaths; 
@required
-(id)identifier;
-(id)title;
-(id)accountName;
-(id)folderName;
-(id)noteAsPlainTextWithoutTitle;
-(BOOL)isPasswordProtected;
-(BOOL)isModernNote;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(NSArray *)noteCellKeyPaths;
-(id)contentInfoText;
-(id)dateForCurrentSortType;

@end

