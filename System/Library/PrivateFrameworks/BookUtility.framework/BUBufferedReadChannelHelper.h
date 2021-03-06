/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BUStreamReadChannel.h>

@class BUBufferedReadChannel, NSString;

@interface BUBufferedReadChannelHelper : NSObject <BUStreamReadChannel> {

	BUBufferedReadChannel* _bufferedReadChannel;

}

@property (assign,nonatomic,__weak) BUBufferedReadChannel * bufferedReadChannel;              //@synthesize bufferedReadChannel=_bufferedReadChannel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)close;
-(id)initWithBufferedReadChannel:(id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(BUBufferedReadChannel *)bufferedReadChannel;
-(void)setBufferedReadChannel:(BUBufferedReadChannel *)arg1 ;
@end

