/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDSQLiteCheckConstraint.h>

@class NSString;

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {

	NSString* __rawSQL;

}

@property (nonatomic,copy,readonly) NSString * _rawSQL;              //@synthesize _rawSQL=__rawSQL - In the implementation block
+(id)checkConstraintWithSQL:(id)arg1 ;
-(id)SQLCheckConstraint;
-(id)_initWithSQL:(id)arg1 ;
-(NSString *)_rawSQL;
@end

