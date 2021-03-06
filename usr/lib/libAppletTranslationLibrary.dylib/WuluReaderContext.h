/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAppletTranslationLibrary.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSMutableArray, NSNumber, WuluRecord;

@interface WuluReaderContext : NSObject {

	NSData* _file15;
	NSData* _file17;
	NSMutableArray* _file18;
	NSMutableArray* _file1E;
	NSMutableArray* _file1A;
	NSNumber* _balance;
	WuluRecord* _localRecord;

}

@property (nonatomic,retain) NSData * file15;                       //@synthesize file15=_file15 - In the implementation block
@property (nonatomic,retain) NSData * file17;                       //@synthesize file17=_file17 - In the implementation block
@property (nonatomic,retain) NSMutableArray * file18;               //@synthesize file18=_file18 - In the implementation block
@property (nonatomic,retain) NSMutableArray * file1E;               //@synthesize file1E=_file1E - In the implementation block
@property (nonatomic,retain) NSMutableArray * file1A;               //@synthesize file1A=_file1A - In the implementation block
@property (nonatomic,retain) NSNumber * balance;                    //@synthesize balance=_balance - In the implementation block
@property (nonatomic,retain) WuluRecord * localRecord;              //@synthesize localRecord=_localRecord - In the implementation block
+(id)readAllFiles:(id)arg1 debug:(BOOL)arg2 error:(id*)arg3 ;
-(NSNumber *)balance;
-(void)setBalance:(NSNumber *)arg1 ;
-(WuluRecord *)localRecord;
-(NSData *)file15;
-(NSData *)file17;
-(NSMutableArray *)file1A;
-(NSMutableArray *)file1E;
-(NSMutableArray *)file18;
-(id)readAll:(id)arg1 debug:(BOOL)arg2 error:(id*)arg3 ;
-(id)readBalance:(id)arg1 error:(id*)arg2 ;
-(id)readBinary:(id)arg1 sfi:(unsigned char)arg2 error:(id*)arg3 ;
-(void)setFile15:(NSData *)arg1 ;
-(void)setFile17:(NSData *)arg1 ;
-(void)setFile18:(NSMutableArray *)arg1 ;
-(void)setFile1E:(NSMutableArray *)arg1 ;
-(id)readRecord:(id)arg1 sfi:(unsigned char)arg2 index:(unsigned char)arg3 error:(id*)arg4 ;
-(id)readExtendedRecord:(id)arg1 sfi:(unsigned char)arg2 index:(unsigned char)arg3 error:(id*)arg4 ;
-(void)setFile1A:(NSMutableArray *)arg1 ;
-(void)readAdditionalFile:(id)arg1 cityCode:(id)arg2 ;
-(void)dumpAllFiles;
-(void)setLocalRecord:(WuluRecord *)arg1 ;
@end

