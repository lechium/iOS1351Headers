/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface EFSQLPropertyMapper : NSObject {

	NSMutableDictionary* _lookupValues;

}

@property (nonatomic,retain) NSMutableDictionary * lookupValues;              //@synthesize lookupValues=_lookupValues - In the implementation block
+(id)emptyPropertyMapper;
-(id)init;
-(id)merge:(id)arg1 ;
-(id)columnNameForLookupKey:(id)arg1 value:(id)arg2 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 forClass:(Class)arg4 property:(SEL)arg5 ;
-(id)qualifiedColumnExpressionForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(BOOL)hasLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
-(id)valueForLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
-(void)setLookupValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lookupValues;
-(id)_findAllProtocolsOfClass:(Class)arg1 withProperty:(SEL)arg2 ;
-(void)registerColumn:(id)arg1 forProtocol:(id)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(id)valueForLookupKey:(id)arg1 protocol:(id)arg2 property:(SEL)arg3 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 ;
-(id)_qualifiedColumnExpressionForColumn:(id)arg1 availableTables:(id)arg2 ;
-(void)registerColumn:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(id)columnForClass:(Class)arg1 property:(SEL)arg2 ;
-(id)columnForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)columnForLookupKey:(id)arg1 value:(id)arg2 ;
-(id)columnNameForClass:(Class)arg1 property:(SEL)arg2 ;
-(id)columnNameForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)qualifiedColumnExpressionForLookupKey:(id)arg1 value:(id)arg2 availableTables:(id)arg3 ;
@end

