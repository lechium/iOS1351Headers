/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2EncryptedPayload.h>

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {

	unsigned _fragmentNumber;
	unsigned _totalFragments;
	unsigned long long _nextPayload;

}

@property (assign) unsigned fragmentNumber;                     //@synthesize fragmentNumber=_fragmentNumber - In the implementation block
@property (assign) unsigned totalFragments;                     //@synthesize totalFragments=_totalFragments - In the implementation block
@property (assign) unsigned long long nextPayload;              //@synthesize nextPayload=_nextPayload - In the implementation block
+(id)copyTypeDescription;
-(unsigned long long)type;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(unsigned)fragmentNumber;
-(unsigned)totalFragments;
-(void)setFragmentNumber:(unsigned)arg1 ;
-(void)setTotalFragments:(unsigned)arg1 ;
-(unsigned long long)nextPayload;
-(void)setNextPayload:(unsigned long long)arg1 ;
@end
