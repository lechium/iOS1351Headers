/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PMLDataChunk : NSObject <NSCopying> {

	NSData* _backingData;
	NSData* _superdata;

}
+(unsigned)dataChunkType;
+(id)chunkOfType:(unsigned)arg1 data:(id)arg2 superdata:(id)arg3 ;
+(id)chunksFromFileAtPath:(id)arg1 ;
+(id)chunksFromData:(id)arg1 ;
+(id)serializeChunks:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setSuperdata:(id)arg1 ;
@end
