/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICLegacyContentUtilities : NSObject
+(id)generateContentID;
+(id)suggestedFilenameForURL:(id)arg1 mimeType:(id)arg2 ;
+(id)createAttachmentWithContentID:(id)arg1 mimeType:(id)arg2 data:(id)arg3 filename:(id)arg4 inContext:(id)arg5 ;
+(id)contentStringFromWebArchive:(id)arg1 ;
+(id)createAttachmentFromWebResource:(id)arg1 inContext:(id)arg2 ;
+(id)newNoteBasedOnModernNote:(id)arg1 inFolder:(id)arg2 context:(id)arg3 ;
@end
