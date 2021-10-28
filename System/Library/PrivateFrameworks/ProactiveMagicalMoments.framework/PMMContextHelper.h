/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CDLocalContext;
@interface PMMContextHelper : NSObject {

	id<_CDLocalContext> _context;

}

@property (nonatomic,readonly) id<_CDLocalContext> context;              //@synthesize context=_context - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<_CDLocalContext>)context;
-(id)fetchContextValueForKeyPath:(id)arg1 ;
-(void)registerForNotifications:(id)arg1 ;
-(id)fetchDataDictionaryForKeyPath:(id)arg1 ;
@end
