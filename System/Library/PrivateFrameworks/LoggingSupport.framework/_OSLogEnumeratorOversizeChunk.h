/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LoggingSupport/LoggingSupport-Structs.h>
@class _OSLogEnumeratorCatalogSubchunk;

@interface _OSLogEnumeratorOversizeChunk : NSObject {

	_OSLogEnumeratorCatalogSubchunk* _subchunk;
	tracev3_chunk_s* _chunk;

}

@property (nonatomic,readonly) unsigned long long timestamp; 
-(long long)compare:(id)arg1 ;
-(unsigned long long)timestamp;
-(id)initWithSubchunk:(id)arg1 chunk:(tracev3_chunk_s*)arg2 ;
-(BOOL)matches:(unsigned)arg1 procinfo:(catalog_procinfo_s*)arg2 ;
-(void)fillMessage:(os_log_message_s*)arg1 ;
-(void)fillProxy:(id)arg1 ;
@end

