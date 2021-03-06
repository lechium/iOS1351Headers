/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NFResolver <NSObject>
@required
-(id)resolveProtocol:(id)arg1;
-(id)resolveClass:(Class)arg1 name:(id)arg2;
-(id)resolveProtocol:(id)arg1 name:(id)arg2;
-(id)resolveForKey:(id)arg1;
-(id)currentObjectGraphResolver:(unsigned long long)arg1;
-(void)linkResolverWithLinkBlock:(/*^block*/id)arg1;
-(id)resolveClass:(Class)arg1;
-(id)resolveClass:(Class)arg1 contextBlock:(/*^block*/id)arg2;
-(id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3;
-(id)resolveProtocol:(id)arg1 contextBlock:(/*^block*/id)arg2;
-(id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(/*^block*/id)arg3;
-(id)resolveForKey:(id)arg1 context:(id)arg2;
-(id)unsafeResolveForKey:(id)arg1 name:(id)arg2;
-(id)unsafeResolveForKey:(id)arg1 name:(id)arg2 context:(id)arg3;

@end

