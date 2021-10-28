/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CRKNetworkPowerAssertion : NSObject {

	unsigned mPowerAssertion;
	NSString* _name;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
+(id)sharedInstance;
+(void)decrement;
+(void)increment;
-(id)init;
-(NSString *)name;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)decrement;
-(void)increment;
@end
