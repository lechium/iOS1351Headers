/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSSerializerStream
@required
-(void)copySerializationInto:(void*)arg1;
-(unsigned long long)writeInt:(unsigned long long)arg1;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2;
-(unsigned long long)writeRoomForInt:(int*)arg1;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;

@end

