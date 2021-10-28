/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CLKUIMmapFile : NSObject {

	int _descriptor;
	NSString* _path;
	unsigned long long _length;
	const void* _bytes;

}

@property (nonatomic,readonly) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int descriptor;                         //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) const void* bytes;                      //@synthesize bytes=_bytes - In the implementation block
+(id)mmapFileWithPath:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(NSString *)path;
-(int)descriptor;
-(id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(unsigned long long)arg3 bytes:(const void*)arg4 ;
@end
