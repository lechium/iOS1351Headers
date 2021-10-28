/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, NSObject;

@interface SXAXCustomRotorProvider : NSObject {

	NSSet* _cachedAvailableRotors;
	NSObject* _rootElement;

}

@property (assign,nonatomic,__weak) NSObject * rootElement;                     //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cachedAvailableRotors;              //@synthesize cachedAvailableRotors=_cachedAvailableRotors - In the implementation block
-(id)init;
-(void)setRootElement:(NSObject *)arg1 ;
-(NSObject *)rootElement;
-(id)initWithRootElement:(id)arg1 ;
-(id)graphSearchForAvailableCustomRotorsAndUpdateCache;
-(NSSet *)cachedAvailableRotors;
@end
