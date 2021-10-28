/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, __NSHostExtraIvars, NSString;

@interface NSHost : NSObject {

	NSArray* names;
	NSArray* addresses;
	id reserved;

}

@property (nonatomic,retain) __NSHostExtraIvars * reserved; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * names; 
@property (copy,readonly) NSString * address; 
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * localizedName; 
+(id)currentHost;
+(id)hostWithName:(id)arg1 ;
+(id)hostWithAddress:(id)arg1 ;
+(BOOL)isHostCacheEnabled;
+(void)setHostCacheEnabled:(BOOL)arg1 ;
+(void)flushHostCache;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(__NSHostExtraIvars *)reserved;
-(NSString *)localizedName;
-(NSString *)address;
-(id)_thingToResolve;
-(NSArray *)names;
-(NSArray *)addresses;
-(id)initToResolve:(id)arg1 as:(int)arg2 ;
-(void)resolve:(/*^block*/id)arg1 ;
-(void)blockingResolveUntil:(int)arg1 ;
-(void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)resolveCurrentHostWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqualToHost:(id)arg1 ;
-(void)setReserved:(__NSHostExtraIvars *)arg1 ;
@end
