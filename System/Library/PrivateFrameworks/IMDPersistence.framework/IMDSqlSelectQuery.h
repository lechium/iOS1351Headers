/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDPersistence/IMDSqlQuery.h>

@interface IMDSqlSelectQuery : IMDSqlQuery
+(id)selectQueryForTable:(id)arg1 ;
+(id)selectQueryForTable:(id)arg1 withColumns:(id)arg2 ;
+(id)selectQueryForTable:(id)arg1 withColumns:(id)arg2 where:(id)arg3 ;
-(id)initWithTableName:(id)arg1 ;
-(id)createQueryString;
@end
