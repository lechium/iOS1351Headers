/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedAggregateDictionary;
-(BOOL)isEnabled;
-(int)commit;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)clearScalarKey:(id)arg1 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)clearDistributionKey:(id)arg1 ;
-(void)significantTimeChanged;
-(void)incrementKey:(id)arg1 ;
-(void)decrementKey:(id)arg1 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
@end
