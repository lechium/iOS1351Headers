/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MetalTools/MetalTools-Structs.h>
@interface MTLCountersTraceCommandEncoder : NSObject {

	BinaryBuffer* _stream;
	unsigned long long _flags;
	NSRange _segment;

}

@property (nonatomic,readonly) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSRange segment;                       //@synthesize segment=_segment - In the implementation block
-(unsigned long long)flags;
-(void)endEncoding;
-(void)setLabel:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(NSRange)segment;
-(void)insertDebugSignpost:(id)arg1 ;
-(id)init:(BinaryBuffer*)arg1 flags:(unsigned long long)arg2 ;
@end

