/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ECIMAPAppendInfo : NSObject {

	unsigned _uidValidity;
	unsigned long long _newMessageUID;

}

@property (assign,nonatomic) unsigned uidValidity;                          //@synthesize uidValidity=_uidValidity - In the implementation block
@property (assign,nonatomic) unsigned long long newMessageUID;              //@synthesize newMessageUID=_newMessageUID - In the implementation block
-(unsigned)uidValidity;
-(void)setUidValidity:(unsigned)arg1 ;
-(unsigned long long)newMessageUID;
-(void)setNewMessageUID:(unsigned long long)arg1 ;
@end
