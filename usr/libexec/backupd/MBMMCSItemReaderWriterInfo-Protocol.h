//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol MBMMCSItemReaderWriterInfo
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)readWithOffset:(unsigned long long)arg1 buffer:(char *)arg2 bufferLength:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)statWithSize:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)openWithError:(id *)arg1;
@end

