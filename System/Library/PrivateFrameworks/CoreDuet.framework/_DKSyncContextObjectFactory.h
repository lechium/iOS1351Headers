/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, _DKSyncContext;

@interface _DKSyncContextObjectFactory : NSObject {

	NSMutableDictionary* _instances;
	_DKSyncContext* _context;
	Class _class;

}

@property (nonatomic,readonly) _DKSyncContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) Class class;                           //@synthesize class=_class - In the implementation block
+(id)objectFactoryForClass:(Class)arg1 context:(id)arg2 ;
-(Class)class;
-(_DKSyncContext *)context;
-(id)instance;
-(id)initWithContext:(id)arg1 fabricateClass:(Class)arg2 ;
@end

