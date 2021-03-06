/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXPresentationAttributesManager.h>

@protocol SXPresentationAttributesManager <SXPresentationAttributesProvider>
@required
-(void)updateAttributes:(id)arg1;

@end


@class SXPresentationAttributes, NSHashTable, NSString;

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager> {

	SXPresentationAttributes* _presentationAttributes;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(SXPresentationAttributes *)presentationAttributes;
-(void)updateAttributes:(id)arg1 ;
-(void)attributesChangedFrom:(id)arg1 to:(id)arg2 ;
@end

