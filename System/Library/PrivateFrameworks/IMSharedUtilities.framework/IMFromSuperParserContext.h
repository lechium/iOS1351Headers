/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMAttributedStringParserContext.h>

@class NSMutableArray, NSArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext {

	NSMutableArray* _inlinedFileTransferGUIDs;
	NSMutableArray* _standaloneFileTransferGUIDs;
	BOOL _foundBreadcrumbText;

}

@property (nonatomic,retain,readonly) NSArray * inlinedFileTransferGUIDs;                 //@synthesize inlinedFileTransferGUIDs=_inlinedFileTransferGUIDs - In the implementation block
@property (nonatomic,retain,readonly) NSArray * standaloneFileTransferGUIDs;              //@synthesize standaloneFileTransferGUIDs=_standaloneFileTransferGUIDs - In the implementation block
@property (nonatomic,readonly) BOOL foundBreadcrumbText;                                  //@synthesize foundBreadcrumbText=_foundBreadcrumbText - In the implementation block
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9 ;
-(void)parser:(id)arg1 foundBreadcrumbText:(id)arg2 withOptions:(unsigned)arg3 ;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
-(NSArray *)inlinedFileTransferGUIDs;
-(NSArray *)standaloneFileTransferGUIDs;
-(BOOL)foundBreadcrumbText;
@end

