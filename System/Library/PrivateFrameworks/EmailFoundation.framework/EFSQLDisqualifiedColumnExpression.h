/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailFoundation/EFSQLColumnExpression.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFSQLExpressable.h>

@class EFSQLColumnExpression, NSString;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable, EFSQLExpressable> {

	EFSQLColumnExpression* _columnExpression;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpression;              //@synthesize columnExpression=_columnExpression - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)ef_SQLExpression;
-(id)cachedSelf;
-(EFSQLColumnExpression *)columnExpression;
@end

