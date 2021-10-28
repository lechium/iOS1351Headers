/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DifferentialPrivacy/_DPCMSWordRecord.h>

@interface _DPHCMSWordRecord : _DPCMSWordRecord {

	int _fragmentBitIndex;
	int _sequenceBitIndex;

}

@property (assign,nonatomic) int fragmentBitIndex;              //@synthesize fragmentBitIndex=_fragmentBitIndex - In the implementation block
@property (assign,nonatomic) int sequenceBitIndex;              //@synthesize sequenceBitIndex=_sequenceBitIndex - In the implementation block
+(id)entityName;
-(id)description;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)jsonString;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(int)fragmentBitIndex;
-(void)setFragmentBitIndex:(int)arg1 ;
-(int)sequenceBitIndex;
-(void)setSequenceBitIndex:(int)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 sequenceBitIndex:(unsigned)arg5 plainFragment:(id)arg6 fragment:(id)arg7 fragmentHashIndex:(unsigned short)arg8 fragmentBitIndex:(unsigned)arg9 fragmentPosition:(unsigned short)arg10 creationDate:(double)arg11 submitted:(BOOL)arg12 objectId:(id)arg13 ;
@end
