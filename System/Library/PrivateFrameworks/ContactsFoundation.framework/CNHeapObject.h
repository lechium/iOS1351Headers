/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CNHeapObject : NSObject {

	NSString* _className;
	NSString* _binary;
	unsigned long long _count;
	unsigned long long _bytes;

}

@property (nonatomic,retain) NSString * className;                  //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSString * binary;                     //@synthesize binary=_binary - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long bytes;              //@synthesize bytes=_bytes - In the implementation block
-(id)description;
-(unsigned long long)bytes;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)className;
-(void)setBytes:(unsigned long long)arg1 ;
-(NSString *)binary;
-(id)classAndBinaryKey;
-(void)setClassName:(NSString *)arg1 ;
-(void)setBinary:(NSString *)arg1 ;
@end

