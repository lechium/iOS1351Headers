/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext;

@interface ICIndexHandwritingOperation : NSOperation {

	NSManagedObjectID* _attachmentObjectID;
	NSManagedObjectContext* _context;

}

@property (nonatomic,retain) NSManagedObjectID * attachmentObjectID;              //@synthesize attachmentObjectID=_attachmentObjectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                    //@synthesize context=_context - In the implementation block
+(id)sharedOperationQueue;
-(void)main;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2 ;
-(void)setAttachmentObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)attachmentObjectID;
@end

