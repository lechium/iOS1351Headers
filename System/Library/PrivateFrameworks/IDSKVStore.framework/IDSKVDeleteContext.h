/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IDSKVDeleteContext : NSObject {

	char _valueType;
	unsigned long long _rowIDCutoff;

}

@property (assign,nonatomic) unsigned long long rowIDCutoff;              //@synthesize rowIDCutoff=_rowIDCutoff - In the implementation block
@property (assign,nonatomic) char valueType;                              //@synthesize valueType=_valueType - In the implementation block
-(char)valueType;
-(void)setValueType:(char)arg1 ;
-(unsigned long long)rowIDCutoff;
-(void)setRowIDCutoff:(unsigned long long)arg1 ;
@end
