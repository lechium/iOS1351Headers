/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWNavigationHandler.h>

@protocol SXActionProvider, SXActionManager;
@class NSString;

@interface SXWebContentActionNavigationHandler : NSObject <SWNavigationHandler> {

	id<SXActionProvider> _actionProvider;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;              //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)handleRequest:(id)arg1 ;
-(id<SXActionProvider>)actionProvider;
-(id<SXActionManager>)actionManager;
-(id)initWithActionProvider:(id)arg1 actionManager:(id)arg2 ;
@end
