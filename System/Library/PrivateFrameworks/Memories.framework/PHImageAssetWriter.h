/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/PHAssetWriter.h>

@class NSData;

@interface PHImageAssetWriter : PHAssetWriter {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)request;
-(id)transfer;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
@end
