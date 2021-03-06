/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject {

	HDSimpleGraphDatabase* _database;
	long long _rowID;

}

@property (assign,nonatomic,__weak) HDSimpleGraphDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) long long rowID;                                      //@synthesize rowID=_rowID - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDatabase:(HDSimpleGraphDatabase *)arg1 ;
-(HDSimpleGraphDatabase *)database;
-(long long)rowID;
-(void)setRowID:(long long)arg1 ;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 ;
@end

