/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSInputStream.h>

@class SLRequestMultiPart, NSData;

@interface SLRequestMultiPartInputStream : NSInputStream {

	SLRequestMultiPart* _multiPart;
	unsigned long long _streamStatus;
	unsigned long long _bytesReadInState;
	unsigned long long _totalBytesRead;
	NSData* _srcData;
	int _currentState;

}
-(unsigned long long)length;
-(void)open;
-(void)close;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
-(void)transitionState;
-(unsigned long long)readStateSourceData:(id)arg1 toBuffer:(char*)arg2 offset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 ;
-(long long)currentStateRead:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithMultiPart:(id)arg1 ;
@end

