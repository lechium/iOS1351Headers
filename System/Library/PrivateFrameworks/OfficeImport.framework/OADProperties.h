/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OADProperties : NSObject {

	OADProperties* mParent;
	unsigned mIsMerged : 1;
	unsigned mIsMergedWithParent : 1;

}
+(id)defaultProperties;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)initWithDefaults;
-(void)flatten;
-(BOOL)isMergedPropertyForSelector:(SEL)arg1 ;
-(id)overrideForSelector:(SEL)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(id)possiblyInexistentOverrideForSelector:(SEL)arg1 ;
-(void)changeParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(BOOL)isMerged;
-(BOOL)isMergedWithParent;
-(void)setMerged:(BOOL)arg1 ;
-(void)setMergedWithParent:(BOOL)arg1 ;
-(void)removeUnnecessaryOverrides;
-(id)overrideForSelector:(SEL)arg1 mustExist:(BOOL)arg2 ;
-(void)p_setParent:(id)arg1 ;
@end

