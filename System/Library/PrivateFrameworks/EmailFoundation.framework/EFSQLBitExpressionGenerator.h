/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailFoundation/EFSQLExpressionGenerator.h>

@protocol EFSQLExpressable;
@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator {

	id<EFSQLExpressable> _bitExpression;

}

@property (nonatomic,readonly) id<EFSQLExpressable> bitExpression;              //@synthesize bitExpression=_bitExpression - In the implementation block
-(id<EFSQLExpressable>)bitExpression;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 bitExpression:(id)arg4 ;
-(void)bitExpressionWithKeyColumn:(id)arg1 ;
@end

