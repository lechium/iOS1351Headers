/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBDomainAttributeManaging <NSObject>
@required
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
-(id)allEntitlements;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;

@end

