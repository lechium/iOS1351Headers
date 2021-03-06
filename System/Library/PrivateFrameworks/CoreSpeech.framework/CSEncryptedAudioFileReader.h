/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSData;

@interface CSEncryptedAudioFileReader : NSObject {

	NSURL* _fileUrl;
	NSData* _aesKey;
	NSData* _readBuffer;
	unsigned long long _sampleByteDepth;

}

@property (nonatomic,retain) NSURL * fileUrl;                                 //@synthesize fileUrl=_fileUrl - In the implementation block
@property (nonatomic,retain) NSData * aesKey;                                 //@synthesize aesKey=_aesKey - In the implementation block
@property (nonatomic,retain) NSData * readBuffer;                             //@synthesize readBuffer=_readBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long sampleByteDepth;              //@synthesize sampleByteDepth=_sampleByteDepth - In the implementation block
-(NSURL *)fileUrl;
-(void)setFileUrl:(NSURL *)arg1 ;
-(NSData *)readBuffer;
-(void)setReadBuffer:(NSData *)arg1 ;
-(unsigned long long)sampleByteDepth;
-(id)initWithFileUrl:(id)arg1 aesKey:(id)arg2 sampleByteDepth:(unsigned long long)arg3 ;
-(BOOL)readAudioChunksWithCallback:(/*^block*/id)arg1 ;
-(NSData *)aesKey;
-(void)setAesKey:(NSData *)arg1 ;
-(void)setSampleByteDepth:(unsigned long long)arg1 ;
@end

