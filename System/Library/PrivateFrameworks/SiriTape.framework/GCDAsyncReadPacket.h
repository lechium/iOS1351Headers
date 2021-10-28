/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData, NSData;

@interface GCDAsyncReadPacket : NSObject {

	NSMutableData* buffer;
	unsigned long long startOffset;
	unsigned long long bytesDone;
	unsigned long long maxLength;
	double timeout;
	unsigned long long readLength;
	NSData* term;
	BOOL bufferOwner;
	unsigned long long originalBufferLength;
	long long tag;

}
-(id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7 ;
-(void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1 ;
-(unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(BOOL*)arg2 ;
-(long long)searchForTermAfterPreBuffering:(long long)arg1 ;
@end
