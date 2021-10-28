/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccessExpress/DataAccessExpress-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {

	NSString* _accountID;
	long long _dataclass;

}

@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long dataclass;               //@synthesize dataclass=_dataclass - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)accountID;
-(long long)dataclass;
-(id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2 ;
@end
