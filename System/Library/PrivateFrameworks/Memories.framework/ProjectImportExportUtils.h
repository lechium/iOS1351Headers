/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface ProjectImportExportUtils : NSObject
+(unsigned)getTrailingCount:(id)arg1 delim:(id)arg2 range:(NSRange*)arg3 ;
+(id)incrementTrailingCount:(id)arg1 delim:(id)arg2 ;
+(BOOL)doesProjectFileExistForProject:(id)arg1 ;
+(id)makeUniquePath:(id)arg1 delimiter:(id)arg2 ;
+(BOOL)isValidProjectName:(id)arg1 ;
+(id)exportPathForProject:(id)arg1 ;
+(void)reconnectSharedMediaToProject:(id)arg1 usingDatemap:(id)arg2 ;
@end
