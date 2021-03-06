/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RTTUtilities/RTTSettings.h>

@class NPSDomainAccessor;

@interface RTTNanoSettings : RTTSettings {

	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)currentLocale;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)uuidFromContext:(id)arg1 ;
-(id)valueForPreferenceKey:(id)arg1 andContext:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
@end

