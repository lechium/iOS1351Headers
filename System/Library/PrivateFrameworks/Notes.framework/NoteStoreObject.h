/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Notes/Notes-Structs.h>
#import <Notes/NoteCollectionObject.h>

@class NSString, NoteAccountObject, NSSet;

@interface NoteStoreObject : NoteCollectionObject

@property (nonatomic,retain) NSString * externalIdentifier; 
@property (nonatomic,retain) NoteAccountObject * account; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * changes; 
@property (nonatomic,retain) NSString * syncAnchor; 
-(id)collectionInfo;
-(id)predicateForNotes;
-(id)notesForIntegerIds:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)basicAccountIdentifier;
-(id)notesForServerIntIds:(id)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForServerIds:(id)arg1 ;
-(id)notesForGUIDs:(id)arg1 ;
-(id)notesForServerIntIds:(id)arg1 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ;
-(unsigned)maximumServerIntId;
-(unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1 ;
@end

