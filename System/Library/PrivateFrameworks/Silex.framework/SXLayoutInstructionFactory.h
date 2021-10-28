/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXLayoutInstructionFactory.h>

@protocol SXLayoutInstructionFactory <NSObject>
@required
-(id)createInstructions;

@end


@protocol SXPresentationAttributesProvider;
@class NSString;

@interface SXLayoutInstructionFactory : NSObject <SXLayoutInstructionFactory> {

	id<SXPresentationAttributesProvider> _presentationAttributesProvider;

}

@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(id)createInstructions;
-(id)initWithPresentationAttributesProvider:(id)arg1 ;
@end
