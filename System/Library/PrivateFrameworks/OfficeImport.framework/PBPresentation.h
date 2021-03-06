/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBPresentation : NSObject
+(void)setFontEntites:(id)arg1 environmentHolder:(id)arg2 ;
+(void)setDefaultTextStyleWithEnvironmentHolder:(id)arg1 state:(id)arg2 ;
+(id)drawingGroupHolderWithDocumentContainerHolder:(id)arg1 ;
+(void)readMasterAndLayouts:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3 ;
+(void)readSlides:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6 ;
+(void)readNotes:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 delegate:(id)arg5 ;
+(void)readFrom:(PptBinaryReader*)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5 ;
+(void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2 ;
+(void)readDefaultTextListStyle:(id)arg1 fromDocumentContainer:(id)arg2 state:(id)arg3 ;
+(void)readThemeFromSlideMaster:(id)arg1 document:(id)arg2 theme:(id)arg3 colorMap:(id)arg4 state:(id)arg5 ;
+(void)readTextStylesFromSlideMaster:(id)arg1 toSlideMaster:(id)arg2 state:(id)arg3 ;
+(void)readXmlLayoutsFromSlideMaster:(id)arg1 document:(id)arg2 masterInfo:(id)arg3 state:(id)arg4 ;
+(void)readSlideListWithInstance:(int)arg1 documentContainerHolder:(id)arg2 state:(id)arg3 block:(/*^block*/id)arg4 ;
+(void)scanSlideListForLayoutTypes:(id)arg1 slideListHolder:(id)arg2 masterLayoutMap:(id)arg3 ;
+(void)readCommentAuthorsFrom:(id)arg1 state:(id)arg2 ;
+(void)processLayoutTypesFromDocument:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3 ;
+(void)readTextStyleFromNotesMaster:(id)arg1 toNotesMaster:(id)arg2 slideMaster:(id)arg3 state:(id)arg4 ;
@end

