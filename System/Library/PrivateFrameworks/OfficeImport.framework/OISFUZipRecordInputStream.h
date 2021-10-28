/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OISFUBufferedInputStream;
@interface OISFUZipRecordInputStream : NSObject {

	id<OISFUBufferedInputStream> mInput;
	const char* mBuffer;
	long long mBufferStart;
	long long mBufferEnd;

}
-(void)dealloc;
-(id)initWithDataRepresentation:(id)arg1 ;
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 ;
@end
